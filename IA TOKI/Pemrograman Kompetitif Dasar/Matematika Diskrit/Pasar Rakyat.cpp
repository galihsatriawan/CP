#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i;
	long tamb,d[21],kpk;
	cin>>n;
	cin>>d[1];
	kpk=d[1];
	for(i=2;i<=n;i++){
		cin>>d[i];
		if(kpk<d[i]) kpk=d[i];
	}
	tamb=kpk;
	bool ketemu=false;
	while(!ketemu){
		for(i=1;i<=n;i++){
			if(kpk%d[i]!=0){
				kpk+=tamb;
				break;
			}
		}
		if(i>n) ketemu=true;
	}
	cout<<kpk<<endl;
	return 0;
}
