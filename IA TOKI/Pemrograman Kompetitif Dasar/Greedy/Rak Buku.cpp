#include <bits/stdc++.h>

using namespace std;
void swap(int &a,int &b){
	int temp=a;
	a=b;
	b=temp;
}
void urutkanDesc(int tinggi[],int n){
	int i,j;
	for(i=1;i<n;i++){
		for(j=i+1;j<=n;j++){
			if(tinggi[i]<tinggi[j]) swap(tinggi[i],tinggi[j]);
		}
	}
}
int main(){
	int n,i,tinggi[20001];
	long b;
	cin>>n>>b;
	for(i=1;i<=n;i++){
		cin>>tinggi[i];
	}
	urutkanDesc(tinggi,n);
	long jum=0;
	i=0;
	while(jum<b){
		jum=jum+tinggi[++i];
	}
	cout<<i<<endl;
	return 0;
}
