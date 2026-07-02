#include <iostream>
using namespace std;
int main()
{
    cout << "Enter The Value Of How Many Vehicles are There:" << endl;
    int n;
    cin >> n;
    cout << "Enter The Vehichle Numbers" << endl;
    vector<int> numbers(n);
    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
    }
    cout << "Enter The Date: " << endl;
    int date;
    cin >> date;
    cout << "Enter The Fine for each Day:" << endl;
    int fine;
    cin >> fine;
    int daycheck = date % 2;
    int fines = 0;
    for (int i = 0; i < n; i++)
    {
        if (numbers[i] % 2 != daycheck)
        {
            fines++;
        }
    }
    int ans = fines * fine;
    cout << "The Total Fine Collected Is: " << ans << endl;
    return 0;
}
