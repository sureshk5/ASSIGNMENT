#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	string s;
	int c=0,count=-1;
	getline(cin,s);
	int l=0;
	l=s.length();
	char ch;
	for(int i=0;i<l;i++)
	{
		if(s[i]=='1'|| s[i]=='0' )
		{
		
		ch=s.at(i);
		if(ch=='0')
		{
			c=0;
			continue;
		}
		if(ch=='1')
		{
			c++;
			if(count<c)
			{
				count=c;
			}
			continue;
		}
		}
		else{
			return 0;
		}
		
	    
    }
	cout<<count;
	
	
	
	
}
