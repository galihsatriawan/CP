#include <bits/stdc++.h>

#define FORa(i,a,ak) for(i=a;i<=ak;i++)
#define FOR(i,n) for(i=1;i<=n;i++)
#define pf printf
#define sf scanf
using namespace std;

const int N=10;
int main(){
    int n,i,j,data[N];
    int winner=0,point=0;
    FOR(i,5){
    	int total=0;
    	FOR(j,4){
    		cin>>data[j];
    		total+=data[j];
    	}
    	if(point<total) {
    		winner=i;
    		point=total;
    	}
    }
    cout<<winner<<" "<<point<<endl;
	return 0;
}
