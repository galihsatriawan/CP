#include <bits/stdc++.h>

using namespace std;
void gunung(int x){
	if(x==1) cout<<"*"<<endl;
	else{
		int i;
		gunung(x-1);
		for(i=1;i<=x;i++){
			cout<<"*";
		}
		cout<<endl;
		gunung(x-1);
	}
}
int main(){
	int n;
	cin>>n;
	gunung(n);
	return 0;
}
