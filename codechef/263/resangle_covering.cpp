#include<bits/stdc++.h>
using namespace std;
void Raj(){
int n,m;
cin>>n>>m;
int r1=n,r2=-1,c1=m,c2=-1;
for (int i =0;i<n;++i) {
    string s;
    cin>>s;
    for(int j=0;j<m;++j) {
        if (s[j]=='1') {
        r1 =min(r1,i);
        r2 =max(r2,i);
        c1 =min(c1,j);
        c2 =max(c2,j); } } }
        cout<<(r2-r1+1)*(c2-c1+1)<<"\n";
}
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int t;
cin >> t;
while (t--) {
Raj();
}
return 0;
}