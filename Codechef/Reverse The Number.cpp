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

const int N=1e3+5;
int reverse(int n){
	int temp=0;
	while(n>0){
		temp=(temp*10)+(n%10);
		n/=10;
	}
	//cout<<temp<<endl;
	return temp;
}
int main(){
	int t,i,n;
	cin>>t;
	FOR(i,t){
		cin>>n;
		cout<<reverse(n)<<endl;
	}
	
	
	
	
	return 0;
}
