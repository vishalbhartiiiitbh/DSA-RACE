#include <bits/stdc++.h>
using namespace std;

void Misha()
{
    int n, k;
    string s;
    cin >> n >> k;
    cin >> s;
    int alarms = 0;
    int i = 0;
    while (i < n)
    {
        if (s[i] == '1')
        {
            alarms++;
            i += k + 1;
        }
        else
        {
            i++;
        }
    }
    cout << alarms << "\n";
};
int main()
{   int t;
    if (cin >> t)
    {
        while (t--)
        {
            Misha();
        }
    }
    return 0;
}
