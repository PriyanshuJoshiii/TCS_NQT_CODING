#include <iostream>
using namespace std;
int fact(int z)
{
    if (z == 0 || z == 1)
    {
        return 1;
    }
    return fact(z - 1) * z;
}
int main()
{
    int n;
    cout << "Enter The Value Of N: " << endl;
    cin >> n;
    int x = fact(n - 1) * 2;
    cout << x;
}