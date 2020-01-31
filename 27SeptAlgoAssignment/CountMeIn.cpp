#include<iostream>
#include<cstring>
#include<sstream>
using namespace std;
void countRepeatDigits(int arr[],int n)
{
	int i,count=0;
   for(int i=0;i<=9;i++)
   {
   	for(int j=0;j<n;j++){
   		if (arr[j]==i){
   			count++;
		   }
	   }
		if(count>0)
		{
	 		cout<<i<<" "<<count<<endl;
	   		count=0;
	  	}	 	
   }
    
}
int main(){
	string str;
	cin>>str;
	int N=str.length();
	int arr[N];
	for(int i=0;i<N;i++){
		arr[i]=str[i]-48;
	}	
	/*for(int i=0;i<N;i++){
		cout<<arr[i]<<endl;
	} */
	countRepeatDigits(arr,N);
}



