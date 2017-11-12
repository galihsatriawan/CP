#include <bits/stdc++.h>
#include <cmath>
#define FORa(i,a,ak) for(i=a;i<=ak;i++)
#define FOR(i,n) for(i=1;i<=n;i++)
#define pf printf
#define sf scanf
using namespace std;

long long combinator(long long n){
    return ((n*(n-1))/2);
}
int main(){
    long long n,m;
    cin>>n>>m;
    long long mini,maxi;
    long long N,L;
    L=n%m;
    N=m-L;
    mini=combinator((n/m)+1)*L+combinator(n/m)*N;
    maxi=combinator(n-m+1);
    cout<<mini<<" "<<maxi<<endl;
	return 0;
}
