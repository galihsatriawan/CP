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

const int N=1e4+5;
int main(){

	int n,s[N],t[N],i,j;
	cin>>n;
	int satu,dua;
	int w=0,l=0;
	s[0]=0;
	t[0]=0;
	FOR(i,n){
		cin>>satu>>dua;
		s[i]=(s[i-1]+satu);
		t[i]=(t[i-1]+dua);
		int beda=abs(s[i]-t[i]);
		//cout<<beda<<endl;
		if(l<beda){
			if(s[i]>t[i]) {
				w=1;
			}else w=2;
			l=beda;
		}
	}

	cout<<w<<" "<<l<<endl;

	return 0;
}
