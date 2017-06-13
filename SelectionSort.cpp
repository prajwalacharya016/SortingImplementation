#include<iostream>

using namespace std;
int main()
{
    int arr[10]={3,1,2,4,5,7,5,8,9,4};

    for (int i=0; i<10; i++)
    {
        int min = arr[i];
        int index=i;
        for(int j=i; j<10; j++)
        {
            if (arr[j]<min){
                min=arr[j];
                index=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[index];
        arr[index]=temp;
    }

    for (int i=0; i<10; i++)
        cout<<arr[i]<<" ";
}
