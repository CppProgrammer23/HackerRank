int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    unsigned n;
    cin >> n;
    for(unsigned k = 0; k < n; k++)
    {
        unsigned number;
        unsigned nbr = 0;
        cin >> number;
        for(auto i = 2; i*i <= number; i++)
        {
            if(number % i == 0)
                nbr++;
        }
        if(nbr || number == 1)
            cout << "Not prime\n";
        else
            cout << "Prime\n";
    }   
    return 0;
}
