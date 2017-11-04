#include <iostream>
#include <stdlib.h>
#include <string>
#include <string.h>
#include <stdio.h>
#include <vector>

#define FORa(i,a,ak) for(i=a;i<=ak;i++)
#define FOR(i,n) for(i=1;i<=n;i++)
#define pf printf
#define sf scanf
using namespace std;

int main(){
	int n1,n2,k1,k2;
	
	sf("%d %d %d %d",&n1,&n2,&k1,&k2);
	
	//Karena aturan game adalah, siapa yang tidak dapat main adalah yang kalah
	//maka tiap orang akan mengirit bolanya , yaitu dengan mengeluarkan satu satu
	if(n1>n2) cout<<"First"<<endl;
	else cout<<"Second"<<endl;
	
	return 0;
}