#include<iostream>
using namespace std;
void cek_prev(int position_name,int position_cek,int deep ,int arr[1001][100] ,int &ranking)
{
	if(arr[position_name][deep]<arr[position_cek][deep])
	{
		ranking++;
	}
	else if (arr[position_name][deep]==arr[position_cek][deep])
	{
		cek_prev(position_name,position_cek,deep-1,arr,ranking);
	}
}
int main()
{
	int t,n,requirement_ranking,i,j,value[1001][100],ranking,position_name;
	string name[1001],destination_name;
	bool mark_case[1001];
	cin>>t;
	for (i=1;i<=t;i++)//for t case
	{
		cin>>n>>requirement_ranking;
		cin>>destination_name;
		for (j=1;j<=n;j++)//matriks 2D 
		{
			
			//making a different array for name and value
			cin>>name[j];//input name[]
				if (name[j]==destination_name)// record the position of destination_name
				{
					position_name=j;
				}
				
			for(int k=1;k<=3;k++)//for input the value
				{
					cin>>value[j][k];//j perform position of name's
				}
			
		}
		// for each case we must set the ranking=1
			ranking=1;
			//next , we must search where ranking of destination name
			for(int l=1;l<=n;l++)
			{
				if (l==position_name)// when meet with the same array we must through that
					continue;
				else
				{
					if (value[position_name][3]<value[l][3])//when value of name destination less than value[i][3], why must 3? because we must first with the last session and then retreat
					{
						ranking++;
					}
					else
					{
						if (value[position_name][3]==value[l][3])// the value is not different we must check the previous value
						{
							cek_prev(position_name,l,2,value,ranking);// here we also increase the value  of ranking	
						}
						
					}
				}
			}
			// after the process of checking finish , we must check the requirement_ranking 
		if (ranking<=requirement_ranking)
			{
				mark_case[i]=true;
			}
		else
			{
				mark_case[i]=false;
			}
	}
	
	//final step, if contain of mark_case if true we must print yes and otherwise
	for(i=1;i<=t;i++)
	{
		if (mark_case[i]==true)
		{
			cout<<"YA\n";
		}
		else
		{
			cout<<"TIDAK\n";
		}
	}
	return 0;
}
