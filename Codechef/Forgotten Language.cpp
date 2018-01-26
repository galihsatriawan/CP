#include <bits/stdc++.h>

using namespace std;

#define FOR(i,n) for(i=1;i<=n;i++)
#define FORa(i,a,b) for(i=a;i<=b;i++)


int main(){
  int i,n,t,k,temp,ndict;
  string kata[1000],str;
  set<string> dict;
  cin>>t;
  while(t--){
    dict.clear();
    cin>>n>>k;
    FOR(i,n){
      cin>>kata[i];
    }
    while(k--){
        cin>>ndict;
        FOR(i,ndict) {
            cin>>str;
            dict.insert(str);
        }
    }
    if(dict.count(kata[1])==0) cout<<"NO"; else cout<<"YES";
    FORa(i,2,n){
        if(dict.count(kata[i])==0) cout<<" NO"; else cout<<" YES";
    }
    cout<<endl;
  }
 return 0;
}
