void stdDev(vector<int> arr) 
{
    // Print your answers to 1 decimal place within this function
    const int mean = accumulate(arr.begin(), arr.end(), 0) / arr.size();
    double sSum = 0;
    for (const int i : arr) 
        sSum += pow(static_cast<double>(i - mean), 2);
    cout << sqrt(sSum / static_cast<double>(arr.size()));
}
