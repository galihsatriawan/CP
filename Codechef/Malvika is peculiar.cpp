#include <bits/stdc++.h>

using namespace std;

#define sf scanf
#define pf printf

int main(){
 int data[100];
 int t;
 cin>>t;
 string str;

 while(t--){
    memset(data,0,sizeof data);
    cin>>str;
    int i=str.size();
    while(i--){
        data[str[i]]++;
    }
    if(data['a']>data['b']) cout<<data['b']<<endl;
    else cout<<data['a']<<endl;
 }
 return 0;
}

