#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    bool isArmstrong(int n){
    int w=n;
    int sum =0;
    int no=0;
    while (w>0)
    {no++;
        w=w/10;
        
    }
  w=n;
    while (w>0)
    {
        int lastdigit = w%10;
        sum += pow(lastdigit,no);
        w =w/10;
    }
        if (sum==n)
        {
            return true;
        }else
        {
            return false;
        }
        
    
    }
};
int main(){
    int n;
    cin>>n;
Solution obj;
cout<<boolalpha<<obj.isArmstrong(n);
return 0;
}