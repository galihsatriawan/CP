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
	long a,b,s;
	cin>>a>>b>>s;
	long steps;
	if((a==0)&&(b==0)) steps=2;
	else {
		steps=a+b;
	}
	if(steps!=s) cout<<"No"<<endl;
	else cout<<"Yes"<<endl;
	
	
	return 0;
}
