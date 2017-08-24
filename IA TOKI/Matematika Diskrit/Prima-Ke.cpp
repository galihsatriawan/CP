#include <bits/stdc++.h>

using namespace std;

bool IsPrime[10000001];
void sieve_erathostenes(){
	memset(IsPrime,true,sizeof IsPrime);
	IsPrime[1]=false;
	long i=2,j;
	while(i<=10000){
		j=2;
		if(IsPrime[i]){
			while(i*j<=10000000){
				IsPrime[i*j]=false;
				j++;
			}
		}
		i++;	
	}
}
void isiPrima(long long prim[]){
	long i=0;
	long long j=2;
	sieve_erathostenes();
	while(i<78000){
		if(IsPrime[j]){
			prim[++i]=j;
		}
		j++;
	}
}
int main(){
	int t,i;
	long k,tanya[20001];
	long long hasil[20001],prima[80000];
	cin>>t;
	isiPrima(prima);
	for(i=1;i<=t;i++){
		cin>>tanya[i];
		hasil[i]=prima[tanya[i]];
	}	
	for(i=1;i<=t;i++){
		cout<<hasil[i]<<endl;
	}
	return 0;
}
