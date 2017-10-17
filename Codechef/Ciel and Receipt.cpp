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

const int N=1e5+5;
int main(){
	int t,bil,i,j,pangkat[N];
	cin>>t;
	pangkat[0]=1;
	FORa(i,1,11){
		pangkat[i]=pangkat[i-1]*2;
	}
	
	FOR(i,t){
		cin>>bil;
		int index=11;
		int banyak=0;
		while(bil>0){
			while(pangkat[index]<=bil){
				banyak++;
				bil-=pangkat[index];
			}
			index--;
		}
		cout<<banyak<<endl;
	}
	return 0;
}
