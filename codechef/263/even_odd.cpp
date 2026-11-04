#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
void bharti(){
    int n;
    cin>>n;
    int odd_cnt =0, first_odd=-1, last_odd =-1,val;
    for (int  i = 0; i < n; ++i)
    {cin>>val;
        if(val%2!=0){
            odd_cnt++;
            if (first_odd==-1)
            {
                first_odd =i;
            }
            last_odd =i;
        }
        
    }

    if (odd_cnt%2==0)
    {
        cout<<n<<"\n";

    }else
    {
        int prefix=n-1-first_odd;
        int suffix = last_odd;
        cout<<max(prefix,suffix)<<"\n";
    }
    
    
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);   
    int t;
    cin >> t;
    while (t--) {
    bharti(); }
    return 0;
}