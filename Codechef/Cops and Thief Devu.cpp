#include <bits/stdc++.h>

using namespace std;

#define sf scanf
#define pf printf

int main(){
 int t,m,x,y,i,j,bil;
 bool cops[101];
 cin>>t;
 while(t--){
    memset(cops,false,sizeof cops);
    int st,en,safe=0;
    cin>>m>>x>>y;
    while(m--){
        cin>>bil;
        st = bil-x*y;
        en = bil+x*y;
        st = st<=1 ? 1:st;
        en = en>=100? 100 : en;
        for(i=st;i<=en;i++) cops[i]=true;
    }
    for(i=1;i<=100;i++) {
        if(!cops[i]) safe++;
    }
    cout<<safe<<endl;
 }
 return 0;
}
