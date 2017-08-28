#include <bits/stdc++.h>
using namespace std;
 bool hasUsed[20];
 int catat[20];
void brankas(int pos,int k,int n){
 int i;
 if (pos>k){
   for (i=1;i<=k;i++){
      if (i<k )cout<<catat[i]<<" ";
      else cout<<catat[i]<<endl;
   }
 }else{
     for (i=1;i<=n;i++){
      if (!hasUsed [i]){
        if(pos>1) {
            if(i>catat[pos-1]){
              hasUsed[i]=true;
             catat[pos]=i;
             brankas(pos+1,k,n);
             hasUsed[i]=false;
            }
        }else{
           hasUsed[i]=true;
           catat[pos]=i;
           brankas(pos+1,k,n);
           hasUsed[i]=false;
         }
           
        }
      
   }
 }

}

int main(){
 int n,k;
memset(hasUsed,false, sizeof hasUsed);
cin>>n>>k;
brankas(1,k,n);

return 0;
}
