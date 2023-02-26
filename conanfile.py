from conan import ConanFile, tools
from conan.tools.cmake import CMake, cmake_layout, CMakeDeps

class Greetings(ConanFile):
    name = "greetings"
    license = "Unlicense"
    url=""
    package_type = "application"
    settings = "os", "compiler", "build_type", "arch"
    generators = "CMakeToolchain", "CMakeDeps"
    requires = "spdlog/1.11.0", "cli11/2.3.2"
    build_policy = "missing"
    options = {
        "enable_testing": [True, False],
        "enable_docs": [True, False],
    }
    default_options = {
        "enable_testing": True,
        "enable_docs": False,
    }

    def build_requirements(self):
        if(self.options.enable_docs):
            self.tool_requires("doxygen/1.9.4")
        if(self.options.enable_testing):
            self.test_requires("gtest/cci.20210126")
    
    def layout(self):
        cmake_layout(self)

    def build(self):
        cmake = CMake(self)
        cmake.configure(variables={
            "ENABLE_TESTING": self.options.enable_testing, 
            "ENABLE_DOCS": self.options.enable_docs,
            })
        cmake.build()
        cmake.test()

    def package(self):
        cmake = CMake(self)
        cmake.install()