#include <bits/stdc++.h>

using namespace std;

int main(){
 int t,h,tensil;
 double carbon;
 bool hard,tens,carb;
 cin>>t;
 while(t--){
    cin>>h>>carbon>>tensil;
    hard = h>50 ? true:false;
    carb = carbon < 0.7 ? true:false;
    tens = tensil > 5600 ? true:false;
    if(hard&&carb&&tens)cout<<10<<endl;
    else if(hard&&carb) cout<<9<<endl;
    else if(carb&&tens) cout<<8<<endl;
    else if(hard&&tens) cout<<7<<endl;
    else if(hard||carb||tens) cout<<6<<endl;
    else cout<<5<<endl;
 }
 return 0;
}
