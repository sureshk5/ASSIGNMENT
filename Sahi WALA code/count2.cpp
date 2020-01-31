#include<iostream>
using namespace std;
int main()
{
 int n,last;
cout<<"enter the number";
cin>>n;

	int arr[10];
	for(int i=0;i<=10;i++)
	{
		arr[i]=0;
	}
	//for(int i=0;i<=10;i++)
	//{
	//	<arr[i]=0;
	//}
	 while(n!=0)
	 {
	 	last =n%10;
		n = n/10;
	 	arr[last]++;
	 }
	 for(int i=0;i<10;i++)
	 {
	 	if(arr[i]!=0)
	 	{
	 		cout<<i<<"-"<<arr[i]<<"\n";
		 }
	 }
	 
}
