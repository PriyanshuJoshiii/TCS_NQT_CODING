#include <iostream>
using namespace std;
bool isprime(int num)
{
    int x = num / 2;
    for (int i = 2; i <= x; i++)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}
int main()
{
    int n;
    cin >> n;
    cout << endl;
    vector<int> ans;
    for (int i = 2; i <= n; i++)
    {
        if (isprime(i))
        {
            ans.push_back(i);
        }
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}