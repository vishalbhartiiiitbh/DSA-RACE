#include <bits/stdc++.h>
using namespace std;
class Raj
{
public:
    void Misha(int T)
    {
        while (T--)
        {
            long long n;
            cin >> n;
            long long low = 1, high = 2000000, ans = 1;
            while (low <= high)
            {
                long long k = low + (high - low) / 2;
                __int128 sum = k + (__int128)k * (k - 1) * (k + 1) / 6;

                if (sum <= n)
                {
                    ans = k;
                    low = k + 1;
                }
                else
                {
                    high = k - 1;
                }
            }
            cout << ans << endl;
        }
    }
};
int main()
{
    int T;
    cin >> T;
    Raj obj;
    obj.Misha(T);
    return 0;
}
