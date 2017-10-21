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
	int t,i,n;
	cin>>t;
	while(t--){
		cin>>n;
		if(n<10) cout<<"What an obedient servant you are!"<<endl;
		else cout<<-1<<endl;
	}
	return 0;
}
