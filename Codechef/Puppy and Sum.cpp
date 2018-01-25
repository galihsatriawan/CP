#include <bits/stdc++.h>
using namespace std;
const int N = 1e4+5;

int hasil[N][N];
int sum(int d,int n){
    if(d<=1){
        return ((2+(n-1))*n)/2;
    }else{
        if(hasil[d][n]!=-1){
            return hasil[d][n];
        }else{
            hasil[d][n]=sum(1,sum(d-1,n));
            return hasil[d][n];
        }

    }
}
int main(){
 int t,n,d;
 cin>>t;

 memset(hasil,-1,sizeof hasil);
 while(t--){
    cin>>d>>n;
    cout<<sum(d,n)<<endl;
 }
 return 0;
}
