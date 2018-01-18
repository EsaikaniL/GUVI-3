#include<stdio.h>
 void main()
 {
  int k,arr[50],s,no;
scanf("%d",&no);
  for(k=0;k<no;k++)
  {
   scanf("%d",&arr[k]);
  }
  for(k=0; k<no; k++)
   {
    for(s=k+1;s<no;s++)
    {
    if(arr[k]==arr[s])
    {
    printf("%d\n",arr[k]);
    }
   }
   }
   getch();
}
