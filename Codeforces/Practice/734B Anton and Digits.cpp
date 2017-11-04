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
	long k[10];
	
	sf("%ld %ld %ld %ld",&k[2],&k[3],&k[5],&k[6]);
	long long hasil=0;
	
	while((k[2]>=1)&&(k[5]>=1)&&(k[6]>=1)){
		hasil+=256;	
		k[2]--;
		k[5]--;
		k[6]--;
	}
	while((k[2]>=1)&&(k[3]>=1)){
		hasil+=32;	
		k[2]--;
		k[3]--;
	}
	
	pf("%I64d\n",hasil);
	return 0;
}
