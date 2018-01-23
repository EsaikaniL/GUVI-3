import java.io.*;
import java.util.*;
  import java.text.SimpleDateFormat;
public class Isomorphic
{
static int size = 250;
    static boolean areIsomorphic(String str1, String str2)
    {
        int t = str1.length();
        int k = str2.length();
        if(t!= k)
            return false;
        Boolean[] marked = new Boolean[size];
        Arrays.fill(marked, Boolean.FALSE);
        int[] map = new int[size];
        Arrays.fill(map, -1);
        for (int i = 0; i < n; i++)
        {
            if (map[str1.charAt(i)] == -1)
            {
                if (marked[str2.charAt(i)] == true)
                    return false;
                marked[str2.charAt(i)] = true;
                map[str1.charAt(i)] = str2.charAt(i);
            }
            else if (map[str1.charAt(i)] != str2.charAt(i))
            return false;
        }
 return true;
    }
    public static void main (String[] args) 
    {
        boolean res = areIsomorphic("aab", "xxy");
        System.out.println(res);
        res = areIsomorphic("aab", "xyz");
        System.out.println(res);
    }
}
