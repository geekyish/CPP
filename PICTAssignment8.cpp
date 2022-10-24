#include<iostream>
using namespace std;
#include <iostream>
using namespace std;
void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void swap1(float* c, float* d)
{
    float temp1 = *c;
    *c = *d;
    *d = temp1;
}
void swap2(char* e, char* f)
{
    char temp2 = *e;
    *e = *f;
    *f = temp2;
}

void reverse(int array[], int array_size)
{
  
    int *pointer1 = array,
        *pointer2 = array + array_size - 1;
    while (pointer1 < pointer2) 
    {
        swap(pointer1, pointer2);
        pointer1++;
        pointer2--;
    }
}
void reverse(float array1[], int array1_size)
{
  
    float *pointer3 = array1,
          *pointer4 = array1 + array1_size - 1;
    while (pointer3 < pointer4) 
    {
        swap1(pointer3, pointer4);
        pointer3++;
        pointer4--;
    }
}
void reverse(char array2[], int array2_size)
{
  
    char *pointer5 = array2,
        *pointer6 = array2 + array2_size - 1;
    while (pointer5 < pointer6) 
    {
        swap2(pointer5, pointer6);
        pointer5++;
        pointer6--;
    }
}
  
void print(int* array, int array_size)
{
    int *length = array + array_size,
        *position = array;
    cout << "Array = ";
    for (position = array; position < length; position++)
        cout << *position << " "<<endl;
}
  
  void print(float* array1, int array1_size)
{
    float *length = array1 + array1_size,
        *position = array1;
    cout << "Array = ";
    for (position = array1; position < length; position++)
        cout << *position << " "<<endl;
}
  void print(char* array2, int array2_size)
{
    char *length = array2 + array2_size,
        *position = array2;
    cout << "Array = ";
    for (position = array2; position < length; position++)
        cout << *position << " "<<endl;
}
  
   int main()
{
  
    int i,array[50], array_size;
    cout<<"Enter size of integer array : ";
    cin>>array_size;
    cout<<"Enter elements of integer array: ";
    for(i=0;i<array_size;i++)
    {
       cin>>array[i];
    }
    cout << "Original ";
    print(array, array_size);
  
    cout << "Reverse ";
    reverse(array, array_size);
    print(array, array_size);

    float array1[50], array1_size;
    cout<<"Enter size of float array : ";
    cin>>array1_size;
    cout<<"Enter elements of float array: ";
    for(int j=0;j<array1_size;j++)
    {
       cin>>array1[j];
    }
    cout << "Original ";
    print(array1, array1_size);
  
    cout << "Reverse ";
    reverse(array1, array1_size);
    print(array1, array1_size);

    char k,array2[50]; 
    int array2_size;
    cout<<"Enter size of character array : ";
    cin>>array2_size;
    cout<<"Enter elements of character array: ";
    for(k=0;k<array2_size;k++)
    {
       cin>>array2[k];
    }
    cout << "Original ";
    print(array2, array2_size);
  
    cout << "Reverse ";
    reverse(array2, array2_size);
    print(array2, array2_size);

    return 0;
}