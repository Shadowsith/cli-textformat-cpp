# cli-textformat-cpp

Textformatpp is a lightweight C++ library to write colored and formated code into your linux terminal cli.<br>
It has intentionally no class overhead to keep it as lightweight as possible and it is only capsuled into the 'text' namespaces. 

## Motivation
I was inspired by this [stackoverflow post](https://stackoverflow.com/questions/2616906/how-do-i-output-coloured-text-to-a-linux-terminal)
to make a good color/simple format library for C++ error and test messages on linux terminal. 

## Features
* Coloring text (black, red, green, yellow, blue, magenta, cyan, white)
    * foreground and background support
* bold, underline and inverse text
* multiline support 

## Installation
* Copy the source and header file from /src into your project and import the header.

## Examples
test.cpp is a reference how it works and can compiled and run with the Makefile<br>
```
make run
```

The library is capsuled at the namespace text. I don't recommend to use the <code>using
text;</code> statement.

Below are also some examples:
```cpp
std::cout << text::green("Hello World!") << std::endl; // green text at console output
std::cout << text::green("Multi line Example", true) << std::endl; // enables multiline support 
std::cout << "Test" << std::endl; // green text 
std::cout << "Hello" << text::disable_multiline() << std::endl; // green text, disables multiline 
std::cout << "Normal" << std::endl; // normal console output (not green); 
std::cout << text::bold(text::underline(text::red)) << std::endl; // bold and green 
```

## TODO
* port to other languages when finished

## Support
If some errors appears please write a issue that I can fix it

## License
MIT
