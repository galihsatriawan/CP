#include <bits/stdc++.h>

using namespace std;

int main(){
	long n,i;
	int j,bil,baju[100001];
	double kualitas[100001];
	memset(baju,0,sizeof baju);
	cin>>n;
	for(i=1;i<=n;i++){
		cin>>bil;
		baju[bil]++;	
	}
	//counting sort
	i=0;
		for(j=1;j<=100;j++){
			while(baju[j]>0){
				kualitas[++i]=j;
				baju[j]--;		
			}
		}
	
	if(n%2==0){
		printf("%.1f\n",(kualitas[n/2]+kualitas[n/2+1])/2);
	}else{
		printf("%.1f\n",kualitas[n/2+1]);
	}
	return 0;
}
