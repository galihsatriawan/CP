#include <bits/stdc++.h>
#define FORa(i,a,ak) for(i=a;i<=ak;i++)
#define FOR(i,n) for(i=1;i<=n;i++)
#define pf printf
#define sf scanf



using namespace std;


int main(){
	int n;
	int bil;
	cin>>n;
	int i,banyak=0;
	FOR(i,n){
		cin>>bil;
		if(bil<0) banyak++;
	}
	cout<<banyak<<endl;
	return 0;
}
