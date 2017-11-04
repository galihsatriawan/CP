#include <bits/stdc++.h>
#include <map>
#define FORa(i,a,ak) for(i=a;i<=ak;i++)
#define FOR(i,n) for(i=1;i<=n;i++)
#define pf printf
#define sf scanf
using namespace std;


int main(){
	map <string,int> poly;
	int i,j,n;
    poly.insert({"Tetrahedron",4});
    poly.insert({"Cube",6});
    poly.insert({"Octahedron",8});
    poly.insert({"Dodecahedron",12});
    poly.insert({"Icosahedron",20});
    string pilihPoly;
    int total=0;
	sf("%d",&n);
    while(n--){
        cin>>pilihPoly;
        total+=poly.at(pilihPoly);
    }
    pf("%d\n",total);
	return 0;
}
