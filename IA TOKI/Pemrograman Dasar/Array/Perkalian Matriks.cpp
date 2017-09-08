#include <iostream>
using namespace std;
int main(){
	int n,m,p,i,j,k,a[101][101],b[101][101];
	long hasil[101][101];
	cin>>n>>m>>p;
	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
			cin>>a[i][j];
		}
	}
	for(i=1;i<=m;i++){
		for(j=1;j<=p;j++){
			cin>>b[i][j];
		}
	}
	for(i=1;i<=n;i++){
		for(j=1;j<=p;j++){
			hasil[i][j]=0;
			//penjumlahan
			for(k=1;k<=m;k++){
				hasil[i][j]+=a[i][k]*b[k][j];
			}
			if(j==p) cout<<hasil[i][j]<<endl;
			else cout<<hasil[i][j]<<" ";
		}
	}
	return 0;
}
