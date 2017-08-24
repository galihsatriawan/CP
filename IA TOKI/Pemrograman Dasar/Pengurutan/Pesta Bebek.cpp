#include <bits/stdc++.h>

using namespace std;
void swap(string &a,string &b){
	string temp=a;
	a=b;
	b=temp;
}
int main(){
	int pos,n,i,j,hasil[1001];
	string nama[1001];
	cin>>n;
	cin>>nama[1];
	hasil[1]=1;
	//insertion sort
	for(i=2;i<=n;i++){
		j=i-1;
		pos=i;
		hasil[i]=pos;
		cin>>nama[i];
		while((j>=1)&&(nama[pos]<nama[j])){
			swap(nama[pos],nama[j]);
			pos--;
			hasil[i]=pos;
			j--;
		}
		
	}
	for(i=1;i<=n;i++){
		cout<<hasil[i]<<endl;
	}
	return 0;
}
