#include <bits/stdc++.h>

using namespace std;

int banyak=0,data[100][100];
bool hasThrough[100][100];
void cari(int tujuan,int posI,int posJ){
	if((!hasThrough[posI][posJ])&&(data[posI][posJ]==tujuan)){
		hasThrough[posI][posJ]=true;
		banyak++;
		//cabang jadi 4
		cari(tujuan,posI-1,posJ);
		cari(tujuan,posI+1,posJ);
		cari(tujuan,posI,posJ-1);
		cari(tujuan,posI,posJ+1);
	}
}

int main(){
	int m,n,posI,posJ;
	cin>>m>>n;
	int i,j;
	memset(hasThrough,false,sizeof hasThrough);
	memset(data,-1,sizeof data);
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			cin>>data[i][j];
		}
	}
	cin>>posI>>posJ;
	cari(data[posI][posJ],posI,posJ);
	int hasil= banyak*(banyak-1);
	cout<<hasil<<endl;
	
	return 0;
}
