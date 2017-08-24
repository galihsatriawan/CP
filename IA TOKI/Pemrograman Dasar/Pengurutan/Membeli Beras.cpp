#include <bits/stdc++.h>

using namespace std;

void swap(double &a,double &b){
	double temp=a;
	a=b;
	b=temp;
}
int main(){
	int n;
	double w[1001],c[1001];
	double harga[1001];
	long x,i,j;
	double uang=0;
	cin>>n>>x;
	for(i=1;i<=n;i++){
		scanf("%lf",&w[i]);
	}
	for(i=1;i<=n;i++){
		scanf("%lf",&c[i]);
		harga[i]=(c[i]*1.0)/(w[i]*1.0);
	}
	for(i=1;i<n;i++){
		for(j=i+1;j<=n;j++){
			if(harga[i]<=harga[j]){
				swap(harga[i],harga[j]);
				swap(w[i],w[j]);
			}
		}
	}
//	for(i=1;i<=n;i++){
//		cout<<w[i]<<"++"<<c[i]<<"++"<<harga[i]<<endl;
//	}
	uang=0.0;
	i=1;
	for(i=1;i<=n;i++){
		if(w[i]<x){
			uang+=w[i]*1.0*harga[i];
			x-=w[i];
		}else{
			uang+=harga[i]*x;
			break;
		}
	}
	
	
	printf("%.5lf\n",uang);
	return 0;
}
