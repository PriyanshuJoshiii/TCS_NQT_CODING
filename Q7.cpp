#include <iostream>
using namespace std;
int check(string k)
{
    int c = 0;
    for (int i = 0; i < k.length(); i++)
    {
        if (k[i] == 'a')
        {
            c++;
        }
    }
    return c;
}
int main()
{
    string s;
    cout << "Enter The String:" << endl;
    cin >> s;
    int L;
    cout << "Enter The Value Of L:" << endl;
    cin >> L;
    vector<string> boxes;
    for (int i = 0; i < s.length(); i += L)
    {
        boxes.push_back(s.substr(i, L));
    }
    int maxa = INT_MIN;
    for (int i = 0; i < boxes.size(); i++)
    {
        maxa = max(check(boxes[i]), maxa);
    }
    cout << "Maximum No Of a's: " << maxa << endl;
    return 0;
}