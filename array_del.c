//  wap to delete one element in the one dime. array.
#include<stdio.h>
#include<conio.h>
void main()
{
  int a[10];
  int i,j,s,n;
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
  printf("\nEnter a possition of the delete number:");
  scanf("%d",&s);
  for(i=s;i<=n-1;i++)
     {
       a[i]=a[i+1];
     }
   n--;
  for(i=1;i<=n;i++)
   {
    printf("\na[%d]:%d",i,a[i]);
  }
  getch();
}
