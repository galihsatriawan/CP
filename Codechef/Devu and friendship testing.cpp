#include <bits/stdc++.h>
using namespace std;

#define FORa(i,a,b) for(i=a;i<=b;i++)
#define FOR(i,n) for(i=1;i<=n;i++)
int main(){
    int t,n,bil,maxi;
    set<int> dict;
    cin>>t;
    while(t--){
        dict.clear();
        maxi =0 ;
        cin>>n;
        while(n--){
            cin>>bil;
            if(dict.count(bil)==0) {
                maxi++;
                dict.insert(bil);
            }
        }
        cout<<maxi<<endl;

    }
return 0;
}
