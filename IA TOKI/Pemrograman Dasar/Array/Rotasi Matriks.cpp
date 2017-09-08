#include <iostream>
using namespace std;
int main(){
	int i,j,n,m,matriks[101][101];
	cin>>n>>m;
	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
			cin>>matriks[i][j];
		}
	}
	for(i=1;i<=m;i++){
		for(j=n;j>0;j--){
			if(j==1) cout<<matriks[j][i]<<endl;
			else cout<<matriks[j][i]<<" ";
		}
	}
	return 0;
}
