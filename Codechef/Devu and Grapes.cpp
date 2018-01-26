#include <bits/stdc++.h>
using namespace std;

#define FORa(i,a,b) for(i=a;i<=b;i++)
#define FOR(i,n) for(i=1;i<=n;i++)
int main(){
    long long t,n,k,bil,j,sisa,sisa_sisa,operat;
    cin>>t;
    while(t--){
        cin>>n>>k;
        operat = 0;
        while(n--){
            cin>>bil;
            sisa = bil % k;

            if(bil<=sisa) operat+=k-bil;
            else operat += min(sisa,k-sisa);
        }
        cout<<operat<<endl;
    }
return 0;
}
