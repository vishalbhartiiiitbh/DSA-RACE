#include <bits/stdc++.h>
using namespace std;
class Raj
{
public:
    void Misha(int T)
    {

        int n, s;

        while (T--)
        {
            cin >> n >> s;
            int c = (s + 3) / 4;
            int w = 4 * c - s;
            if (c + w <= n)
                cout << c + w << "\n";
            else
                cout << -1 << "\n";
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
