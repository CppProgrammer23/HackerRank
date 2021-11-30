class Calculator : public exception
{
    public:
    const char* what() const noexcept
    {
        return "n and p should be non-negative";
    }
    int power(int n, int p) noexcept(false)
    {
        if(n < 0 || p < 0)
            throw invalid_argument("n and p should be non-negative");
        if(p == 0)
            return 1;
        else
            return n * power(n, p-1);
    }
};
