#include <bits/stdc++.h>
using namespace std;

#define FORa(i,a,b) for(i=a;i<=b;i++)

int main(){

int i,t,a,b,n;
cin>>t;
while(t--){
    cin>>a>>b;
    cout<<max(a,b)<<" "<<(a+b)<<endl;
}

return 0;
} 
