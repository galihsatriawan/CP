#include <iostream>
using namespace std;
int main(){
	int n,i;
	long max,min,bil;
	cin>>n;
	cin>>bil;
	max=bil;
	min=bil;
	for(i=2;i<=n;i++){
		cin>>bil;
		if(bil>max) max=bil;
		if(bil<min) min=bil;
	}
	cout<<max<<" "<<min<<endl;
	return 0;
}
