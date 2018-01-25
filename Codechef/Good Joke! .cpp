#include <bits/stdc++.h>

using namespace std;

int main(){
 int t,n,p1,p2,d;
 cin>>t;
 while(t--){
    cin>>n;
    d = 0;
    while(n--){
        cin>>p1>>p2;
        d = d^(n+1);
    }
    cout<<d<<endl;
 }
 return 0;
}
