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
	int t,i,j,n;
	sf("%d",&t);
	while(t--){
		sf("%d",&n);
		int hasil=1;
		while(hasil*hasil<=n){
			hasil++;
		}
		cout<<hasil-1<<endl;
	}
	return 0;
}
