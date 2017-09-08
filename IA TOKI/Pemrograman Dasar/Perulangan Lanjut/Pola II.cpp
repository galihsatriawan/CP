#include <iostream>
using namespace std;
int main(){
	int n,j,i,pos;
	cin>>n;
	pos=n;
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(j>=pos) cout<<"*";
			else cout<<" ";
		}
		pos--;
		cout<<endl;
	}
	return 0;
}
