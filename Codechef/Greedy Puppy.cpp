#include <bits/stdc++.h>

using namespace std;

#define sf scanf
#define pf printf

int main(){
 int t,c,n;
 cin>>t;
 while(t--){
    cin>>c>>n;
    int remains = 0;
    while(remains<=c%n){
        remains = c% (n--);
    }
    cout<<remains<<endl;
    //cout<<c%n<<endl;
 }
 return 0;
}
