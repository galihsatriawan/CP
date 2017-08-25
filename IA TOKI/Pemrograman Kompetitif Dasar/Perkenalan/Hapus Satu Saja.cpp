#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	int ke_a,ke_b,wrong,jml_a,jml_b;
	char a[1001],b[1001];
	cin>>a>>b;
	wrong=0;
	ke_a=0;ke_b=0;
	jml_a=strlen(a)-1;
	jml_b=strlen(b)-1;
	if(jml_a-1==jml_b)
	{
		while(ke_b<=jml_b-1)
		{
			if(a[ke_a]!=b[ke_b])
			{
				wrong++;
				ke_a++;
			}
			else
			{
				ke_a++;
				ke_b++;
			}
		}
		if(wrong<=1)
		{
			cout<<"Tentu saja bisa!\n";
		}
		else
		{
			cout<<"Wah, tidak bisa :(\n";
		}
	}
	else
	{
		cout<<"Wah, tidak bisa :(\n";
	}
	return 0;
}
