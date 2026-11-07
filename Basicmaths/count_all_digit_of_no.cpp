#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int countDigit(int n){
    //    int cnt = 0;
    //    while (n>0)
    //    {
    //     int lastDigit = n%10;
    //     cnt=cnt+1;
    //     n=n/10;
    //    }
    // fopr only want count of number then apply this
    int cnt= (int)(log10(n)+1);
        return cnt;
    } 
};
int main(){
int n;
cin>>n;
Solution obj;
cout<<obj.countDigit(n);
return 0;
};