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
	int i,j,a,b,t;
	cin>>t;
	FOR(i,t){
		cin>>a>>b;
		cout<<(a%b)<<endl;
	}
	return 0;
}
