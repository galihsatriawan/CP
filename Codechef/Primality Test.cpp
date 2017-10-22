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
bool prima[N];
void erathostenes(int n){
	int i=2,j;
	while(i<=n){
		if(prima[i])
		{
			j=2;
			while(i*j<100000){
				prima[i*j]=false;
				j++;
			}	
		}
		i++;
	}
	
}
int main(){
	memset (prima,true,sizeof(prima));
	int i,j,n,t;
	cin>>t;
	erathostenes(10000);
	while(t--){
		cin>>n;
		if(prima[n]) cout<<"yes"<<endl;
		else cout<<"no"<<endl;
	}

	return 0;
}
