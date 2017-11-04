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
#define MAX 
using namespace std;

void Gokil(long arr[],long aLeft,long aRight,long bLeft,long bRight){
	long temp[100001];
	//memcpy
	
	long i,j;
	FORa(i,aLeft,bRight){
		temp[i]=arr[i];
	}
	long index=aLeft;
	//All of them
	while((aLeft<=aRight)&&(bLeft<=bRight)){
		if(temp[aLeft]<temp[bLeft]){
			arr[index++]=temp[aLeft++];
		}else{
			arr[index++]=temp[bLeft++];
		}
	}
	
	//Left
	while((aLeft<=aRight)){
		arr[index++]=temp[aLeft++];
	}
	
	//Right
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
	long data[100001];
	long n,i,d,j;
	sf("%ld %ld",&n,&d);
	long total=0;
	FOR(i,n){
		sf("%ld",&data[i]);
		total+=data[i];
	}
	total+=(10*(n-1));
	
	GokilSt(data,1,n);
//	FOR(i,n){
//		pf("%ld ",data[i]);
//	}
	long index=1,jokes=0;
	if(total<=d){
		while((index<=n)&&(data[index]<=d)){
			d-=data[index++];
			//cout<<d<<endl;
			if(d<=10){
				//cout<<"Hello";
				jokes+=(d/5);
				d=0;
			}else{
				jokes+=2;
				d-=10;
			}
		}
		if(d>=10){
			jokes+=(d/5);
		}
	}else{
		jokes=-1;
	}
	
	pf("%ld\n",jokes);
	return 0;
}
