#include <iostream>
using namespace std;
int main(){
	int n,i;
	long arr[101];
	n=0;
	cin>>arr[1];
	i=1;
	while(!cin.eof()){
		cin>>arr[++i];
		n++;
	}
	for(i=n;i>0;i--){
		cout<<arr[i]<<endl;
	}
	return 0;
}
