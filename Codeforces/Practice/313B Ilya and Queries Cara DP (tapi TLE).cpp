#include <bits/stdc++.h>

using namespace std;
const int N=1e5+5;

#define sf scanf
#define pf printf
#define FOR(i,n) for(i=1;i<=n;i++)
#define FORa(i,ai,aj) for(i=ai;i<=aj;i++)
map< pair<int,int>,int> hasil;
set< pair<int,int> > exist;
string kode;
//DP biasa
/*int dp(int i,int j){
    int sama=0;
    if(j<=i) return 0;
    else {
            if (kode[j-1]==kode[j]) sama=1;
            return (dp(i,j-1)+sama);
    }
}*/
//DP Memoize
int dp(int i,int j){
    int sama=0;

    //jika belum ada
    if(j<=i) return 0;
    else{
        if(kode[j-1]==kode[j]) sama = 1;
        //ketika belum ada
        if(exist.count({i,j})==0){
                //tandai sudah ada
            exist.insert({i,j});
            hasil.insert({{i,j},dp(i,j-1)+sama});
            return hasil.at({i,j});
        }else { //jika sudah ada
            return hasil.at({i,j});
        }
    }

}
int main(){

    //hasil.insert({{2,3},3});
    //cout<<exist.count({2,3});
    //cout<<;

    int q,i,l,r;
    int h_q[N];
    cin>>kode;
    sf("%d",&q);
    FOR(i,q){
        sf("%d %d",&l,&r);
        h_q[i]=dp(l-1,r-1);
    }
    FOR(i,q){
    cout<<h_q[i]<<endl;
    }
	return 0;
}
