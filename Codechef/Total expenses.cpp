#include <bits/stdc++.h>

using namespace std;
#define sf scanf
#define pf printf
int main(){
 int qty,t;
 double prices;
 cin>>t;
 while(t--){
    cin>>prices>>qty;
    if(prices>1000) prices = (9*prices*1.0)/10;
    //cout<<prices*qty<<endl;
    prices *= qty;
    pf("%lf\n",prices);
 }
 return 0;
}
