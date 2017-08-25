#include <bits/stdc++.h>

using namespace std;
int ArrPerm[10001];
bool HasUsed[10001];
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
			if(!HasUsed[i]){
				//cout<<"Hore"<<endl;
				ArrPerm[k]=i;
				HasUsed[i]=true;
				permutation(n,k+1);
				HasUsed[i]=false;
			}
			
		}
	}
}
int main(){
	int n,k;
	memset(HasUsed,false,sizeof HasUsed);
	cin>>n;
	permutation(n,1);
	
	return 0;
}
