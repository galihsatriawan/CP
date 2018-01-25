#include <bits/stdc++.h>

using namespace std;

#define sf scanf
#define pf printf
const int N = 1e5+5;
long long sn[N];
void generate_sn(){
    int i;
    sn[1]=1;
    for(i=2;i<=N;i++){
        sn[i]=sn[i-1]+i;
    }
}
int cari_pos(int data,int left,int right){
    bool ketemu = false;
    int mid = (left+right)/2;
    while(!ketemu){
        if((data>sn[mid] && data >= sn[mid+1])){
           //ke kanan
           left = mid+1;
           mid = (right+left)/2;
        }else if(data < sn[mid]){
           //ke kiri
           right = mid-1;
           mid = (right+left)/2;
        }else{
            ketemu =true;
            return mid;
        }
    }
}
int main(){
 int t;
 long long sn_temp;
 cin>>t;
 generate_sn();
 while(t--){
    cin>>sn_temp;
    cout<<cari_pos(sn_temp,1,N-1)<<endl;
 }
 return 0;
}
