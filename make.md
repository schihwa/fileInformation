# Text File Analyzer

## Overview
Text File Analyzer is a command-line tool written in C++ for analyzing text files. It offers functionalities to count bytes, lines, words, and characters in a given text file.

## Features
- **Byte Count**: Count the number of bytes in a file.
- **Line Count**: Count the number of lines in a file.
- **Word Count**: Count the number of words in a file.
- **Character Count**: Count the number of characters in a file.

## Requirements
- C++ Compiler
- Standard C++ Libraries

## Installation
[Instructions on how to compile and build the project, ideally derived from the `makefile`]

## Usage
Run the program with a filename and an optional command:
   ```bash 
   ./bin/myProgram [command] <filename> 
   ```

Commands:
- `-c`: Byte count
- `-l`: Line count
- `-w`: Word count
- `-m`: Character count
If no command is provided, the program will execute character count, line count, and word count in sequence.


