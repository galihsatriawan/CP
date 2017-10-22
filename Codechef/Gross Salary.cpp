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
	double bs,da,hra,gsalary;
	int t;
	cin>>t;
	while(t--){
		cin>>bs;
		if(bs>=1500) {
			hra=500;
			da=98*bs/100;
		}else{
			hra=10*bs/100;
			da=90*bs/100;
		}
		gsalary=bs+hra+da;
		cout<<gsalary<<endl;
	}
	return 0;
}
