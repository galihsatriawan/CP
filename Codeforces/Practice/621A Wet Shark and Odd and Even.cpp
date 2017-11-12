#include <bits/stdc++.h>
#include <cmath>
#define FORa(i,a,ak) for(i=a;i<=ak;i++)
#define FOR(i,n) for(i=1;i<=n;i++)
#define pf printf
#define sf scanf
using namespace std;


int main(){
    int n;
    cin>>n;
    vector<long long> ganjil;
    int b_ganjil=0;
    long long total_ganjil=0,bil,total=0,i=0;
    while(n--){
        cin>>bil;
        if(bil%2==0) total+=bil;
        else {
                ganjil.push_back(bil);
                i++;
                total_ganjil+=bil;
        }
    }
    if(i!=0){
        if(i%2==0) total+=total_ganjil;
        else {
            sort(ganjil.begin(),ganjil.end());
            total+=(total_ganjil-ganjil[0]);
        }
    }
    cout<<total<<endl;
    //cout<<ganjil[0]<<ganjil[1]<<endl;
    return 0;
}
