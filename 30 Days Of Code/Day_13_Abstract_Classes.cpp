class MyBook : public Book
{
    //   Class Constructor
    //   
    //   Parameters:
    //   title - The book's title.
    //   author - The book's author.
    //   price - The book's price.
    //
    int price;
    public:
    // Write your constructor here
    MyBook(string t, string au, int pr): Book(t, au){price = pr;}
    
    //   Function Name: display
    //   Print the title, author, and price in the specified format.
    //
    // Write your method here
    void display()override
    {
        cout << "Title: " << title << '\n';
        cout << "Author: " << author << '\n';
        cout << "Price: " << price << '\n';
    }
};
