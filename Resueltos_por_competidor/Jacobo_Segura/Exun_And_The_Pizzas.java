import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
	    Scanner sc = new Scanner(System.in);
	    int n = sc.nextInt();
	    int k = sc.nextInt();
	    int r = sc.nextInt();
	    n = n*r;
	    k = k*r;
	    n = n-k;
	    System.out.println(n);
	}
}
