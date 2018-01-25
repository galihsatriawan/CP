#include <bits/stdc++.h>

using namespace std;

#define sf scanf
#define pf printf

int main(){
 int i,t,n,data;
 cin>>t;
 while(t--){
    cin>>n;
    set<int> ada;
    list<int> kump;
    while(n--){
        cin>>data;
        if(ada.count(data)!=0) {
                kump.remove(data);
                ada.erase(data);
        }else{
            kump.push_back(data);
            ada.insert(data);
        }
    }
    cout<<kump.front()<<endl;
 }


 return 0;
}
