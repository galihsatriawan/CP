#include <bits/stdc++.h>

using namespace std;
double distance_ceil(double x1,double y1,double x2,double y2){
  double hasil = sqrt(pow(x1-x2,2)+pow(y1-y2,2));
  return ceil(hasil);
}
int main(){
 double r,x[4],y[4];
 int n,i,j;
 cin>>n;
 while(n--){
    cin>>r;
    for(i=1;i<=3;i++){
        cin>>x[i]>>y[i];
    }
    //cari
    bool can = false;
    for(i=1;i<=3;i++){
        int benar =0;
        for(j=1;j<=3;j++){
            if(i!=j){
                if((distance_ceil(x[i],y[i],x[j],y[j])<=r)){
                    benar++;
                }
            }
        }
        if(benar==2) can = true;
    }
    if(can) cout<<"yes"<<endl;
    else cout<<"no"<<endl;

 }
 return 0;
}
