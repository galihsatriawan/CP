#include<bits/stdc++.h>

using namespace std;

int main(){
	string matcher,str,stTemp,hasil[101];
	int n,i,j,pos,temp;
	bool exact=true,ada=false;
	cin>>matcher;
	temp=matcher.find("*");
	//jika masih ada kata setelah bintang
	if(temp+1<matcher.length()){
		stTemp=matcher.substr(temp+1);
		ada=true;
	}
		
	int index=0;
	cin>>n;
	for(i=1;i<=n;i++){
		cin>>str;
		pos=0;
		exact=true;
		//sebelum bintang
		while((exact)&&(pos<temp)){
			if(str[pos]!=matcher[pos]){
				exact=false;
			}else pos++;
		}
	
		
		//sesudah bintang cek apakah 
		// cari yang terakhirapakah masih
		if((ada)&&exact){
			int shift=temp;
			string simpanSementara;
			pos=str.substr(shift).find(stTemp);
			while(!(str.substr(shift).find(stTemp)>str.substr(shift).length())){
				pos=str.substr(shift).find(stTemp);
				simpanSementara=str.substr(shift);
				//cout<<pos<<"--"<<str.substr(shift)<<endl;
				shift++;
			}
			//cout<<pos<<"--"<<stTemp.length()<<endl;
			if(simpanSementara.length()!=stTemp.length()){
				exact=false;
				//cout<<"hore"<<endl;
			}
		}
		if(exact){
			index++;
			hasil[index]=str;
		}
	}
	for(i=1;i<=index;i++){
		cout<<hasil[i]<<endl;
	}
}
