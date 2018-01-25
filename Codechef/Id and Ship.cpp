#include <bits/stdc++.h>

using namespace std;

int main(){
 int t,i;
 char id;
 map<char,string> ships;
 ships.insert({'B',"BattleShip"});
 ships.insert({'C',"Cruiser"});
 ships.insert({'D',"Destroyer"});
 ships.insert({'F',"Frigate"});
 cin>>t;
 while(t--){
    cin>>id;
    //cout<<(int)id<<endl;
    if((int)id>96) id = (int)id - 32;
    cout<<ships.at(id)<<endl;
 }
 return 0;
}
