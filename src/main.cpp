#include <iostream>
#include "commands.h"

#include <iostream>
#include <memory>
#include "commands.h"

void commandChecker(const std::string &command, const std::string fileName)
{
    if (command == "") {
        std::make_unique<charCount>()->execute(fileName); 
        std::make_unique<lineCount>()->execute(fileName); 
        std::make_unique<wordCount>()->execute(fileName);
    }
    else if (command == "-c") std::make_unique<byteCount>()->execute(); 
    else if (command == "-l") std::make_unique<lineCount>()->execute(fileName); 
    else if (command == "-w") std::make_unique<wordCount>()->execute(fileName); 
    else if (command == "-m") std::make_unique<charCount>()->execute(fileName); 
    else std::cerr << "Invalid command: " << command;
    return;
}



int main(int argc, char *argv[]) {
    std::string command;
    std::string fileName;

    // Check if at least the filename is provided
    if (argc > 1) {
        fileName = argv[1];
    } else {
        std::cerr << "Usage: " << argv[0] << " [file name] [optional: command]" << std::endl;
        return 1;
    }

    // Check if a second argument (command) is provided
    if (argc > 2) {
        command = argv[2];
    }

    commandChecker(command, fileName);
    return 0;
}
