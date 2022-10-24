#include<iostream>
using namespace std;
int main()
{
    int i,sum = 0,n;
    int arr[5] = {1, 2, 3, 4, 5};
    int *parr = arr;
    for(i=0;i<5;i++) 
    {
    sum = sum+ (*parr);
    parr++;
    }
    cout<<"The sum of integers is : "<<sum<<endl;
    cout<<"Enter the element to be searched : "<<endl;
    cin>>n;
    parr=arr;
    for(i=0;i<5;i++) 
    {
    if (*(parr+i)==n)
        {
            cout<<"The element is found at location "<<i++;
            break;
        }
   
    
    }

    return 0;
}