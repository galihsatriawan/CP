#include <bits/stdc++.h>

using namespace std;
const int N=1e5+5;

#define sf scanf
#define pf printf
#define FOR(i,n) for(i=1;i<=n;i++)
#define FORa(i,ai,aj) for(i=ai;i<=aj;i++)

int main(){
    int q,j,i,b_titik[N],l,r;
    string kode;
    cin>>kode;
    b_titik[0]=0;
    int panjang=kode.size();
    FORa(i,1,panjang-1){
        b_titik[i]=b_titik[i-1]+(kode[i]==kode[i-1]);
    }
    sf("%d",&q);
    while(q--){
        sf("%d %d",&l,&r);
        cout<<b_titik[r-1]-b_titik[l-1]<<endl;
    }
	return 0;
}
