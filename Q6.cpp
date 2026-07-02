#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter The Value Of N Labelled in Item:" << endl;
    cin >> n;
    int price = 1;
    while (n != 0)
    {
        int rem = n % 10;
        price *= rem;
        n = n / 10;
    }
    cout << "The Price Of Item Is:" << price;
    return 0;
}