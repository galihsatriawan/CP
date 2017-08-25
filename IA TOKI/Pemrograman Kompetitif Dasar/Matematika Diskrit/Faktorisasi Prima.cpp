#include <iostream>
#include <cmath>
#include <stdbool.h>
using namespace std;
bool IsPrima[1000001];
long prima[1000001];
void erasthostenes(long jarak){
	long i,j;
	for(i=2;i<=jarak;i++){
		if(IsPrima[i]){
			j=2;
			while(j*i<=jarak){
				IsPrima[j*i]=false;
				j++;
			}
		}
		
	}
}
long pangkat[1000001];
void isiPangkat(long &n,long x){
	while(n%x==0){
		pangkat[x]++;
		n/=x;
	}
}
long isiPrima(long x){
	erasthostenes(x);
	long i,pos=0;
	for(i=2;i<=x;i++){
		if(IsPrima[i]) prima[++pos]=i;
	}
	return pos;
} 
int main(){
	long i,j,banyakPrima;
	long n;
	IsPrima[1]=false;
	for(i=2;i<=1000000;i++){
		IsPrima[i]=true;
	}
	cin>>n;
	banyakPrima=isiPrima(n);
	// for(i=1;i<=banyakPrima;i++){
	// 	cout<<prima[i]<<" ";
	// }
	//Cari 
	i=1;
	while((n>1)&&(prima[i]<=n)){
		isiPangkat(n,prima[i]);
		i++;
	}
	//Cetak
	for(j=1;j<=i-1;j++){
		if(pangkat[prima[j]]!=0){
			//Yang Terakhir
			if(j==i-1){
				if(pangkat[prima[j]]>1) cout<<prima[j]<<"^"<<pangkat[prima[j]]<<endl;
				else cout<<prima[j]<<endl;
			}else{
				if(pangkat[prima[j]]>1) cout<<prima[j]<<"^"<<pangkat[prima[j]]<<" x ";
				else cout<<prima[j]<<" x ";
			}
			
		}
	}
	return 0;

}
