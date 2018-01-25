#include <bits/stdc++.h>

using namespace std;

int main(){
 int t,i,j,n;
 bool no,in,y;
 cin>>t;
 string gestures;
 while(t--){
    no= false;
    in = false;
    y= false;
    cin>>n;
    cin>>gestures;
    for(i=0;i<n;i++){
        switch (gestures[i]){
            case 'Y' :{
                y = true;
                break;
            }
            case 'N' :{
                no =true;
                break;
            }
            case 'I' :{
                in = true;
                break;
            }
        }

    }
    if(y) cout<<"NOT INDIAN"<<endl;
        else if(in) cout<<"INDIAN"<<endl;
        else cout<<"NOT SURE"<<endl;
 }
 return 0;
}
