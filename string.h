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
};
