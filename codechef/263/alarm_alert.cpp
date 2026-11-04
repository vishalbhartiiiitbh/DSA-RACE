#include<bits/stdc++.h>
using namespace std;
void Raj() {
    long long x,y,d;
    cin >>x>>y>>d;

    long long t1=-1;
    for(long long i=1; i <= y; ++i) {
        long long val=i*x;
        if (val>=y && val%y<=d) {
        t1=val;
        break;
    } }
    long long t2=-1;
    for (long long j=1;j<=x;++j) {
    long long val=j*y;
    if (val>=x&&val%x<=d) {
    t2=val;
    break;
    } }
    if(t1==-1)t1=t2;
    if(t2==-1)t2=t1;
    cout<< min(t1,t2)<<"\n";
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
if(cin>>t) {
while(t--) {
Raj();
} } }
