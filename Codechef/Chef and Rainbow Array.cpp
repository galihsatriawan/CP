#include <bits/stdc++.h>

using namespace std;
#define FOR(i,n) for(i=1;i<=n;i++)
#define FORa(i,a,n) for(i=a;i<=n;i++)

int main(){
    int i,n,t,bil;
    list<int> a;
    cin>> t;
    while(t--){
        bool ketemu = false;
        cin >> n;
        a.clear();
        FOR(i,n){
            cin >> bil;
            a.push_back(bil);
            if (bil>= 8) {
                cout << "no" <<endl;
                ketemu = true;
            }
        }
        if(!ketemu){
            //cout<< a.front() <<"-"<<a.back();/*
            while((!a.empty())&&(a.front()==a.back())){
                if(a.size()==1) a.pop_back();
                else{
                    a.pop_back();
                    a.pop_front();
                    }
            }
            if(a.empty()) cout << "yes" <<endl;
            else cout <<"no"<<endl;
        }
    }
    return 0;
}
