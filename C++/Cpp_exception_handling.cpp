void process_input(int n) 
{
    try
    {
        int d = largest_proper_divisor(n);
        std::cout << "result=" << d << '\n';
    }
    catch(std::invalid_argument& iv)
    {
        std::cout << iv.what()<<'\n';
    }
    std::cout << "returning control flow to caller";
}
