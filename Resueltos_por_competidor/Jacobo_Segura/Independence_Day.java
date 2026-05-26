import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
	    Scanner sc = new Scanner(System.in);
	    int g;
	    int x = sc.nextInt();
	    
	    if(x<=15){
	        g = 15-x;
	        System.out.println(g);
	    }else{
	        System.out.println(-1);
	    }
	}
}
