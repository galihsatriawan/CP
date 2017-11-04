#include <bits/stdc++.h>
#define FORa(i,a,ak) for(i=a;i<=ak;i++)
#define FOR(i,n) for(i=1;i<=n;i++)
#define pf printf
#define sf scanf



using namespace std;


int main(){
	int i,n,bil;
	cin>>n;
	FOR(i,n){
		cin>>bil;
		if(bil%2==0) cout<<bil<<" is even\n";
		else cout<<bil<<" is odd\n";
	}
	return 0;
}
