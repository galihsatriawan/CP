#include <iostream>
using namespace std;
int main(){
	unsigned long n,i;
	cin>>n;
	i=n;
	while(i>0){
		if(n%i==0) cout<<i<<endl;
		i--;
	}
	return 0;
}
