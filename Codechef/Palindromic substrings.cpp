#include <bits/stdc++.h>

using namespace std;

#define FOR(i,n) for(i=1;i<=n;i++)
#define FORa(i,a,b) for(i=a;i<=b;i++)


int main(){
 int t,i;
 char str[10000];
 bool palind;
 set<char> dict;
 cin>>t;
 while(t--){
    palind = false;
    dict.clear();
    cin>>str;
    FORa(i,0,strlen(str)-1){
        dict.insert(str[i]);
    }
    cin>>str;

       FORa(i,0,strlen(str)-1){
            if(dict.count(str[i])!=0) {
                palind = true;
                break;
            }
        }


    if(palind) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
 }
 return 0;
}
