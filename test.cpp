#include <iostream>
#include "./src/textformatpp.h"

int main(void)
{
    // output some magenta text to the terminal
    std::cout << text::magenta("hi") << std::endl;
    std::cout << text::green("hi") << std::endl;
    std::cout << text::yellow("hi") << std::endl;
    std::cout << text::blue("hi") << std::endl;

    std::cout << text::red("Error Message:", true);
    std::cout << "hi" << std::endl;
    std::cout << "dolfus" << text::disable_multiline() << std::endl;

    std::cout << "normal" << std::endl;
    return 0;
}
