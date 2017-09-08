#include <iostream>
using namespace std;
int main(){
	int n,b;
	long total=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>b;
		total+=b;
	}
	cout<<total<<endl;
	return 0;
}
