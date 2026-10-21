#include <bits/stdc++.h>
using namespace std;
class Raj
{
public:
    void Misha(int T)
    {

        int n;
        long long m;
        while (T--)
        {
            cin >> n >> m;
            vector<int> a(n);
            for (int &x : a)
                cin >> x;
            sort(a.begin(), a.end());
            long long p = 0, ans = 0;
            for (int x : a)
            {
                if ((p + x) * (p + x - 1) / 2 <= m)
                {
                    p += x;
                    ans++;
                }
                else
                    break;
            }
            cout << ans << "\n";
        }
    };
};
int main()
{
    int T;
    cin >> T;
    Raj obj;
    obj.Misha(T);

    return 0;
}
