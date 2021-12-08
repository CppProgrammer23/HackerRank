int index = 0;
vector<int> sum(16);
for (int i = 0; i < 4; i++) 
{
    for (int j = 0; j < 4; j++) 
    {
        sum[index] = arr[i][j] + arr[i][j+1] + arr[i][j+2]
                    + arr[i+1][j+1] + arr[i+2][j] + arr[i+2][j+1]
                    + arr[i+2][j+2];
        index++;
    }
}
sort(sum.begin(), sum.end());
cout << sum[15];
