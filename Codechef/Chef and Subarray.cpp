#include <bits/stdc++.h>
using namespace std;

#define FORa(i,a,b) for(i=a;i<=b;i++)
#define FOR(i,n) for(i=1;i<=n;i++)
int main(){
 int t,n,data[55],i,jum,j,k,kali,tambah;
 cin>>t;
 while(t--){
   cin>>n;
   memset(data,0,sizeof data);
    FOR(i,n) {
       cin>>data[i];
    }
    jum = 0;

    FOR(i,n) {
       FOR(j,n-i+1){
           kali = 1;
           tambah = 0;
          FORa(k,j,j+i-1){
             kali *= data[k];
             tambah += data[k];
           }
           //cout<<kali<<"--"<<tambah<<endl;
          jum = (kali==tambah) ? jum+1:jum;
        }
     }
     cout<<jum<<endl;
 }

return 0;
}
