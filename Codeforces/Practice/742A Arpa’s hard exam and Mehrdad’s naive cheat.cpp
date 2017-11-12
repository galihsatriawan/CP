#include <bits/stdc++.h>
#include <cmath>
#define FORa(i,a,ak) for(i=a;i<=ak;i++)
#define FOR(i,n) for(i=1;i<=n;i++)
#define pf printf
#define sf scanf
using namespace std;


int main(){
    long long n,hasil;
    cin>>n;
    if(n==0) {
        cout<<1<<endl;
        return 0;
    }
    n=n%4;
    if (n==0) hasil=6;
    else{
        hasil=8;
        n--;
    }

    while(n--){
        hasil*=8;
    }
    cout<<hasil%10<<endl;


	return 0;
}
