#include <bits/stdc++.h>
using namespace std;

long long gcd(long long  a,long long b){ if(b==0) return a ; else{return gcd(b,a%b);} }

int main(){
	long a,b,c,d;
	long long e,f,fpb;
	cin>>a>>b;
	cin>>c>>d;
	f=b*d/gcd(b,d);
	//cout<<f<<" -"<<endl;
	e=(f/b)*a+(f/d)*c;
	//cout<<e<<"+"<<endl;
	fpb=gcd(e,f);
	e=e/fpb;
	
	f=f/fpb;
	cout<<e<<" "<<f<<endl;
	return 0;
}
