#include<iostream>

using namespace std;
void merge(int arr[], int l,int m, int r){
    int i=0, j=0, k=0;
    int L[m-l+1], R[r-m];
    for (int val= l ; val<=m; val++){
        L[i]=arr[val];
        i++;
    }

    for (int val= m+1 ; val<=r; val++){
        R[j]=arr[val];
        j++;
    }

    i=0,j=0,k=l;

    while(i<m-l+1 && j<r-m)
    {
        if(L[i]<=R[j]){
            arr[k]=L[i];
            i++;
        }
        else
        {
            arr[k]=R[j];
            j++;
        }
        k++;
    }

    while (i < m-l+1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < r-m)
    {
        arr[k] = R[j];
        j++;
        k++;
    }

}
void mergeSort(int arr[], int l, int r){
    if(l<r){
        int m=l+(r-l)/2;
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);

        merge(arr, l, m ,r);
    }

}
int main()
{
    int arr[10]={3,1,2,4,5,7,5,8,9,4};
    mergeSort(arr,0,9);

    for(int i=0; i<10; i++)
        cout<< arr[i]<<" ";
}
