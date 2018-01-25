#include <bits/stdc++.h>

using namespace std;

#define sf scanf
#define pf printf

int main(){
    int t,n,m,k,data[200],i,j,bil;
    cin>>t;
    while(t--){
        memset(data,0,sizeof(data));
        cin>>n>>m>>k;
        while(m--){
            cin>>bil;
            data[bil]++;
        }
        while(k--){
            cin>>bil;
            data[bil]++;
        }
        int ai=0,uu=0;
        for(i=1;i<=n;i++){
            if(data[i]==2) ai++;
            else if(data[i]==0) uu++;
        }
        cout<<ai<<" "<<uu<<endl;
    }
 return 0;
}
