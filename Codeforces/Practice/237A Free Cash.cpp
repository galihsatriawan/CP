#include <bits/stdc++.h>
#include <cmath>
#define FORa(i,a,ak) for(i=a;i<=ak;i++)
#define FOR(i,n) for(i=1;i<=n;i++)
#define pf printf
#define sf scanf
using namespace std;


int main(){
    int n;
   // pair <int,int>times;
    map < pair<int,int> ,int > col_time;
    set < pair<int,int> > cek;
    cin>>n;
    int h,m;
    int maxi=1;
    while(n--){
        cin>>h>>m;
        if (cek.count({h,m})==0){
            cek.insert({h,m});
            col_time.insert({{h,m},1});
        }else{

            //cout<<"Hello"<<endl;
            int temp=col_time.at({h,m});
            temp++;
            col_time.erase({h,m});
            col_time.insert({{h,m},temp});
            //col_time.find({h,m})
            //cout<<col_time.at({h,m})<<endl;
            maxi=max(maxi,col_time.at({h,m}));
        }

        //cout<<col_time.size()<<endl;
       //maxi=max(maxi,col_time.count({times.first,times.second}));
    }
    cout<<maxi<<endl;
	return 0;
}
