#include<iostream>
using namespace std;
int main(){
int sum=0;
for(int i=1;i<=5;i++)
{
    sum+=i;
}
cout<<sum<<endl;
int n=sum;
int i=1,binary=0;
while(n!=0)
{ 
    int r=n%2;
    binary=binary+r*i;
    i*=10;
    n/=2;
}
cout<<binary;
return 0;
}
