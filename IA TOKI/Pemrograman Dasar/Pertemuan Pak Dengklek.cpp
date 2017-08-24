#include <bits/stdc++.h>

using namespace std;

void swap (string &a,string &b){
	string temp=a;
	a=b;
	b=temp;
}
int main(){
	int n,i,j;
	string nama[1000];
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		cin>>nama[i];
	}
	for(i=1;i<=n-1;i++){
		for(j=i+1;j<=n;j++){
			if(nama[i].length()>nama[j].length()){
				swap(nama[i],nama[j]);
			}else if(nama[i].length()==nama[j].length()){
				if(nama[i]>nama[j]) swap(nama[i],nama[j]);
			}
		}
	}
	for(i=1;i<=n;i++){
		cout<<nama[i]<<endl;
	}
	return 0;
}
