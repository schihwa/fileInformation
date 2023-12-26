# Makefile

# Compiler to use
CXX := g++

# Compiler flags
CXXFLAGS := -Wall -Wextra -g -std=c++20

# common directory
commonDIR := common

# Source directory
SRCDIR := src

# Object files directory
OBJDIR := obj

# Executable directory
BINDIR := bin

# Executable name
EXECUTABLE := $(BINDIR)/myProgram

# Source files
SOURCES := $(wildcard $(SRCDIR)/*.cpp)

# Object files
OBJECTS := $(SOURCES:$(SRCDIR)/%.cpp=$(OBJDIR)/%.o)

# Default target
all: $(EXECUTABLE)

# Create the directories
directories:
	if not exist "bin" mkdir "bin"
	if not exist "obj" mkdir "obj"


# Linking
$(EXECUTABLE): $(OBJECTS)
	$(CXX) $(CXXFLAGS) $(OBJECTS) -o $@

# Compiling
$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	$(CXX) $(CXXFLAGS) -I$(commonDIR) -c $< -o $@

# Clean up
clean:
	if exist obj (rmdir /s /q obj)
	if exist bin\myProgram.exe (del bin\myProgram.exe)


# Run the program with two arguments
run: all
	./$(EXECUTABLE) $(arg1) $(arg2)

.PHONY: all clean run directories
