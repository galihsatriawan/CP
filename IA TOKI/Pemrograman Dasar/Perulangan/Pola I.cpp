#include <iostream>
using namespace std;
int main(){
	int n,k;
	int i;
	cin>>n>>k;
	for(i=1;i<=n;i++){
		if(i%k==0) {
			if(i!=n) cout<<"* ";
			else cout<<"*"<<endl;
		}

		else {
			if(i!=n) cout<<i<<" ";
			else cout<<i<<endl;
		}
	}

	return 0;
}
