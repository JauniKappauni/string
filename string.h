class string
{
private:
    char *data = nullptr;

public:
    string()
    {
        data = new char[1];
        data[0] = '\0';
    };
    ~string()
    {
        delete[] data;
    };

    int strlen(char *str)
    {
        unsigned int i = 0;
        for (i; str[i] != '\0'; i++)
            ;
        return i;
    }
};
