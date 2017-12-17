#include <bits/stdc++.h>

using namespace std;


/* Algoritma Prefix
*	1. Buat stack temp, dan hasil
*	2. lakukan perulangan,
		- Jika operand maka push ke stack hasil
		- jika ) maka pop stack temp hingga menemukan (
		- jika operator , jika yang sekarang <= sebelumnya pop isi dari temp hingga >

*/
int tingkat(char x){
	switch (x){
        case '(': return 1;
		case ')': return 2;
		case '+':
		case '-': return 3;
		case '*':
		case '/': return 4;
		case '^': return 5;

		default : return 10;

	}
}
int main(){
	string infix;
	int n;
	cin>>n;

while(n--){
	getline(cin,infix);
	if(infix.empty()) getline(cin,infix);
	//cout<<infix<<endl;
	stack <char> temp,hasil;
	temp.push(infix[0]);
    int panjang= infix.size();
    int i=1;
    while(i<panjang){
        int tingkatan=tingkat(infix[i]);
        if(tingkatan>5){ //operand
            hasil.push(infix[i]);
            cout<<infix[i];
        }else if(tingkatan==2){//untuk kurung tutup
            //Looping sampai menemukan (
            while(temp.top()!='('){
                    hasil.push(temp.top());
                    cout<<temp.top();
                    temp.pop();
                  }
            temp.pop(); //hapus kurung tutup
        }else{
            //selama tingkatan <= sebelumnya maka pop terus
            if(tingkatan!=1) //untuk yang bukan '('
                while((tingkatan<=tingkat(temp.top()))&&(!temp.empty())){
                    hasil.push(temp.top());
                    cout<<temp.top();
                    temp.pop();
                }


            temp.push(infix[i]);
            //cout<<tingkat(temp.top())<<endl;
        }

        i++;

    }
    cout<<endl;
}
	return 0;
}
