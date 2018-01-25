#include <bits/stdc++.h>

using namespace std;
bool palindrom(int n){
    int temp = n;
    int hasil = 0;
    while(temp>0){
        hasil = hasil*10 + (temp%10);
        temp/=10;
    }
    if (hasil==n) return true;
    else return false;
}
int main(){
 int n,i,t;
 cin>>t;
 while(t--){
    cin>>n;
    if(palindrom(n)) cout<<"wins"<<endl;
    else cout<<"losses"<<endl;
 }
 return 0;
}
