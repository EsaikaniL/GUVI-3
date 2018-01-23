import java.io.*;
import java.util.*;
class array1
{
public static void main(String args[])
{
int t;
int v=0;
Scanner sc=new Scanner(System.in);
t=sc.nextInt();
int a[]=new int[t];
if(t>=1&&t<=1000)
{
for(int i=0;i<t;i++)
{
a[i]=sc.nextInt();
if(a[i]==i)
{
v=1;
System.out.print(a[i]+" ");
}
else
{
continue;
}
}
if(v==0)
{
System.out.println("-1");
}
}
}
}
