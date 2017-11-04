#include <iostream>
#include <stdlib.h>
#include <string>
#include <string.h>
#include <stdio.h>
#include <vector>
#include <cmath>

#define FORa(i,a,ak) for(i=a;i<=ak;i++)
#define FOR(i,n) for(i=1;i<=n;i++)
#define pf printf
#define sf scanf
using namespace std;

void hitung(char ch[],int &satu,int &nol){
	int i,panjang=strlen(ch);
	FORa(i,0,panjang-1){
		if(ch[i]=='1') satu++;
		else nol++;
	}
}

int main(){
	int i,j,n,m,k;
	long x[1001];
	sf("%d %d %d",&n,&m,&k);
	FOR(i,m+1){
		sf("%ld",&x[i]);
	}
	int count=0;
	char acuan[n],temp[n],temp2[n];
	itoa(x[m+1],acuan,2);
	//cout<<acuan<<endl;
	int panjang2,panjang1=strlen(acuan);
	cout<<acuan<<"++";
	FOR(i,m){
		strcpy(temp2,acuan);
		itoa(x[i],temp,2);
		
		panjang2=strlen(temp);
		
		//Penambahan angka 0
		
		//Jika biner dari inputan terakhir lebih panjang
		if(panjang2>panjang1){
			FOR(j,(panjang2-panjang1)){
				temp2[panjang1+j-1]='0';
			}
		}else{
			FOR(j,(panjang1-panjang2)){
				temp[panjang2+j-1]='0';
			}
		}
		int satu1=0,satu2=0,nol1=0,nol2=0;
		hitung(temp2,satu1,nol1);
		hitung(temp,satu2,nol2);
		cout<<temp2<<"--"<<satu1<<" "<<nol1<<endl;
		cout<<temp<<"--"<<satu2<<" "<<nol2<<endl;
		
		//Jika selisih nol + selisih satu(angka) <=2
		if(abs(satu1-satu2)+abs(nol1-nol2)<=(k*2)){
			count++;
		}
	}
	pf("%d\n",count);
	
	return 0;
}
