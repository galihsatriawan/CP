#include <bits/stdc++.h>

using namespace std;

int main(){
 int t,n,f,bil,urutan;
 bool ada,list_n[100000];
 cin>>t;
 while(t--){
    urutan = 0;
    ada = true;
    memset(list_n,false,sizeof list_n);
    cin>>n;
    while(n--){
        cin>>bil;
        list_n[bil]=true;
    }
    cin>>f;
    while(f--){
        cin>>bil;
        if(list_n[bil]) {

        }else{
            ada = false;
        }
    }
    if(ada) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
 }
 return 0;
}
