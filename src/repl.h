#include <string>

namespace balinor
{

class Repl
{
    std::string buffer;
    
public:
    static int input_loop();
    
    const std::string& getInputBuffer();
    void printPrompt();
    void readInput();
};

}
