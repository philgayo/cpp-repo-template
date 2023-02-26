#pragma once

#include <string>

/**
 * @brief This class is used to greet somebody
 * 
 */
class Greeter {
   public:
    /**
     * @brief Construct a new Greeter object
     *
     * @param name
     * The name of the person to greet
     */
    Greeter(const std::string& name);

    /**
     * @brief Destroy the Greeter object
     *
     */
    virtual ~Greeter() = default;

    /**
     * @brief Say hello to the person to greet
     *
     * @return std::string
     */
    std::string say_hello();

    /**
     * @brief Say goodbye to the person to greet
     *
     * @return std::string
     */
    std::string say_goodbye();

   private:
    /**
     * @brief name of the person to be greeted
     *
     */
    std::string _name;
};
