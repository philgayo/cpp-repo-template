#include <greeter.h>

#include <iostream>

#include "CLI/App.hpp"
#include "CLI/Config.hpp"
#include "CLI/Formatter.hpp"

int main(int argc, char **argv) {
    CLI::App app{"Greeter is a sample application"};

    bool noBye = false;
    app.add_flag("-n,--no_bye", noBye, "Do not say goodbye");

    CLI11_PARSE(app, argc, argv);

    Greeter greeter("toto");

    std::cout << greeter.say_hello() << std::endl;
    if (!noBye) {
        std::cout << greeter.say_goodbye() << std::endl;
    }
    return 0;
}