#pragma once

class string
{
private:
    char *data;
    int length;

public:
    string();
    string(char *text);
    ~string();
};

string::string()
{
}

string::~string()
{
}
