#include <iostream>
#include <stdlib.h>
#include <string>
#include <string.h>
#include <stdio.h>
#include <vector>
#include <cmath>
#define FORa(i,a,ak) for(i=a;i<=ak;i++)
#define FOR(i,n) for(i=1;i<=n;i++)
#define pf printf
#define sf scanf
using namespace std;


int main(){
	int t,n,i,data[(int)1e5+1];
	sf("%d",&t);
	while(t--){
		sf("%d",&n);
		int mini=1e9;
		FOR(i,n){
			sf("%d",data + i);
			mini=min(mini,data[i]);
		}
		long long hasil=mini*(n-1);
		cout<<hasil<<endl;
	}
	return 0;
}
