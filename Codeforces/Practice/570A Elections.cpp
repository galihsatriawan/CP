#include <bits/stdc++.h>
#include <cmath>
#define FORa(i,a,ak) for(i=a;i<=ak;i++)
#define FOR(i,n) for(i=1;i<=n;i++)
#define pf printf
#define sf scanf
using namespace std;


int main(){
    int n,m,i,j,winner=1;
    long long vote,maxi;
    //reverse input
    cin>>m>>n;
    int candid[m+5];
    memset(candid,0,sizeof candid);
    FOR(i,n){
        maxi=-1;
        winner=0;
        FOR(j,m){
            cin>>vote;
            if(vote>maxi) {
                maxi=vote;
                winner=j;
            }
        }
        //each city
        candid[winner]++;
    }
    maxi=candid[1];
    winner=1;
    //all city
    FOR(i,m){
        if(candid[i]>maxi) {
                winner=i;
                maxi=candid[i];
        }
    }
    cout<<winner<<endl;
	return 0;
}
