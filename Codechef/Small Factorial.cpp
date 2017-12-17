#include <bits/stdc++.h>

using namespace std;

int main(){
    int t,n,i,j,k,ph,p2,p1;
    cin>>t;
    while(t--){
        cin>>n;
        int hasil[50],k1[50],k2[50];
        memset(hasil,0,sizeof(hasil));
        memset(k1,0,sizeof(k1));
        memset(k2,0,sizeof(k2));
        //k1[1]=1;
        hasil[1]=1;
        ph=1;
        //proses
        for(i=2;i<=n;i++){

            //perkalian dengan semua i
            //pindah hasil ke k1
            for(j=1;j<=ph;j++){
                k1[j]=hasil[j];
            }
            p1=ph;
            memset(hasil,0,sizeof(hasil));

            //pindah i ke k2
            p2=0;
            int tempI=i;
            while(tempI>0){
                k2[++p2]=tempI%10;
                tempI/=10;
            }

            //kalikan dengan k1
            int posAwal=1;
            int pos;
            for(j=1;j<=p1;j++){
                pos=posAwal;
                for(k=1;k<=p2;k++){
                    int simp,hkali;
                    hkali=k1[j]*k2[k];
                    hkali+=hasil[pos];
                    hasil[pos]=hkali%10;
                    hasil[pos+1]+=hkali/10;
                    ph=pos;
                    pos++;
                }
                //jika hasil[pos] ada maka itu titik akhir
                if(hasil[pos]>0) ph=pos;
                posAwal++;
            }
        }
        //cetak
        for(i=ph;i>=1;i--){
            cout<<hasil[i];
        }
        cout<<endl;

    }

	return 0;
}
