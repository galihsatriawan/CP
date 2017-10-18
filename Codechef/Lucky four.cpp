
#include <bits/stdc++.h>
using namespace std;
#define FORa(i,a,b) for(i=a;i<=b;i++)
int main(){
int t;
char bil[20];
cin>>t;
while(t--){
   int panjang,i;
   cin>>bil;
   panjang=strlen(bil);
   int banyak=0;
    FORa(i,0,panjang-1){
      if (bil[i]=='4') banyak++;
    }
    cout<<banyak<<endl;
}

return 0;
}
