#include <bits/stdc++.h>

using namespace std;
int data[7];
int hasil[1000001];
bool hasComputed[1000001];
int f(int x){
    if(x==0){
        return 0;
    }else{
        if(!hasComputed[x]){
            //   cout<<x<<"--";
            //jika belum ketemu
            hasil[x] = 1e6+1;
            for(int i = 1;i<=6;i++){
                if(x>=data[i]){
                    hasil[x] = min(hasil[x],f(x-data[i])+1);
                }
            }
            hasComputed[x]=true;
            return hasil[x];
        }
        else{
            return hasil[x];
        }

    }
}
int main(){
 //memset(hasil,1e6+1, sizeof hasil);
 memset(hasComputed,false,sizeof(hasComputed));
 data[1]=1;
 data[2]=2;
 data[3]=5;
 data[4]=10;
 data[5]=50;
 data[6]=100;
 int n,i,t,x;
 cin>>t;
 hasil[1]=1;
 hasComputed[1]=true;
 hasil[2]=1;
 hasComputed[2]=true;
 hasil[5]=1;
 hasComputed[5]=true;
 hasil[10]=1;
 hasComputed[10]=true;
 hasil[50]=1;
 hasComputed[50]=true;
 hasil[100]=1;
 hasComputed[100]=true;
 int akhir =1;
 while(t--){
    cin>>n;
    if(n>akhir){
        for(int i=akhir+1;i<=n;i++){
            hasil[i] = f(i);
        }
        akhir=n;
    }

    cout<<hasil[n]<<endl;
 }
 return 0;
}
