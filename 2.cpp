#include<iostream>
using namespace std;
int binary(int n)
{
	int i=1;
	int sum=0;
	int r;
	for(;n!=0;n/=2,i*=10)
	{
		r=n%2;
		sum+=r*i;
	}
	return sum;
}
int main()
{
	int n,count;
	cin>>n;
	int r;
	int bin=binary(n);
	while(bin!=0)
	{
		r=bin%10;
		if(r==0)
		 count++;
		bin/=10;
	}
	cout<<count;
	return 0;
}
