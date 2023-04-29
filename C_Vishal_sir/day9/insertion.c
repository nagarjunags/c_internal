#include<stdio.h>
void main()
{
    int size,i;
    printf("Enter the size of the array:");
    scanf("%d",&size);
    int array[size];
    for(i=0;i<size;i++)
        scanf("%d",&array[i]);
    int  key, j;    
   for (i = 1; i < size; i++) 
    {
        key = array[i]; 
        j = i - 1; 

                                            /* Here the elements in b/w array[0 to i-1] 
                                            which are greater than key are moved ahead 
                                            by 1 position each*/ 
        while (j >= 0 && array[j] > key) 
        {  
            array[j + 1] = array[j];  
            j = j - 1;  
        }
                                            // placing element at its correct position
        array[j + 1] = key;  
    }
    for( i=0;i<size;i++)
        printf("  %d  ",array[i]);    
}                                                                                                                                                                                                                                            
