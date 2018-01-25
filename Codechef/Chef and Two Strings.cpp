#include <bits/stdc++.h>

using namespace std;

#define sf scanf
#define pf printf

int main(){
 int t;
 string s1,s2;
 cin>>t;
 while(t--){
    cin>>s1>>s2;
    int mini=0,maxi=0;
    int panjang = s1.size();
    while((panjang--)){
        if(s1[panjang]!=s2[panjang]){
            maxi++;
            if(!(s1[panjang]=='?'||s2[panjang]=='?')){
                mini++;
            }
        }else if((s1[panjang]=='?'||s2[panjang]=='?')){
            maxi++;
        }
    }
    cout<<mini<<" "<<maxi<<endl;
 }
 return 0;
}
