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
	int i,n,t;
	cin>>t;
	FOR(i,t){
		cin>>n;
		int temp=n%10;
		while(n>=10){
			n/=10;
		}
		temp+=n;
		cout<<temp<<endl;
	}
	return 0;
}
