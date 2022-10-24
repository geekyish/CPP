#include<iostream>
using namespace std;
int main() 
{
	int n,i,sum=0;
	int arr[10];
	for(i=0;i<n;i++)
	{
		cin>>arr[i]; 
	}  
	for(i=0;i<n;i++)
	{
	sum+=arr[i];
	}
cout<<sum;
return 0;
}