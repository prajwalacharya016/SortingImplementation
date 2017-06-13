#include<iostream>

using namespace std;

int main(){

    int arr[10]={3,1,2,4,5,7,5,8,9,4};

    for (int i=0; i<10; i++)
    {
        for (int j=i; j<9; j++)
        {
            if (arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    for(int i=0; i<10; i++)
        cout<< arr[i]<<" ";
}

