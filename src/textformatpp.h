#ifndef TEXTFOMATPP_H
#define TEXTFOMATPP_H

#include <string>

namespace text {

    namespace Format {
        const std::string BEGIN = "\033[";
        const std::string END = "\033[0m";
        const std::string MULTILINE_END = "\033[0a";

        namespace Text {
            const std::string RESET = "0m";
            const std::string BOLD = "1m";
            const std::string UNDERLINE = "4m";
            const std::string INVERSE = "7m";
            const std::string BOLD_OFF = "21m";
            const std::string UNDERLINE_OFF = "24m";
            const std::string INVERSE_OFF = "27m";
        }
    };

    namespace Color {
        namespace Fg {
            const std::string BLACK = "30m";
            const std::string RED = "31m";
            const std::string GREEN = "32m";
            const std::string YELLOW = "33m";
            const std::string BLUE = "34m";
            const std::string MAGENTA = "35m";
            const std::string CYAN = "36m";
            const std::string WHITE = "37m";
        };

        namespace Bg { 
            const std::string BLACK = "40m";
            const std::string RED = "41m";
            const std::string GREEN = "42m";
            const std::string YELLOW = "43m";
            const std::string BLUE = "44m";
            const std::string MAGENTA = "45m";
            const std::string CYAN = "46m";
            const std::string WHITE = "47m";
        };
    };

    //fg colors
    std::string black(std::string text);
    std::string black(std::string text, bool multiline);
    std::string red(std::string text);
    std::string red(std::string text, bool multiline);
    std::string green(std::string text);
    std::string green(std::string text, bool multiline);
    std::string yellow(std::string text);
    std::string yellow(std::string text, bool multiline);
    std::string blue(std::string text);
    std::string blue(std::string text, bool multiline);
    std::string magenta(std::string text);
    std::string magenta(std::string text, bool multiline);
    std::string cyan(std::string text);
    std::string cyan(std::string text, bool multiline);
    std::string white(std::string text);
    std::string white(std::string text, bool multiline);

    //bg colors
    std::string black_bg(std::string text);
    std::string black_bg(std::string text, bool multiline);
    std::string red_bg(std::string text);
    std::string red_bg(std::string text, bool multiline);
    std::string green_bg(std::string text);
    std::string green_bg(std::string text, bool multiline);
    std::string yellow_bg(std::string text);
    std::string yellow_bg(std::string text, bool multiline);
    std::string blue_bg(std::string text);
    std::string blue_bg(std::string text, bool multiline);
    std::string magenta_bg(std::string text);
    std::string magenta_bg(std::string text, bool multiline);
    std::string cyan_bg(std::string text);
    std::string cyan_bg(std::string text, bool multiline);
    std::string white_bg(std::string text);
    std::string white_bg(std::string text, bool multiline);

    std::string bold(std::string text); 
    std::string bold(std::string text, bool multiline);
    std::string disable_multiline();
    std::string inverse(std::string text); 
    std::string inverse(std::string text, bool multiline); 
    std::string underline(std::string text);
    std::string underline(std::string, bool multiline);
}

#endif
