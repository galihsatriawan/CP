#include <bits/stdc++.h>

using namespace std;

#define sf scanf
#define pf printf

int main(){
 int t,n,m,k;
 cin>>t;
 while(t--){
    cin>>n>>m>>k;
    int diff = abs(n-m);
    if(diff-k<=0) cout<<0<<endl;
    else cout<<diff-k<<endl;

 }

 return 0;
}
