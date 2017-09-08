#include <iostream>
using namespace std;
int main(){
	unsigned long a;
	cin>>a;
	switch(a){
		case 1 ... 9:{
			cout<<"satuan"<<endl;
			break;
		}
		case 10 ... 99:{
			cout<<"puluhan"<<endl;
			break;
		}
		case 100 ... 999:{
			cout<<"ratusan"<<endl;
			break;
		}
		case 1000 ... 9999:{
			cout<<"ribuan"<<endl;
			break;
		}
		case 10000 ... 99999:{
			cout<<"puluhribuan"<<endl;
			break;
		}
	}
	return 0;
}
