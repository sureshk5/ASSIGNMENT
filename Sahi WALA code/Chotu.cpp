#include<iostream>
using namespace std;

int sizestring(string word)
{
	int sizeWord = word.length();
	return sizeWord;
}

int main()
{
int count = 0,size = 0,maxsize=100;
string binary;
cout<<"ENTER THE BINARY NUMBER=";
cin>>binary;
size=sizestring(binary);
cout<<"THE LENGTH OF THE STRING "<<binary<<" IS="<<size;
char r[size];

	for(int i=0;i<size;i++)
	{
	r[i]=binary.at(i);
	//r=binary.substr(binary.length()-i);
	//cout<<endl<<r;
	if(r[i]=='0')	
		{
			count=0;
			continue;	
		}
	if(r[i]=='1')
		{
			count++;
		 if(r[i+1]=='1')
			{
				continue;
			}
		if(count<maxsize)
			{
				maxsize=count;
			}
		}
	}
	cout<<"\nTHE LOWEST COUNT IS="<<count;
	return 0;
}
