#include <bits/stdc++.h>
using namespace std;

#define FORa(i,a,b) for(i=a;i<=b;i++)
#define FOR(i,n) for(i=1;i<=n;i++)
long long dua_pangkat(long long n){
    long long a =1 ,i;
    for(i=1 ;i<=n;i++){
        a*=2;
    }
    return a;
}
int main(){
    int t;
    long long na,c,d,a,b,n,peny,pemb;
    cin>>t;
    while(t--){
        cin>>a>>b>>n;
        if(n%2==0){
            //na = n/2;
            peny = (a>b) ? a : b;
            pemb = (a<b) ? a : b;
        }else{
            a*=2;

            peny = (a>b) ? a : b;
            pemb = (a<b) ? a : b;
        }
        cout<<(peny/pemb)<<endl;
    }

 return 0;
}
