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

void swap(char a,char b){
	char temp=a;
	a=b;
	b=temp;
}
int main(){
	int t,i,j,k,n,index,panjang1;
	sf("%d",&t);
	while(t--){
		sf("%d",&n);
		int hasil[1000];
		int b[1000];
		memset(hasil,0,sizeof hasil);
		hasil[1]=1;
		panjang1=1;
		FORa(i,2,n){
			//jadikan ke array
			int panjang2=0,tempI=i;
			int tempArr[1000];
			
			FOR(j,panjang1){
				tempArr[j]=hasil[j];
			}
//			cout<<"deteksi copy temp"<<endl;
//			FOR(j,panjang1){
//				cout<<tempArr[j]<<" ";
//			}
			//cout<<endl;
			//cout<<"+"<<i<<endl;
			while(tempI>0){
				b[++panjang2]=tempI%10;
				tempI/=10;
			}
//			cout<<"deteksi parse b"<<endl;
//			for(j=panjang2;j>0;j--) cout<<b[j];
//			cout<<endl;
			//reverse isi array
//			int left=1,right=index;
//			while(left<right){
//				swap(b[left++],b[right--]);
//			}
			//kalikan
			int indexAwal=1,indexAkhir;
			//temp kali b
			memset(hasil,0,sizeof hasil);
			FOR(j,panjang2){
				index=indexAwal;
				FOR(k,panjang1){
					int simpan=hasil[index]+tempArr[k]*b[j];
					if(simpan>=10) {
						hasil[index]=simpan%10;
						hasil[index+1]=hasil[index+1]+(simpan/10);
					}else{
						hasil[index]=simpan;
					}
					index++;
				}
				indexAwal++;
				indexAkhir=index;
			}
			
			if(hasil[indexAkhir]!=0) panjang1=indexAkhir;
			else panjang1=indexAkhir-1;
			
		}
		for(j=panjang1;j>0;j--) cout<<hasil[j];
		cout<<endl;
		
	}
	return 0;
}
