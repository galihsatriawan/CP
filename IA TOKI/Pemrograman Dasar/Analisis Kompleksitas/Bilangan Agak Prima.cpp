#include <iostream>
using namespace std;
int main(){
	int i,j,n,count;
	long bil;
	cin>>n;
	for(i=1;i<=n;i++){
		cin>>bil;
		j=2;
		count=0;
		while((j*2<=bil)&&(count<=2)){
			if(bil%j==0) {
				count++;
			}
			j++;

		}
		if(count<=2) cout<<"YA"<<endl;
		else cout<<"BUKAN"<<endl;
	}
	return 0;
}
