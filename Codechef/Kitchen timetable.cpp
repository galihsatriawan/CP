#include <bits/stdc++.h>
using namespace std;

#define FORa(i,a,b) for(i=a;i<=b;i++)
#define FOR(i,n) for(i=1;i<=n;i++)
int main(){
    int t,n,i,j,a[50000],b[50000],total;
    cin>>t;
    while(t--){

        total = 0;
        a[0]=0;
        cin>>n;
        FOR(i,n){
            cin>>a[i];
        }
        FOR(i,n){
            cin>>b[i];
        }
        FOR(i,n){
            if((a[i]-a[i-1])>=b[i]) total++;
        }
        cout<<total<<endl;

    }
return 0;
}
