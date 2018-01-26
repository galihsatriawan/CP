#include <bits/stdc++.h>

using namespace std;

#define FOR(i,n) for(i=1;i<=n;i++)
#define FORa(i,a,b) for(i=a;i<=b;i++)


int main(){
    int i,t,cnt0,cnt1;
    char data[100005];
    bool can;
    cin>>t;
    while(t--){

        cnt1=0;
        cnt0=0;
        cin>>data;
        FORa(i,0,strlen(data)-1){
            if(data[i]=='1') cnt1++;
            else cnt0++;
        }
        if(cnt1==1||cnt0==1) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
 return 0;
}
