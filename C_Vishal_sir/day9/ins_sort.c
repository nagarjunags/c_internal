#include<stdio.h>
void insertionSort(int arr[],int n);
int main()
{
    int n;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    insertionSort(arr,n);
    printf("\nelements after sort: ");
    for(int i=0;i<n;i++)
        printf("%d\t",arr[i]);    
}


void insertionSort(int arr[],int n)
{
    int key,j;
    for(int i=1;i<n;i++)
    {
        key=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j-=1;
        }
        arr[j+1]=key;
    }
}