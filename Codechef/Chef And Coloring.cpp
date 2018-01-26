#include <bits/stdc++.h>
using namespace std;

#define FORa(i,a,b) for(i=a;i<=b;i++)
#define FOR(i,n) for(i=1;i<=n;i++)
int main(){
 int n,t,i,j,r,g,b,temp,maxi,simp[3];
 char str[300005];
  cin>>t;
  while(t--){
     cin>>n;
     temp = n;
     cin>>str;
      r = g = b = 0;
      while(n--){
         switch(str[n]){
           case 'R' :{
                    r++;
                break;
            }
            case 'G' :{
                    g++;
                break;
            }
            case 'B' :{
                    b++;
                break;
            }
         }
       }
      simp[0] = r;
      simp[1] = g;
      simp[2] = b;
      maxi = r;
      FORa(i,1,2){
        maxi = maxi<simp[i] ? simp[i]:maxi;
      }
      cout<<temp-maxi<<endl;

   }

return 0;
}
