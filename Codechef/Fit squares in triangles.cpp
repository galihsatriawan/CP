#include <bits/stdc++.h>

using namespace std;
const int N = 1e6+1;
int nilai[N];
int f(int x){
    if(x<4) return 0;
    else if(nilai[x]!=-1) return nilai[x];
    else {

        nilai[x]= (f(x-2)-f(x-4)+1)+f(x-2);
        return nilai[x];
    }
}

int main(){
 int t,n,hasil;
 memset(nilai,-1,sizeof nilai);
 cin>>t;
 while(t--){
    cin>>n;
    hasil = f(n);
    cout<<hasil<<endl;
 }
 return 0;
}
