#include <bits/stdc++.h>
#define FORa(i,a,ak) for(i=a;i<=ak;i++)
#define FOR(i,n) for(i=1;i<=n;i++)
#define pf printf
#define sf scanf
using namespace std;

long long  biner_balik(long long mal){
	long long temp=0;
	while(mal>0){
		temp=(temp*10)+(mal%2);
		mal/=2;
	}
	return temp;
}
long long decim(long long biner){
	long long temp=0,a=1;
	while(biner>0){
		temp+=(a)*(biner%2);
		a*=2;
		biner/=10;
	}
	return temp;
}
int main(){
	long long n;
	sf("%lld",&n);
	//cout<<n<<" ";
	n=biner_balik(n);
	//cout<<n<<" ";
	n=decim(n);
	pf("%lld\n",n);
	return 0;
}
