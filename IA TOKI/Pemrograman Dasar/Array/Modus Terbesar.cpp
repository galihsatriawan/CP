#include <iostream>
using namespace std;
int main(){
	long arr_temp[1001],n,i,modus,banyak;
	int bil;
	for(i=1;i<=1000;i++){
		arr_temp[i]=0;
	}
	cin>>n;
	for(i=1;i<=n;i++){
		cin>>bil;
		arr_temp[bil]++;
	}
	modus=bil;
	banyak=arr_temp[bil];
	for(i=1;i<=1000;i++){
		if(banyak<=arr_temp[i]){
			modus=i;
			banyak=arr_temp[i];
		}
	}
	cout<<modus<<endl;
	return 0;
}
