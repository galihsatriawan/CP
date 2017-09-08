#include <bits/stdc++.h>
using namespace std;

int hasil[129][129];
void isi(int biner, int ia ,int ik,int ja,int jk){
 int i,j;
 for (i=ia;i<=ik;i++){
   for (j=ja;j<=jk;j++){
     hasil[i][j]=biner;
   }
 }
}
void cari(int biner,int pos,int n,char ch[],int ia,int ik ,int ja,int jk){
 if(pos>n){
   isi(biner,ia,ik,ja,jk);
  }else{
     switch(ch[pos]){
          case '0':{
              cari(biner,pos+1,n,ch,ia,(ia+ik)/2,ja,(ja+jk)/2);
            break;
           }
          case '1':{
              cari(biner,pos+1,n,ch,ia,(ia+ik)/2,(ja+jk)/2+1,jk);
            break;
           }
          case '2':{
              cari(biner,pos+1,n,ch,(ia+ik)/2+1,ik,ja,(ja+jk)/2);
            break;
           }
          case '3':{
              cari(biner,pos+1,n,ch,(ia+ik)/2+1,ik,(ja+jk)/2+1,jk);
            break;
           }
       }
    }

}
int bulat(int n){
 int i=2;
 while(i<n){
  i*=2;
  }
return i;
}
int main(){
  int n,i,j,r,c,simR,simC;
  cin>>n;
  int banyak[n+1];
  char temp[n+1][10];
  for (i=1;i<=n;i++){
    cin>>temp[i];
     banyak[i]=strlen(temp[i])-1;
  }
 cin>>r>>c;
 simR=r;
 simC=c;
  r=(r>c)?bulat(r):bulat(c);
  c=r;
 char pindah[10];
  for(i=1;i<=n;i++){
     pindah[0]='1';
     for(j=1;j<=banyak[i];j++){
       pindah[j]=temp[i][j];
      }
     cari(1,1,banyak[i],pindah,1,r,1,c);
   }
 for(i=1;i<=simR;i++){
   for(j=1;j<=simC;j++){
     if(j==simC){
       cout<<hasil[i][j]<<endl;
      }else{
        cout<<hasil[i][j]<<" ";
       }
    }
}
return 0;
}
