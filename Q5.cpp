#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter The Size OF Array:" << endl;
    cin >> n;
    vector<int> tasks(n);
    cout << "Enter The Tasks " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> tasks[i];
    }
    int count = 1;
    int maxi = tasks[0];
    for (int i = 1; i < n; i++)
    {
        if (maxi < tasks[i])
        {
            count++;
        }
        maxi = max(maxi, tasks[i]);
    }
    cout << count;
    return 0;
}