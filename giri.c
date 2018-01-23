#include <stdio.h>
int main() 
{	
char a[18],b[18];	
int t,k,n,n1,count=0;	
scanf("%s %s",a,b);	
n=strlen(a);	
n1=strlen(b);	
if(n==n1)	
{   
for(t=0,k=0;t<n,k<n1;t++,k++)   
{    	    
if(a[t]==b[k])    	   
{    	       
continue;    	  
}    	   
else    	  
{
count++;    	  
}   
}    	
if(count==1)  
{    	    
printf("yes..differ by 1 character");    
}	
}
else	
{
printf("false");
}	
}
