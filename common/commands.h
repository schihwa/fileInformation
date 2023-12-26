#pragma once
#include <string>

class CommandWithoutFile
{
public:
    virtual void execute() = 0;
    virtual ~CommandWithoutFile() = default;
};

class CommandWithFile
{
public:
    virtual void execute(const std::string &fileName) = 0;
    virtual ~CommandWithFile() = default;
};

class byteCount : public CommandWithoutFile
{
public:
    void execute() override;
};

class lineCount : public CommandWithFile
{
public:
    void execute(const std::string &fileName) override;
};
