#include <bits/stdc++.h>
using namespace std;

#define FORa(i,a,b) for(i=a;i<=b;i++)
#define FOR(i,n) for(i=1;i<=n;i++)
int main(){
    int t,i;
    long long n,m,hasil;
    cin>>t;
    while(t--){
        cin>>n>>m;
        hasil = n*m-1;
        if((hasil%2)==1) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;

    }

 return 0;
}
