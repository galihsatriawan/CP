#include <bits/stdc++.h>

using namespace std;

int main(){
 int t,a,b,c,i;
 cin>>t;
 while(t--){
    bool valid = true;
    cin>>a>>b>>c;
    if((a>0)&&(b>0)&&(c>0)){
        if(a+b+c!=180) valid = false;
    }else{
        valid =false;
    }
    if(valid) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
 }
 return 0;
}
