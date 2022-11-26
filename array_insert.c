// wap to insert one element in the one dime. array.
#include<stdio.h>
#include<conio.h>
void main()
{
  int a[10];
  int i,j,k,n,no;
  clrscr();
  printf("How many number are input:");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
     printf("a[%d]:",i);
     scanf("%d",&a[i]);
  }
  printf("\nThe Number Are Inputed...");
  for(i=1;i<=n;i++)
  {
     printf("\na[%d]:%d",i,a[i]);
  }
  j=n;
  printf("\nEnter a possition of the number:");
  scanf("%d",&k);
  printf("\nEnter a value of the number:");
  scanf("%d",&no);
  while(j>=k)
  {
     a[j+1]=a[j];
     j--;
  }
  a[k]=no;
  n++;
  for(i=1;i<=n;i++)
  {
    printf("\na[%d]:%d",i,a[i]);
  }
  getch();
}
