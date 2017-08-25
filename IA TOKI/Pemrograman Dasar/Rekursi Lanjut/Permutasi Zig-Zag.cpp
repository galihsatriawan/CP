#include <bits/stdc++.h>

using namespace std;
bool HasComputed[11];
int ArrZig[11];
void zigzag(int n,int k){
	int i;
	if(k>n){
		for(i=1;i<=n;i++){
			cout<<ArrZig[i];
		}
		cout<<endl;
	}else{
		for(i=1;i<=n;i++){
			if(!HasComputed[i]){
				HasComputed[i]=true;
				ArrZig[k]=i;
				if(k>=3){
					if(((ArrZig[k-1]>(ArrZig[k]))&&(ArrZig[k-1]>(ArrZig[k-2])))||((ArrZig[k-1]<(ArrZig[k]))&&(ArrZig[k-1]<(ArrZig[k-2])))){
						zigzag(n,k+1);
					}
				}else{
					zigzag(n,k+1);
				}
				
				
				
				HasComputed[i]=false;
			}
		}
	}
}
int main(){
	memset(HasComputed,false,sizeof HasComputed);
	int n;
	cin>>n;
	zigzag(n,1);
	return 0;
}
