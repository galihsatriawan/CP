#include <bits/stdc++.h>
#include <cmath>
#define FORa(i,a,ak) for(i=a;i<=ak;i++)
#define FOR(i,n) for(i=1;i<=n;i++)
#define pf printf
#define sf scanf
using namespace std;
const int N=1e5+5;

void Gokil(pair<int,int> laptop[],int aLeft,int aRight,int bLeft,int bRight){
    pair<int,int> temp[N];
    int i;
    FORa(i,aLeft,bRight){
        temp[i]=laptop[i];
    }
    int index=aLeft;
    while((aLeft<=aRight)&&(bLeft<=bRight)){
        if(temp[aLeft].second>temp[bLeft].second){
            laptop[index++]=temp[aLeft++];
        }else{
            laptop[index++]=temp[bLeft++];
        }
    }
    while((aLeft<=aRight)){
        laptop[index++]=temp[aLeft++];
    }
    while((bLeft<=bRight)){
        laptop[index++]=temp[bLeft++];
    }
}
void GokilST(pair<int,int> laptop[],int left,int right){
    if(left!=right){
        int mid=(left+right)/2;
        GokilST(laptop,left,mid);
        GokilST(laptop,mid+1,right);
        Gokil(laptop,left,mid,mid+1,right);
    }
}

int main(){
    int n,i,j,k;
    int a,b;

    sf("%d",&n);
    pair<int,int> laptop[n];
    FORa(i,0,n-1){
        sf("%d %d",&a,&b);
        laptop[i]=make_pair(a,b);
    }
    GokilST(laptop,0,n-1);
    //for (int i=0;i<n;i++) {
    //       cout << laptop[i].first <<" "<< laptop[i].second<<endl;
     //}
    FORa(i,0,n-2){
        if(laptop[i].first<laptop[i+1].first) {
            cout<<"Happy Alex"<<endl;
            return 0;
        }
    }
    cout<<"Poor Alex"<<endl;
	return 0;
}
