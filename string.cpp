#include "string.h"

int strlen(const char *text)
{
    int len = 0;
    while (text[len] != '\0')
    {
        len++;
    }
    return len;
}

string::string()
{
    length = 0;
    data = new char[1];
    data[0] = '\0';
}

string::string(const char *text)
{
    length = strlen(text);
    data = new char[length + 1];
    for (unsigned int i = 0; i < length; i++)
    {
        data[i] = text[i];
    }
    data[length] = '\0';
}

string::~string()
{
    delete[] data;
}