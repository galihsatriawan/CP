#include <iostream>
using namespace std;
int main(){
	int n,i,j;
	bool IsPrima;
	long bil;
	cin>>n;
	for(i=1;i<=n;i++){
		cin>>bil;
		IsPrima=true;
		j=2;
		while(j*j<=bil){
			if(bil%j==0) {
				IsPrima=false;
				break;
			}
			j++;
		}
		if(IsPrima) cout<<"YA"<<endl;
		else cout<<"BUKAN"<<endl;

	}
	return 0;

}
