#include <greeter.h>

Greeter::Greeter(const std::string &name) : _name(name) {}

std::string Greeter::say_hello() { return "Hello " + _name; }

std::string Greeter::say_goodbye() { return "Goodbye " + _name; }
