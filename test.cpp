#include <iostream>
#include "./src/textformatpp.h"

int main(void)
{
    // output some magenta text to the terminal
    std::cout << "Foreground color test:" << std::endl;
    std::cout << text::magenta("magenta message") << std::endl;
    std::cout << text::green("green message") << std::endl;
    std::cout << text::yellow("yellow message") << std::endl;
    std::cout << text::blue("blue message") << std::endl;
    std::cout << text::white("white message") << std::endl;
    std::cout << text::black("black message") << std::endl;
    std::cout << std::endl;

    std::cout << "Background color test:" << std::endl;
    std::cout << text::magenta_bg("magenta message") << std::endl;
    std::cout << text::green_bg("green message") << std::endl;
    std::cout << text::yellow_bg("yellow message") << std::endl;
    std::cout << text::blue_bg("blue message") << std::endl;
    std::cout << text::white_bg(text::black("white message")) << std::endl;
    std::cout << text::black_bg("black message") << std::endl;
    std::cout << std::endl;

    std::cout << text::red("Error Message:", true) << std::endl;
    std::cout << "Error 1 at line 2" << std::endl;
    std::cout << "Error 2 at line 40" << std::endl;

    text::disable_multiline();

    std::cout << "normal" << std::endl;

    std::cout << text::green(text::bold(text::underline("Sucess message:", true), true), true) << std::endl;
    std::cout << "All tests succeed:" << std::endl;
    std::cout << "program runs as expected" << text::disable_multiline() << std::endl;

    std::cout << "normal" << std::endl;
    std::cout << "test" << std::endl;
    
    return 0;
}
