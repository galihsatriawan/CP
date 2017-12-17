#include <bits/stdc++.h>

using namespace std;
int gcd(int a,int b){
    if(b==0) return a;
    else {
        return gcd(b,(a%b));
    }
}
int main(){
    int t,n,i,j;
    int arr[100];
    cin>>t;
    while(t--){
        cin>>n;
        cin>>arr[1];
        int fpb=arr[1];
        for(i=2;i<=n;i++){
            cin>>arr[i];
            fpb=gcd(arr[i],fpb);
        }
        for(i=1;i<=n;i++){
            cout<<arr[i]/fpb<<" ";
        }
        cout<<endl;
    }

    return 0;
}
