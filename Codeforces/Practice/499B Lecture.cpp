#include <bits/stdc++.h>
#include <cmath>
#define FORa(i,a,ak) for(i=a;i<=ak;i++)
#define FOR(i,n) for(i=1;i<=n;i++)
#define pf printf
#define sf scanf
using namespace std;


int main(){
    map <string,pair<string,int> > word;
    int n,m,i;
    string a,b;
    sf("%d %d",&n,&m);
    while(m--){
        cin>>a>>b;
        word.insert({a,{b,1}});
        word.insert({b,{a,2}});
    }
    int tempn=n;

    i=0;
    string lecture[n+5];
    while(tempn--){
        cin>>lecture[++i];
    }
    string temp;
    FOR(i,n){
        temp=lecture[i];
        if(temp.size()<word.at(lecture[i]).first.size()){
            if(i==n) cout<<temp<<endl;
            else cout<<temp<<" ";
        }else if(temp.size()>word.at(lecture[i]).first.size()){
            if(i==n) cout<<word.at(lecture[i]).first<<endl;
            else cout<<word.at(lecture[i]).first<<" ";
        }else{
            if(word.at(lecture[i]).second==2){
                if(i==n) cout<<word.at(lecture[i]).first<<endl;
                else cout<<word.at(lecture[i]).first<<" ";
            }else{
                if(i==n) cout<<temp<<endl;
                else cout<<temp<<" ";
            }
        }
    }
	return 0;
}
