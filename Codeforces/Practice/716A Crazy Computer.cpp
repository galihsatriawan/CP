#include <iostream>
#include <stdlib.h>
#include <string>
#include <string.h>
#include <stdio.h>
#include <vector>

#define FORa(i,a,ak) for(i=a;i<=ak;i++)
#define FOR(i,n) for(i=1;i<=n;i++)
#define pf printf
#define sf scanf
using namespace std;


int main(){
	long n,c,i,j;
	long banyak=0;
	sf("%ld %ld",&n,&c);
	long t[n+1];
	sf("%ld",&t[1]);
	banyak++;
	FORa(i,2,n){
		sf("%ld",&t[i]);
		if((t[i]-t[i-1])>c){
			banyak=0;
		}
		banyak++;
	 }
	 pf("%ld\n",banyak);
	 
	 
	 return 0;
}
