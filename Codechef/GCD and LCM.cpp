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

long long gcd(long long a,long long b){
	if(b==0) return a;
	else{
		return gcd(b,(a%b));
	}
}
int main(){
	long long t,a,b;
	cin>>t;
	while(t--){
		cin>>a>>b;
		long long lcm=a*b;
		long long fpb=gcd(a,b);
		cout<<fpb<<" "<<(lcm/fpb)<<endl;
	}
	return 0;
}
