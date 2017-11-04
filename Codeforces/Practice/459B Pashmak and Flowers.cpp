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
void Gokil(long arr[],long aLeft,long aRight,long bLeft,long bRight){
	long index=aLeft;
	long temp[10000];
	long i,j;
	FORa(i,aLeft,bRight){
		temp[i]=arr[i];
	}
	while((aLeft<=aRight)&&(bLeft<=bRight)){
		if(temp[aLeft]<temp[bLeft]){
			arr[index++]=temp[aLeft++];
		}else{
			arr[index++]=temp[bLeft++];
		}
	}
	
	while((aLeft<=aRight)){
		arr[index++]=temp[aLeft++];
	}
	
	while((bLeft<=bRight)){
		arr[index++]=temp[bLeft++];
	}
	
}
void GokilSt(long arr[],long left,long right){
	
	if(left!=right){
		long mid=(left+right)/2;
		GokilSt(arr,left,mid);
		GokilSt(arr,mid+1,right);
		Gokil(arr,left,mid,mid+1,right);
	}
}

int main(){
	long data[100000],i,n;
	cin>>n;
	FOR(i,n){
		cin>>data[i];
	}
	GokilSt(data,1,n);
//	FOR(i,n){
//		cout<<data[i]<<" ";
//	}
//	cout<<endl;
	long max=data[n]-data[1];
	long j,count=0;
	long left=1,right=n;
	FOR(i,n-1){
		for(j=n;j>i;j--){
			if(data[j]-data[i]!=max) break;
			else count++;
		}
	}

	cout<<max<<" "<<count<<endl;
	
	return 0;
}
