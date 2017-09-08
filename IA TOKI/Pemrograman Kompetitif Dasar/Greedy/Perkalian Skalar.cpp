#include <bits/stdc++.h>

using namespace std;
void swap(long &a,long &b){
	long temp=a;
	a=b;
	b=temp;
}
void urutkan(long arr[],int n){
	int i,j;
	for(i=1;i<n;i++){
		for(j=i+1;j<=n;j++){
			if(arr[i]>arr[j]) swap(arr[i],arr[j]);
		}
	}
}
int main(){
	int n,i,j;
	long a[10001],b[10001];
	cin>>n;
	for(i=1;i<=n;i++){
		cin>>a[i];
	}
	for(i=1;i<=n;i++){
		cin>>b[i];
	}
	urutkan(a,n);
	urutkan(b,n);
	j=n;
	long jum=0;
	for(i=1;i<=n;i++){
		jum=jum+(a[i]*b[j]);
		j--;
	}
	cout<<jum<<endl;
	return 0;
}
