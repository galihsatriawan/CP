#include <iostream>
using namespace std;
int main(){
	int bil;
	long total=0;
	cin>>bil;
	while(!cin.eof()){
		total+=bil;
		cin>>bil;
	}
	cout<<total<<endl;
	return 0;
