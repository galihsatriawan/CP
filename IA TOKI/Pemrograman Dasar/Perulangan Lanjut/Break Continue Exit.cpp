#include <iostream>
using namespace std;
int main(){
	int n,i;
	cin>>n;
	i=1;
	for(i=1;i<=n;i++){
		if(i==42) {
			cout<<"ERROR"<<endl;
			break;
		}

		if(i%10==0) continue;
		cout<<i<<endl;

	}
return 0;
}
