int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    vector<int>vec;
    for(auto i=0; i<n; i++)
    {
        int b; cin >> b;
        vec.push_back(b);
    }
    int x; cin>>x;
    vec.erase(remove_if(vec.begin(), vec.end(), [&](int& i){return vec[x-1] == i;}));
    int a,b; cin >>a>>b;
    vec.erase(vec.begin()+a-1, vec.begin()+b-1);
    cout << vec.size() <<'\n';
    for (auto i : vec)
    cout << i << " ";
    return 0;
}
