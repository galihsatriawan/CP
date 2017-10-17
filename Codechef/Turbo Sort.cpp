#include <iostream>
#include <stdlib.h>
#include <string>
#include <string.h>
#include <stdio.h>
#include <vector>
#include <cmath>
#define FORa(i,a,ak) for(i=a;i<=ak;i++)
#define FOR(i,n) for(i=1;i<=n;i++)
#define pf printf
#define sf scanf

using namespace std;
const int N=1e6+5;
vector<int> temp,arr;
void Gokil(int aLeft,int aRight,int bLeft,int bRight){
	int i,j;
	
	FORa(i,aLeft,bRight){
		temp[i]=arr[i];
	}
	int index=aLeft;
	//pemilihan
	while((aLeft<=aRight)&&(bLeft<=bRight)){
		if(temp[aLeft]<temp[bLeft]){
			arr[index++]=temp[aLeft++];
		}else{
			arr[index++]=temp[bLeft++];
		}
	}
	//kiri
	while((aLeft<=aRight)){
			arr[index++]=temp[aLeft++];
	}
	//kanan
	while((bLeft<=bRight)){
			arr[index++]=temp[bLeft++];
	}
	
}
void GokilSt(int left,int right){
	if(left!=right){
		int mid=(left+right)/2;
		GokilSt(left,mid);
		GokilSt(mid+1,right);
		Gokil(left,mid,mid+1,right);
	}
}


int main(){
	int n,t,i,j;

	sf("%d",&t);
	FOR(i,t){
		sf("%d",&n);
		arr.push_back(n);
		temp.push_back(n);
	}
	GokilSt(0,t-1);
	FORa(i,0,t-1){
		pf("%d\n",arr[i]);
	}



	return 0;
}
