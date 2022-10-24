#include<iostream>
using namespace std;

int main()
{

    int i,j,k,arr1[10][10],arr2[10][10],result[10][10],r,c;
    cout<<"Enter number of rows : ";
    cin>>r;
    cout<<"Enter number of columns : ";
    cin>>c;
    cout<<"Enter numbers of matrix a : ";
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cin>>arr1[i][j];
        }
    }
    
    cout<<"Enter numbers of matrix b : ";
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cin>>arr2[i][j];
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            result[i][j]=0;
            for(k=0;k<c;k++)
            {
             result[i][j]+=arr1[i][k]*arr2[k][j];
            }

        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            
            cout<<result[i][j];
            cout<<"  ";
        }
        cout<<endl;
    }

    return 0;
}