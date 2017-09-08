#include <iostream>
#include <stdbool.h>
using namespace std;
int main(){
	bool duaPangkat=true;
	int n;
	cin>>n;
	while((n>1)&&(duaPangkat)){
		if(n%2==1) duaPangkat=false;
		n=n/2;
	}
	if(duaPangkat) cout<<"ya"<<endl;
	else cout<<"bukan"<<endl;
	return 0;
}
