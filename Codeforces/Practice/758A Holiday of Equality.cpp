#include <iostream>
#include <stdlib.h>
#include <string>
#include <string.h>
#include <stdio.h>
#include <conio.h>
#include <vector>

#define FORa(i,a,ak) for(i=a;i<=ak;i++)
#define FOR(i,n) for(i=1;i<=n;i++)
#define pf printf
#define sf scanf
using namespace std;


int main(){
	int n,i,j;
	long a[101];
	sf("%d",&n);
	
	long max=0;
	FOR(i,n){
		sf("%ld",&a[i]);
		if(max<a[i]) max=a[i];
	}
	long total=0;
	FOR(i,n){
		total+=(max-a[i]);
	}
	pf("%ld\n",total);
	
	return 0;
}
