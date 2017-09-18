#include <bits/stdc++.h>
using namespace std;
int data[30][30],banyak;
bool HasStay[39][30];
void ekspansi(int cari,int i,int j){
	if(!HasStay[i][j]){
		if(cari==data[i][j]){
			banyak++;
			HasStay[i][j]=true;
			ekspansi(cari,i-1,j);
			ekspansi(cari,i+1,j);
			ekspansi(cari,i,j-1);
			ekspansi(cari,i,j+1);
		}
	}
}

int main(){
	memset(data,0,sizeof data);
	int n,m,i,j;
	cin>>m>>n;
	for(i=1;i<=m;i++){
		for(j=1;j<=n;j++){
			cin>>data[i][j];
		}
	}
	int max=0;
	for(i=1;i<=m;i++){
		for(j=1;j<=n;j++){
			banyak=0;
			ekspansi(data[i][j],i,j);
			if(max<banyak){
				max=banyak;
			}
			memset(HasStay,false,sizeof HasStay);
		}
	}
	
	cout<<max*(max-1)<<endl;
	
	return 0;
}
