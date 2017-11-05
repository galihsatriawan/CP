#include <bits/stdc++.h>

using namespace std;
const int N=1e3+5;

#define sf scanf
#define pf printf
#define FOR(i,n) for(i=1;i<=n;i++)
#define FORa(i,ai,aj) for(i=ai;i<=aj;i++)

int main(){
    pair<int,int> hasil[N];
    int n,i,j;
    cin>>n;
    bool hasCh[n+1];
    memset(hasCh,false,sizeof hasCh);
    int a[n+1];
    int jumlah=0;
    FOR(i,n){
        cin>>a[i];
        jumlah+=a[i];
    }
    int index=0;
    int rata=jumlah/(n/2);
    FOR(i,n-1){
        if(!hasCh[i]){
            hasCh[i]=true;
            FORa(j,i+1,n){
                if((!hasCh[j])&&(a[i]+a[j]==rata)){
                    hasil[++index]=make_pair(i,j);
                    hasCh[j]=true;
                    break;
                }
            }
        }

    }
    FOR(i,index){
        cout<<hasil[i].first<<" "<<hasil[i].second<<endl;
    }
	return 0;
}
