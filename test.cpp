#include <iostream>
#include "./src/textformatpp.h"

int main(void)
{
    // output some magenta text to the terminal
    std::cout << text::magenta("hi") << std::endl;
    return 0;
}
