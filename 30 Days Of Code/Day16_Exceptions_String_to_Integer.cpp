try
{
    int value = stoi(S);
    cout << value;
}
catch(const invalid_argument& e)
{
    cout << "Bad String";
}
