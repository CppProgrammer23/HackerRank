try
{
    int value = stoi(S);
    cout << value;
}
catch(invalid_argument& e)
{
    cout << "Bad String";
}
