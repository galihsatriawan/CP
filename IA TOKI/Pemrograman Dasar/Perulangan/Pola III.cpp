#include <iostream>
using namespace std;
int main(){
	int j,n,i,pos;
	pos=0;
	cin>>n;
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			cout<<pos;
			pos=(pos+1)%10;
		}
		cout<<endl;
	}
	return 0;
}
