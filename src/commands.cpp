#include "../common/commands.h"
#include <iostream>
#include <filesystem>
#include <fstream>
#include <algorithm>
#include <iterator>

void byteCount::execute()
{
    std::uintmax_t fileSize = std::filesystem::file_size("test.txt");
    std::cout << "File size: " << fileSize << " bytes" << std::endl;
    return;
}

void lineCount::execute(const std::string &fileName)
{
    std::ifstream file(fileName, std::ios::in);
    int count = std::count(std::istreambuf_iterator<char>(file),
                           std::istreambuf_iterator<char>(), '\n');
    std::cout << "number of new lines: " << count << " lines" << std::endl;
}

void wordCount::execute(const std::string &fileName)
{
    std::ifstream file(fileName, std::ios::in);
    std::istream_iterator<std::string> start(file), end;
    int count = std::distance(start, end);
    std::cout << "number of lines: " << count << " lines" << std::endl;
}

void charCount::execute(const std::string &fileName)
{
    std::ifstream file(fileName, std::ios::in);
    // Use std::istreambuf_iterator for character-wise iteration
    std::istreambuf_iterator<char> start(file), end;
    int count = std::distance(start, end);
    std::cout << "number of characters: " << count << " characters" << std::endl;
}