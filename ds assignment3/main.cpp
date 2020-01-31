#include<iostream>
using namespace std;
int main(){
	int N;
	int a[]={ };
	cout<<"enter the number\n";
	for(int i=0;i<N;i++){
		cin>>a[i];
	}
int count=0;
for(int j=0;j<N;j++){
	if (a[j]==a[i]){
		count++;
	}
	cout<<a[j]<<count<<endl;
}
return 0;
}
