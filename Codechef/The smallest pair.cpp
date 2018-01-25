#include <bits/stdc++.h>

using namespace std;

int main(){
 int t,i,j,n,a;
 cin>>t;
 while(t--){
    vector<int> data;
    cin>>n;
    while(n--){
        cin>>a;
        data.push_back(a);
    }
    sort(data.begin(),data.end());
    cout<<data.at(0)+data.at(1)<<endl;
 }

 return 0;
}
