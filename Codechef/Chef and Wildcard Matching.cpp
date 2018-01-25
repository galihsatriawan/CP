#include <bits/stdc++.h>

using namespace std;

#define sf scanf
#define pf printf

int main(){
 int t,diff;
 string s1,s2;
 cin>>t;
 while(t--){
    cin>>s1>>s2;
    diff = 0;
    int panjang = s1.size();
    while(panjang--){
        if(s1[panjang]!=s2[panjang]){
            if(!(s1[panjang]=='?'||s2[panjang]=='?')){
                diff++;
            }
        }
    }
    if(diff==0) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;

 }
 return 0;
}
