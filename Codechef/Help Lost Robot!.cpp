#include <bits/stdc++.h>
using namespace std;

#define FORa(i,a,b) for(i=a;i<=b;i++)
#define FOR(i,n) for(i=1;i<=n;i++)
int main(){
    int t,x1,y1,x2,y2;

    cin>>t;
    while(t--){

        cin>>x1>>y1>>x2>>y2;
        //same x
        if(x1==x2){
            if(y2>y1) cout<<"up"<<endl;
            else cout<<"down"<<endl;
        }else if(y1==y2){ //same y
            if(x2>x1) cout<<"right"<<endl;
            else cout<<"left"<<endl;
        }else{
            cout<<"sad"<<endl;
        }
    }
return 0;
}
