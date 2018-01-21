import java.util.Scanner;
import java.lang.String;
import java.lang.StringBuilder;
class play
{
public static void main(String [] args)
{
Scanner sn=new Scanner(System.in);
String str=sn.nextLine();
StringBuilder sb=new StringBuilder(str);
sb.append('.');
String k=sb.toString();
System.out.println(k);
}
}
