#include <bits/stdc++.h>
using namespace std;
class Raj
{
public:
    void Misha(int T)
    {
        while (T--)
        {
            long long n, d;
            cin >> n >> d;
            while (true)
            {
                long long temp = n, p = 1, pos = 0;
                while (temp > 0)
                {
                    if (temp % 10 == d)
                        pos = p;
                    temp /= 10;
                    p *= 10;
                }
                if (pos == 0)
                    break;
                n = (n / pos + 1) * pos;
            }
            cout << n << "\n";
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
