#include <bits/stdc++.h>
using namespace std;

#define FORa(i,a,b) for(i=a;i<=b;i++)
#define FOR(i,n) for(i=1;i<=n;i++)
int main(){
    vector<int> ukuran;
    int t,n,a,adaDua;
    int data[1005],bil;

    cin>>t;
    while(t--){
        adaDua = 0;
        ukuran.clear();
        memset(data,0,sizeof data);
        cin>>n;
        while(n--){
            cin>>bil;
            data[bil]++;
            if(data[bil]%2==0){
                adaDua++;
                ukuran.push_back(bil);
            }
        }
        if(adaDua>=2){
                sort(ukuran.begin(),ukuran.end());
                cout<<ukuran.at(ukuran.size()-1)*ukuran.at(ukuran.size()-2)<<endl;
        }else{
            cout<<-1<<endl;
        }
    }
 return 0;
}
