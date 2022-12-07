#include<stdio.h>

//declaration
void selectionsort(int a[20],int n);
void display(int a[20],int n);

//main
void main()
{
    int a[20],n;
    printf("Enter the size of array:=");
    scanf("%d",&n);
    printf("Enter %d numbers:=",n);
   for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    selectionsort(a,n);
    display(a,n);
}

//defination or function
void selectionsort(int a[20],int n)
{
    int i, pos, j ,large;
    for(i=n-1;i>0;i--)
    {
        large = a[0];
        pos = 0;
        for(j=1;j<=i;j++)
        {
            if(a[i]<large)
            {
                large = a[j];
                pos = j;
            }
        }
        a[pos]=a[i];
        a[i]= large;
    }
}
void display(int a[20],int n)
{
    int i;
    printf("\nYour Array:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}
