#include<stdio.h>
int maxsum(int arr[], int n)
{
int init=arr[0];
int finl=0;
int finl_new;
int i;
for(i=0;i<n;i++)
{
finl_new=((init>finl)?init:finl);
init=finl+arr[i];
finl=finl_new;
}
return((init>finl)?init:finl);
}
int main()
{
int arr[25],size;
int i;
clrscr();
printf("Enter the size of array\n");
scanf("%d",&size);
printf("Enter the numbers\n");
for(i=0;i<size;i++)
{
scanf(%d",&arr[i]);
}
printf("The maximum sum of the subsequence is %d",maxsum(arr,size);
getch();
return 0;
}
