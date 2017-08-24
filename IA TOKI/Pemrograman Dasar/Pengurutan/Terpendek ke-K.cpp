#include <bits/stdc++.h>

using namespace std;

int main(){
	int k,n,i,j,bil;
	int urut[1001],bebek[100001];
	memset(bebek,0,sizeof bebek);
	cin>>n>>k;
	for(i=1;i<=n;i++){
		cin>>bil;
		bebek[bil]++;
	}
	i=0;
	for(j=1;j<=100000;j++){
		if(bebek[j]>0) {
			urut[++i]=j;
		}
	}
	
	cout<<urut[k]<<endl;
	
	
	return 0;
}
