#include <bits/stdc++.h>

using namespace std;
string biner(long x){
	if(x==1) return "1";
	else{
		if(x%2==0) return (biner(x/2)+"0");
		else return (biner(x/2)+"1");

	} 
	
}
int main(){
	long n;
	cin>>n;
	cout<<biner(n)<<endl;
	return 0;
}
