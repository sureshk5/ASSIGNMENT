#include<iostream>
using namespace std;
int main()
{
	int numOfSq,noOfAdj[20],count=0;
	cin>>numOfSq;
	int x1[100],x2[100],x3[100],x4[100],y1[100],y2[100],y3[100],y4[100];
	for(int i=0;i<numOfSq;i++)
	{
		cin>>x1[i]>>y1[i]>>x2[i]>>y2[i]>>x3[i]>>y3[i]>>x4[i]>>y4[i];
	}
	for(int j=0;j<numOfSq;j++)
	{
		for(int k=0;k<numOfSq;k++)
		{
			if(x1[j]==x2[k]&&x4[j]==x3[k]&&y1[j]==y2[k]&&y4[j]==y3[k])
			count++;
			if(x1[j]==x4[k]&&x2[j]==x3[k]&&y1[j]==y4[k]&&y2[j]==y3[k])
			count++;
			if(x2[j]==x1[k]&&x3[j]==x4[k]&&y2[j]==y1[k]&&y3[j]==y4[k])
                        count++;
			if(x4[j]==x1[k]&&x3[j]==x2[k]&&y4[j]==y1[k]&&y3[j]==y2[k])
                        count++;
		}
		noOfAdj[j]=count;
		count=0;
	}
	for(int l=1;l<=numOfSq;l++)
	{
		cout<<l<<" "<<noOfAdj[l-1]<<endl;
	}
}

