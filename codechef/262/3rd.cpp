#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    int current_score = 0;
    for (int i = 1; i < n; i++)
    {
        if (a[i] == a[i + 1])
        {
            current_score++;
        }
    }
    vector<int> change_at_L(n + 1, 0);
    for (int L = 2; L <= n; L++)
    {
        if (a[L - 1] == a[L] + 1)
        {
            change_at_L[L] = 1;
        }
        else if (a[L - 1] == a[L])
        {
            change_at_L[L] = -1;
        }
    }
    vector<int> change_at_R(n + 1, 0);
    for (int R = 1; R < n; R++)
    {
        if (a[R] + 1 == a[R + 1])
        {
            change_at_R[R] = 1;
        }
        else if (a[R] == a[R + 1])
        {
            change_at_R[R] = -1;
        }
    }
    vector<int> max_right_effect(n + 2, -1e9);
    for (int i = n; i >= 1; i--)
    {
        max_right_effect[i] = max(change_at_R[i], max_right_effect[i + 1]);
    }
    int best_net_change = -1e9;
    for (int L = 1; L <= n; L++)
    {
        best_net_change = max(best_net_change, change_at_L[L] + max_right_effect[L]);
    }
    cout << current_score + best_net_change << "\n";
}

int main()
{
    int t;
    if (cin >> t)
    {
        while (t--)
        {
            solve();
        }
    }
    return 0;
}