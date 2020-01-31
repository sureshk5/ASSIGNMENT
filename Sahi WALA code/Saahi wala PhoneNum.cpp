#include<iostream>
#include<string>
using namespace std;

int main()
{
	string sentence;
	int count=0;
	//cout<<"ENTER THE SENTENCE = ";
	getline(cin,sentence);
	char a;	
	int len=sentence.length();
	
	for(int i=0;i<len;i++)
	{
		a=sentence.at(i);
		cout<<endl<<a;
		count=0;
		if(a=='a'||a=='d'||a=='g'||a=='j'||a=='m'||a=='p'||a=='t'||a=='w')
		{
			count++;
			//cout<<count;
		}
		 if(a=='b'||a=='e'||a=='h'||a=='k'||a=='n'||a=='q'||a=='u'||a=='x')
		{
			count=count+2;
			//cout<<count;
		}
		if(a=='c'||a=='f'||a=='i'||a=='l'||a=='o'||a=='r'||a=='v'||a=='y')
		{
			count=count+3;
			//cout<<count;
		}
		 if(a=='s'||a=='z')
		{
			count=count+4;
			//cout<<count;
		}
		if(a==' ')
		{
			count++;
			//cout<<"SPACES="<<count;
		}
		
		cout<<count;
		
	}
	
	
}
