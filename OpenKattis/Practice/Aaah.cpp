#include <bits/stdc++.h>
#define FORa(i,a,ak) for(i=a;i<=ak;i++)
#define FOR(i,n) for(i=1;i<=n;i++)
#define pf printf
#define sf scanf



using namespace std;


int main(){
	char s1[100000],s2[100000];
	cin>>s1;
	cin>>s2;
	int p1=strlen(s1),p2=strlen(s2);
	if(p1<p2) cout<<"no"<<endl;
	else cout<<"go"<<endl;
	return 0;
}
