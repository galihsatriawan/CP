#include <bits/stdc++.h>

using namespace std;
const int N=1e3+5;

#define sf scanf
#define pf printf
#define FOR(i,n) for(i=1;i<=n;i++)
#define FORa(i,ai,aj) for(i=ai;i<=aj;i++)

int main(){
    int n,i,j,n_b[N];
    string japane;
    sf("%d",&n);
    cin>>japane;
    int panjang=japane.size()-1;
    int count_o=0;
    while(japane.find("B")<=panjang){
        int posisi=japane.find("B");
        panjang=japane.size()-1;
        count_o++;
        n_b[count_o]=1;
        while(japane[posisi]==japane[posisi+1]) {
                posisi++;
                n_b[count_o]++;
        }
        japane=japane.substr(posisi+1,panjang-posisi+1);
    }
    cout<<count_o<<endl;
    FOR(i,count_o){
        if(i==count_o) cout<<n_b[i]<<endl;
        else cout<<n_b[i]<<" ";
    }
	return 0;
}
