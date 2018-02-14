#include <bits/stdc++.h>
using namespace std;

#define FORa(i,a,b) for(i=a;i<=b;i++)
#define FOR(i,n) for(i=1;i<=n;i++)
int main(){
    int t,n,k,bil;
    long long jumlah;
    cin>>t;
    while(t--){
        jumlah = 0;
        cin>>n>>k;
        while(n--){
            cin>>bil;
            jumlah+=bil;
        }
        if(jumlah%2==1) cout<<"even"<<endl;
        else{
            if(k>1) cout<<"even"<<endl;
            else cout<<"odd"<<endl;
        }
    }

 return 0;
}
