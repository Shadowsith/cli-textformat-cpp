# cli-textformatpp

Textformatpp is a lightweight tool to write colored and formatted code into your linux terminal cli.<br>
It has no class overhead and is only capsuled into the text namespace.

## Motivation
I was inspired by this [stackoverflow post](https://stackoverflow.com/questions/2616906/how-do-i-output-coloured-text-to-a-linux-terminal)
to make a good color/simple format library for C++ error and test messages on linux. 

## TODO
* some examples
* port to other languages when finished

## Working
* Coloring text (black, red, green, yellow, blue, magenta, cyan, white)
    * foreground and background support
* bold, underline and inverse text
* multiline support 

## Examples
test.cpp is a reference how it works and can compiled and run with the Makefile<br>
<code>make run</code>

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
