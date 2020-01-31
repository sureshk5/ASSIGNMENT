#include<iostream>
#include<cstring>
#include<sstream>
using namespace std;
void minOne(int arr[], int n)
{
	int i,count=0,min=2147483647,temp=0;
	for(int i=0;i<n;i=i)
	{
		for(int j=i;j<n;j++)
		{
			if(arr[j]==1)
			{
				count++;
			}
			i++;
			if(arr[j]==0)
			{
				break;
			}
		}
		int m;
		temp=count;
		if(temp<min&&temp!=0)
		{
			min=count;
		}
		count=0;
		}
		if(temp==0)
		cout<<-1;
		else
		cout<<min;
	}
	int main()
	{
		string str;
		cin>>str;
		int N=str.length();
		int arr[N];
		for(int i=0;i<N;i++)
		{
			arr[i]=str[i]-48;
		}
	    minOne(arr,N);
	}
