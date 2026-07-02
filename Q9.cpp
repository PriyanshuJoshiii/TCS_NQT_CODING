#include <iostream>
using namespace std;
int calc(int x)
{
    int s = 0;
    while (x != 0)
    {
        int rem = x % 10;
        s += rem;
        x /= 10;
    }
    return s;
}
int main()
{
    int N;
    cout << "Enter The Value Of N: " << endl;
    cin >> N;
    int R;
    cout << "Enter The Value Of R: " << endl;
    cin >> R;
    if (R == 0)
    {
        cout << 0;
        return 0;
    }
    int sum = 0;
    while (N > 0)
    {
        int rem = N % 10;
        sum += rem;
        N /= 10;
    }
    int sumR = 0;
    while (R)
    {
        sumR += sum;
        R--;
    }
    while (sumR > 9)
    {
        sumR = calc(sumR);
    }
    cout << sumR << " " << "Possible ways to fill the cistern" << endl;
    return 0;
}