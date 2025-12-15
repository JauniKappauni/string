#pragma once

class string
{
private:
    char *data;
    int length;

public:
    string();
    string(const char *text);
    ~string();
};


