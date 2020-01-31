#include<iostream>
#include<string>
using namespace std;

int digitsquare(int n)
{
    int s = 0;
    while (n!=0) {
        int d = n%10;
        s=s+d*d;
        n=n/10;
    }
    return s;
}
int digitCount(int n)
{
	int count=0;
	while(n!=0){
	n=n/10;
	count++;

}
return count;
}
int happyNumber(int n1,int n2)
{
for(int i=n1;i<=n2;i++){
int num=i,digit,sq,count=1;
bool flag=true;
while(flag){
count++;

sq=digitsquare(num);
num=sq;
digit=digitCount(sq);
if(digit==1){
flag=false;
if(sq==1){
 cout<<i<<"  "<<count<<endl;
}
}
else flag=true;
}}
return 0;
}

int main(){
	int num1,num2;
	cout<<"enter two number"<<endl;
	cin>>num1>>num2;
	happyNumber(num1,num2);
return 0;
}

