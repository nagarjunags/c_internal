#include<stdio.h>
int top =-1;
void push(int *p,int size);
int main(void)
{
    int n,c;
  
    printf("enter the size of the stack:");
    scanf("%d",&n);
    int arr[n];

    printf("\n1.push\n2.pop\n3.peek");
    
    while(1)
    {
      scanf("%d",&c);
      switch (c)
      {
      case 1:
        push(arr,n);
        break;
      case 2:
        //pop(arr,n);
        break;
      case 3:
        //peek(arr);
        break;  
      default:
        printf("Invalid input");
        goto out;
        break;
      }
    }
 out:   
    return 0;
}


void push(int *p,int size)
{
  if(top == size-1)
  {
    printf("stack overflow!");
    return;
  }
  else
  {
    int new;
    printf("Enter the new element:");
    scanf("%d",&new);
    top++;
    p[top]=new;
  }  
}