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
	int i,j,a,b;
	int count=0;
	sf("%d %d",&a,&b);
	while(a<=b){
		a*=3;
		b*=2;
		count++;
	}
	pf("%d\n",count);
	
	
	return 0;
}
