#include <bits/stdc++.h>

using namespace std;

#define sf scanf
#define pf printf

int main(){
 int t,n,data;
 cin>>t;
 while(t--){
    cin>>n;
    int N =n;
    int mini=1e5;
    while(n--){
        cin>>data;
        mini  = data>mini ? mini : data;
    }
    cout<<mini*(N-1)<<endl;
 }
 return 0;
}
