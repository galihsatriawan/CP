#include <bits/stdc++.h>

using namespace std;
long factGen(int n){
	if(n==1) return 1;
	else{ 
		if(n%2==0) return (n/2)*factGen(n-1);
		else return n*factGen(n-1);
	}
}
int main(){
	int n;
	cin>>n;
	cout<<factGen(n)<<endl;
	return 0;
}
