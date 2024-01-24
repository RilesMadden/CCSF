// Sales Prediction
// The East Coast sales division of a company generates 58 percent of total sales. Based on that percentage, write a program that will predict how much the East Coast division will generate if rhe company has $8.6 million in sales this year.

# include <iostream>
using namespace std;

int main()
{
    float SALES_PERCENTAGE = 0.58532989284098403894;
    int sales_made = 8600000;

    int total_sales = sales_made * SALES_PERCENTAGE;

    cout << total_sales;
    cout << "\n";
    return(0);

}