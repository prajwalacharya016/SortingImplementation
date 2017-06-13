#include<iostream>

using namespace std;
int main()
{
    int arr[10]={3,1,2,4,5,7,5,8,9,4};

    for (int i=0; i<10; i++)
    {
        int j=i;
        while(j>0)
        {
            if(arr[j-1]>arr[j])
            {
                int temp=arr[j-1];
                arr[j-1]=arr[j];
                arr[j]=temp;
            }
            j--;
        }
    }

    for (int i=0; i<10; i++)
        cout<<arr[i]<<" ";
}
