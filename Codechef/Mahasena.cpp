#include <bits/stdc++.h>

using namespace std;

int main(){
 int temp,even,n,t,a;
 //cin>>t;

    cin>>n;
    even =0;
    temp= n;
    while(temp--){
        cin>>a;
        if(a%2==0) even++;
    }
    if(even>(n-even)) cout<<"READY FOR BATTLE"<<endl;
    else cout<<"NOT READY"<<endl;


 return 0;
}
