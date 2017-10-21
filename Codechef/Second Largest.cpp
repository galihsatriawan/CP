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
	int t,n,i,j,data[4];
	cin>>t;
	while(t--){
		cin>>data[1]>>data[2]>>data[3];
		FOR(i,2){
			FORa(j,i+1,3){
				if(data[j]>data[i]){
					int temp=data[i];
					data[i]=data[j];
					data[j]=temp;
				}
			}
		}
		cout<<data[2]<<endl;
		
	}
	
	
	
	
	
	return 0;
}
