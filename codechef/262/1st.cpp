#include <bits/stdc++.h>
using namespace std;

void Misha()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int total_opens = 0;
    int current_streak = 0;
    char last_button = ' ';

    for (char c : s)
    {
        if (c == last_button)
        {
            current_streak++;
        }
        else
        {
            current_streak = 1;
            last_button = c;
        }
        if (current_streak == 3)
        {
            total_opens++;
            current_streak = 0;
        }
    }

    cout << total_opens << "\n";
};
int main()
{

    int t;
    if (cin >> t)
    {
        while (t--)
        {
            Misha();
        }
    }
    return 0;
}
