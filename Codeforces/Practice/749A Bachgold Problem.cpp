#include <bits/stdc++.h>
#include <cmath>
#define FORa(i,a,ak) for(i=a;i<=ak;i++)
#define FOR(i,n) for(i=1;i<=n;i++)
#define pf printf
#define sf scanf
using namespace std;

void erathostenes(bool prima[],int n){
    int i,j;
    for(i=2;i<=n;i++){
        if(prima[i]){
            j=2;
            while(i*j<=n){
                prima[i*j]=false;
                j++;
            }
        }
    }
}
int main(){
    int n;
    cin>>n;

    bool prima[n+5];
    memset(prima,true,sizeof prima);
    erathostenes(prima,n);
    int i=2,index=0;
    int kumpulan[n];
    while(n>0){
        while((prima[i])&&((n-i>=i)||(n-i==0))){
            kumpulan[++index]=i;
            n-=i;
        }
        i++;
    }
    cout<<index<<endl;
    for(i=1;i<=index;i++){
        if(i==index) cout<<kumpulan[i]<<endl;
        else cout<<kumpulan[i]<<" ";
    }
	return 0;
}
