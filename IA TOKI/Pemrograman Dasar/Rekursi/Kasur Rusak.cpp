#include <bits/stdc++.h>

using namespace std;
char ch[101];
bool palind(int left,int right){
	if(left>=right) return true;
	else{
		if(ch[left]!=ch[right]) return false;
		else return palind(left+1,right-1);
	}
}

int main(){
	cin>>ch;
	if(palind(0,strlen(ch)-1)) cout<<"YA"<<endl;
	else cout<<"BUKAN"<<endl;
	return 0;
}
