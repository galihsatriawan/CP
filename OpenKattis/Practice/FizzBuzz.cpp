#include <bits/stdc++.h>
#define FORa(i,a,ak) for(i=a;i<=ak;i++)
#define FOR(i,n) for(i=1;i<=n;i++)
#define pf printf
#define sf scanf
using namespace std;


int main(){
	int n,x,y,i;
	cin>>x>>y>>n;
	FOR(i,n){
		if((i%x==0)&&(i%y==0)) printf("FizzBuzz\n");
		else if(i%x==0) printf("Fizz\n");
		else if (i%y==0) printf("Buzz\n");
		else printf("%d\n",i );
	}
	return 0;
}
