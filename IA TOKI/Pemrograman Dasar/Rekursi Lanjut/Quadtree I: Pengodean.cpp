#include <bits/stdc++.h>

using namespace std;
int quadtree[129][129],hasil[100000][129];
int temp[129],posKe[100000];
int banyak=0;
bool berisi(int biner,int ia,int ik,int ja,int jk){
	int i,j;
	for(i=ia;i<=ik;i++){
		for(j=ja;j<=jk;j++){
			if(quadtree[i][j]!=biner) return false;
		}
	}
	return true;
}
void cari(int pos,int quad,int biner,int ia,int ik,int ja,int jk){

	if(((abs(ia-ik)==0)&&(abs(ja-jk)==0))||(berisi(biner,ia,ik,ja,jk))){
		
		if((berisi(biner,ia,ik,ja,jk))){
			//cout<<"Hore"<<endl;
			banyak++;
			posKe[banyak]=pos-1;
			for(int i=1;i<pos;i++){
				hasil[banyak][i]=temp[i];
			}
			hasil[banyak][0]=biner;
		}
	}
	//Pecah jadi Empat
	else{
		//kiri Atas
		temp[pos]=0;
		cari(pos+1,0,biner,ia,(ia+ik)/2,ja,(ja+jk)/2);	
		//kanan Atas
		temp[pos]=1;
		cari(pos+1,1,biner,ia,(ia+ik)/2,(ja+jk)/2+1,jk);
		//kiri Bawah
		temp[pos]=2;
		cari(pos+1,2,biner,(ia+ik)/2+1,ik,ja,(ja+jk)/2);
		//kanan Bawah
		temp[pos]=3;
		cari(pos+1,3,biner,(ia+ik)/2+1,ik,(ja+jk)/2+1,jk);
	}
}
int jadiDua(int n){
	int i;
	i=2;
	while(i<n){
		i*=2;
	}
	return i;
}
int main(){
	int n,m,i,j,pos;
	cin>>m>>n;
	memset(quadtree,0,sizeof quadtree);
	for(i=1;i<=m;i++){
		for(j=1;j<=n;j++){
			cin>>quadtree[i][j];
		}
	}
	m=m>n?jadiDua(m):jadiDua(n);
	n=m;
	pos=1;

	if(berisi(0,1,m,1,n)){
		cout<<0<<endl;
		return 0;
	}else if(berisi(1,1,m,1,n)){
		cout<<1<<endl<<1<<endl;
		return 0;
	}else{
		cari(1,0,1,1,m,1,n);
	}
	cout<<banyak<<endl;
	for(i=1;i<=banyak;i++){
		for(j=0;j<=posKe[i];j++){
			cout<<hasil[i][j];
		}
		cout<<endl;
	}
	return 0;
}
