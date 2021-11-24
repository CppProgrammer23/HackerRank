void solve(double meal_cost, int tip_percent, int tax_percent) 
{
    double tip = (meal_cost * tip_percent) / 100;
    double tax = static_cast<double>(tax_percent* tip_percent) / 100;
    cout << round(meal_cost+tip+tax);
}
