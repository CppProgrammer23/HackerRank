int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n; cin>>n;
    set<int> s;
    for(auto i=0; i<n;i++)
    {
        int a,b; cin >> a >> b;
        switch(a)
        {
            case 1:
                s.insert(b);
                break;
            case 2:
                s.erase(b);
                break;
            case 3:
                cout << (s.find(b) == s.end() ? "No\n" : "Yes\n");
                break;
        }
    }
    return 0;
}
