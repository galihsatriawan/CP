#include <bits/stdc++.h>
using namespace std;

#define FORa(i,a,b) for(i=a;i<=b;i++)
#define FOR(i,a) for(i=1;i<=a;i++)
const int N=1e5+5;
int main(){
  int i,bil,n,pos[N],data[N];
   bool namb=false;
  
  while(1) {
  	cin>>n;
  	namb=false;
  	if(n!=0){
  		
		FOR(i,n){
		    cin>>data[i];
		    //posisi bil
		    pos[data[i]]=i;
		  }
	  	FOR(i,n){
	  		if(data[i]!=pos[i]) namb=true;
		  }
	  	if (namb) cout<<"not ambiguous"<<endl;
	  	else cout<<"ambiguous"<<endl;
	  }
	  else break;
  }
  

return 0;
}

