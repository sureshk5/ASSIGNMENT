#include<iostream>
#include<cstring>
#include<bits/stdc++.h>
using namespace std;
void checkangaram(int N)
{
	char **c;
	c=new char*[N];
string *t;
	t=new string[N];
	string *num;
	num=new string[N];
	string *s;
	s=new string[N];
	char temp;
	for(int i=0;i<N;i++)
	{
		c[i] = new char[20];      
	}
	for(int i=0;i<N;i++)
	{
		cin>>c[i];           
	}
	for(int i=0;i<N;i++)
	{
		s[i]=c[i];          
	}
	
	for(int k=0;k<N;k++)
	{
		int len=strlen(c[k]);
	for(int i=0;i<len;i++)            
	{	
		for(int j=0;j<len-i-1;j++)
		{
			if(c[k][j]>c[k][j+1])
			{
				temp=c[k][j];
				c[k][j]=c[k][j+1];
				c[k][j+1]=temp;
			}
		}
	}
} 
    for(int i=0;i<N;i++)      
	{
		for(int j=i+1;j<N;j++)
		{
	    if(strcmp(c[i],c[j])==0)
	    {
		num[i]=s[i];
	    num[j]=s[j];
		break;
     	}
	}
} 
 int k=0;
for(int i=0;i<N;i++)
{     
	if(num[i]!=""){
		t[k]=num[i];
	
	k++;	
	}
	
 } 
 for(int i=0;i<N;i++) {
 	cout<<t[i]<<endl;
 }
}
int main()
{
	int n=0;
	cin>>n;
	checkangaram(n);	
}
