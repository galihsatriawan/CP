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
	int n,t,hasil[1005];
	cin>>t;
	int i,j;
	FOR(i,t){
		cin>>n;
		hasil[i]=0;
		while(n>0){
			hasil[i]+=n%10;
			n/=10;
		}	
	}
	FOR(i,t){
		cout<<hasil[i]<<endl;
	}
	
	return 0;
}
