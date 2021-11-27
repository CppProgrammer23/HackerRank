class Difference 
{
    private:
    vector<int> elements;
  
  	public:
  	int maximumDifference;
   
	// Add your code here
    Difference(vector<int> _elem){elements = _elem;}
    void computeDifference()
    {
        sort(elements.begin(), elements.end());
        maximumDifference = elements[elements.size()-1] - elements[0];
    }
}; // End of Difference class
