#include "textformatpp.h"
#include <string>

namespace text {

    // foreground colors----------------------------------------------
    std::string black(std::string str) {
        str = Format::BEGIN + Color::Fg::BLACK + str + Format::END;    
        return str;
    }

    std::string black(std::string str, bool multiline) {
        if(multiline == true)
            str = Format::BEGIN + Color::Fg::BLACK + str + Format::MULTILINE_END;
        else
            str = black(str);
        return str;
    }

    std::string red(std::string str) {
        str = Format::BEGIN + Color::Fg::RED + str + Format::END;    
        return str;
    }

    std::string red(std::string str, bool multiline) {
        if(multiline == true)
            str = Format::BEGIN + Color::Fg::RED + str + Format::MULTILINE_END;
        else
            str = red(str);
        return str;
    }

    std::string green(std::string str) {
        str = Format::BEGIN + Color::Fg::GREEN + str + Format::END;    
        return str;
    }

    std::string green(std::string str, bool multiline) {
        if(multiline == true)
            str = Format::BEGIN + Color::Fg::GREEN + str + Format::MULTILINE_END;
        else
            str = green(str);
        return str;
    }

    std::string yellow(std::string str) {
        str = Format::BEGIN + Color::Fg::YELLOW + str + Format::END;    
        return str;
    }

    std::string yellow(std::string str, bool multiline) {
        if(multiline == true)
            str = Format::BEGIN + Color::Fg::YELLOW + str + Format::MULTILINE_END;
        else
            str = yellow(str);
        return str;
    }

    std::string blue(std::string str) {
        str = Format::BEGIN + Color::Fg::BLUE + str + Format::END;    
        return str;
    }

    std::string blue(std::string str, bool multiline) {
        if(multiline == true)
            str = Format::BEGIN + Color::Fg::BLUE + str + Format::MULTILINE_END;
        else
            str = blue(str);
        return str;
    }

    std::string magenta(std::string str) {
        str = Format::BEGIN + Color::Fg::MAGENTA + str + Format::END;    
        return str;
    }

    std::string magenta(std::string str, bool multiline) {
        if(multiline == true)
            str = Format::BEGIN + Color::Fg::MAGENTA + str + Format::MULTILINE_END;
        else
            str = magenta(str);
        return str;
    }

    std::string cyan(std::string str) {
        str = Format::BEGIN + Color::Fg::CYAN + str + Format::END;    
        return str;
    }

    std::string cyan(std::string str, bool multiline) {
        if(multiline == true)
            str = Format::BEGIN + Color::Fg::CYAN + str + Format::MULTILINE_END;
        else
            str = cyan(str);
        return str;
    }

    std::string white(std::string str) {
        str = Format::BEGIN + Color::Fg::WHITE + str + Format::END;    
        return str;
    }

    std::string white(std::string str, bool multiline) {
        if(multiline == true)
            str = Format::BEGIN + Color::Fg::WHITE + str + Format::MULTILINE_END;
        else
            str = white(str);
        return str;
    }

    // background colors----------------------------------------------
    std::string black_bg(std::string str) {
        str = Format::BEGIN + Color::Bg::BLACK + str + Format::END;    
        return str;
    }

    std::string black_bg(std::string str, bool multiline) {
        if(multiline == true)
            str = Format::BEGIN + Color::Bg::RED + str + Format::MULTILINE_END;
        else
            str = black_bg(str);
        return str;
    }

    std::string red_bg(std::string str) {
        str = Format::BEGIN + Color::Bg::RED + str + Format::END;    
        return str;
    }

    std::string red_bg(std::string str, bool multiline) {
        if(multiline == true)
            str = Format::BEGIN + Color::Bg::RED + str + Format::MULTILINE_END;
        else
            str = red_bg(str);
        return str;
    }

    std::string green_bg(std::string str) {
        str = Format::BEGIN + Color::Bg::GREEN + str + Format::END;    
        return str;
    }

    std::string green_bg(std::string str, bool multiline) {
        if(multiline == true)
            str = Format::BEGIN + Color::Bg::GREEN + str + Format::MULTILINE_END;
        else
            str = green_bg(str);
        return str;
    }

    std::string yellow_bg(std::string str) {
        str = Format::BEGIN + Color::Bg::YELLOW + str + Format::END;    
        return str;
    }

    std::string yellow_bg(std::string str, bool multiline) {
        if(multiline == true)
            str = Format::BEGIN + Color::Bg::YELLOW + str + Format::MULTILINE_END;
        else
            str = yellow_bg(str);
        return str;
    }

    std::string blue_bg(std::string str) {
        str = Format::BEGIN + Color::Bg::BLUE + str + Format::END;    
        return str;
    }

    std::string blue_bg(std::string str, bool multiline) {
        if(multiline == true)
            str = Format::BEGIN + Color::Bg::BLUE + str + Format::MULTILINE_END;
        else
            str = blue_bg(str);
        return str;
    }

    std::string magenta_bg(std::string str) {
        str = Format::BEGIN + Color::Bg::MAGENTA + str + Format::END;    
        return str;
    }

    std::string magenta_bg(std::string str, bool multiline) {
        if(multiline == true)
            str = Format::BEGIN + Color::Bg::MAGENTA + str + Format::MULTILINE_END;
        else
            str = magenta_bg(str);
        return str;
    }

    std::string cyan_bg(std::string str) {
        str = Format::BEGIN + Color::Bg::CYAN + str + Format::END;    
        return str;
    }

    std::string cyan_bg(std::string str, bool multiline) {
        if(multiline == true)
            str = Format::BEGIN + Color::Bg::CYAN + str + Format::MULTILINE_END;
        else
            str = cyan_bg(str);
        return str;
    }

    std::string white_bg(std::string str) {
        str = Format::BEGIN + Color::Bg::WHITE + str + Format::END;    
        return str;
    }

    std::string white_bg(std::string str, bool multiline) {
        if(multiline == true)
            str = Format::BEGIN + Color::Bg::WHITE + str + Format::MULTILINE_END;
        else
            str = white_bg(str);
        return str;
    }


    // formatting-----------------------------------------------------
    
    std::string disable_multiline() {
        return Format::END;
    }

    std::string underline(std::string str) {
        str = Format::BEGIN + Format::Text::UNDERLINE + str + Format::END;    
        return str;
    }
}
