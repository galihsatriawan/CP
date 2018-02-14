#include <bits/stdc++.h>
using namespace std;

#define FORa(i,a,b) for(i=a;i<=b;i++)
#define FOR(i,n) for(i=1;i<=n;i++)
int cari_n(int a,int b,int sn_temp){
    int n=0;
    while(a<=sn_temp){
        n++;
        sn_temp-=a;
        a+=b;

    }

    return n;
}
int main(){
    int i,n,t,a,b,na,nb;
    cin>>t;
    string player[2]={"Limak","Bob"};

    while(t--){
        cin>>a>>b;
        //n deret ganjil
        na= cari_n(1,2,a);
        //cout<<na<<"--";
        //n deret genap
        nb= cari_n(2,2,b);
        //cout<<nb<<endl;
        if(na>nb){
            cout<<player[0]<<endl;
        }else{
            cout<<player[1]<<endl;
        }
    }

 return 0;
}
