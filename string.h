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
    int size() const;
    const char *c_str() const;
    char& operator[](int index);
    const char& operator[](int index) const;
};


