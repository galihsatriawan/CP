#include <bits/stdc++.h>
using namespace std;

#define FORa(i,a,b) for(i=a;i<=b;i++)
#define FOR(i,n) for(i=1;i<=n;i++)
int main(){
    int tc,n,k,ti,di,total;
    cin>>tc;
    while(tc--){
        total = 0;
        cin>>n>>k;
        while(n--){
            cin>>ti>>di;
            if(k>0){
                if(ti<=k) k-=ti;
                else {
                        total = total + ((ti-k) * di);
                        k = 0;
                }
            }else{
                total = total + (ti * di);
            }
        }
        cout<<total<<endl;
    }

 return 0;
}
