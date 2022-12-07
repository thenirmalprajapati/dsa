#include<stdio.h>

//declaration
void quicksort(int a[20],int p,int r);
int partition(int a[20],int p,int r);
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
    
    quicksort(a,0,n-1);
    display(a,n);
}
void quicksort(int a[20],int p,int r)
{
    int q;
    if(p<r)
    {
        q = partition(a,p,r);
        quicksort(a,p,q);
        quicksort(a,q+1,r);
    }
}
int partition(int a[20],int p, int r)
{
    int x,i,j,temp;
    x = a[p];
    i = p - 1;
    j = r + 1;
    while (1)
    {
        do{
            j=j-1;
        }while(a[j] < x);

        do{
            i=i+1;
        }while(a[i]>x);

        if(i<j)
        {
            temp = a[j];
            a[j] = a[i];
            a[i] = temp;
        }
        else
        {
            return (j);
        }
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
