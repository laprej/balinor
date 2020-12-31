#include <memory>
#include <iostream>

#include "repl.h"

namespace balinor
{

void Repl::printPrompt()
{
    std::cout << "bal> ";
}

void Repl::readInput()
{
    std::getline(std::cin, buffer);
}

int Repl::input_loop(void)
{
    auto repl = std::make_unique<Repl>();

    while (true) {
        repl->printPrompt();
        repl->readInput();
        
        if (repl->getInputBuffer() == ".exit") {
        }
        else {
            std::cout << "Unrecognized command \n";
        }
    }
}

const std::string& Repl::getInputBuffer()
{
    return buffer;
}

}
