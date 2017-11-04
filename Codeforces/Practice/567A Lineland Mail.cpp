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
	long n,x[100001],i,j;
	long min[100001],max[100001];
	
	sf("%ld",&n);
	
	FOR(i,n){
		sf("%ld",&x[i]);
	}
	
	min[1]=abs(x[1]-x[2]);
	max[1]=abs(x[1]-x[n]);
	
	min[n]=abs(x[n]-x[n-1]);
	max[n]=abs(x[n]-x[1]);
	
	FORa(i,2,n-1){
		//min
		//kiri lebih kecil 
		if((abs(x[i]-x[i-1]))<(abs(x[i]-x[i+1]))){
			min[i]=(abs(x[i]-x[i-1]));
		}else{
			min[i]=(abs(x[i]-x[i+1]));
		}
		
		//pojok kiri lebih besar 
		if((abs(x[i]-x[1]))>(abs(x[i]-x[n]))){
			max[i]=(abs(x[i]-x[1]));
		}else{
			max[i]=(abs(x[i]-x[n]));
		}
		
	}
	
	FOR(i,n){
		pf("%ld %ld\n",min[i],max[i]);
	}
	
	return 0;
}
