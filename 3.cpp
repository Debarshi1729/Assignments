#include<iostream>
using namespace std;
int Decimal(int a)
{   
   int r,sum=0,i=1;
	while(a!=0)
	{
		r=a%10;
		sum+=r*i;
		i*=2;
		a/=10;
	}
	return sum;
}
int main()
{
	int m,n;
	cout<<"Enter two binary numbers:";
	cin>>m>>n;
	int d1=Decimal(m);
	int d2=Decimal(n);
	d1>d2?cout<<d1:cout<<d2;
	return 0;
}
