// WAP TO TRAVERSE THROUGH ONE DIMES ARRAY.PRINT AVG OF ALL NUMBER.
#include<stdio.h>
#include<conio.h>
void main()
 {
   int i,n,*p1,*pv,*p,sum=0;
   float avg=0;
   p=pv;
   p1=p;
   clrscr();
   printf("enter a value:");
   scanf("%d",&n);
     for(i=0;i<n;i++)
      {
	scanf("%d",pv);
	pv++;
      }
       printf("printed value:\n");
	 for(i=0;i<n;i++)
	  {
	    printf("%d\n",*p1);
	    p1++;
	    sum=sum+ *p;
	    p++;
	    avg=sum/(float)n;
	  }
	     printf("\n");
	     printf("SUM OF ELEMENT IS:%d\n",sum);
	     printf("AVG OF ELEMENT IS:%.2f\n",avg);

	      getch();
}

