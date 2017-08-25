#include <bits/stdc++.h>

using namespace std;
int ArrPerm[10001];
void permutation(int n,int k){
	int i;
	if(k>n){
		
		//cetak Semua
		for(i=1;i<=n;i++){
			cout<<ArrPerm[i];
		}
		cout<<endl;
	}else{
		for(i=1;i<=n;i++){
			ArrPerm[k]=i;
			permutation(n,k+1);
		}
	}
}
int main(){
	int n,k;
	cin>>n;
	permutation(n,1);
	
	return 0;
}
