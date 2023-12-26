#include <iostream>
#include "commands.h"

#include <iostream>
#include <memory>
#include "commands.h"

void commandChecker(const std::string &command, const std::string fileName)
{
    if (command == "-c") std::make_unique<byteCount>()->execute(); 
    else if (command == "-l") std::make_unique<lineCount>()->execute(fileName); 
    else std::cerr << "Invalid command: " << command;
}



int main(int argc, char *argv[]) {
        if (argc != 3) {
        std::cerr << "Usage: " << argv[0] << " <command> <fileName>" << std::endl;
        return 1;
    }

    std::string command = argv[1];
    std::string fileName = argv[2];

    commandChecker(command, fileName);
    return 0;
}