/*
 * Autor: OtherSpanish
 * Problema:  Hour for a Run
 * Juez online: CodeForces
 * Veredicto: Accepted
 * URL: https://codeforces.com/gym/102346/problem/H
 */

import java.util.*;
//ASD
public class Main
{
	public static void main(String[] args) {

    Scanner sc = new Scanner(System.in);
    
    double n = sc.nextDouble(), m = sc.nextDouble();
    
    double c = (n*m)*10/100;
    
    
    System.out.println((long) Math.ceil(c) + " " + (long)Math.ceil(c*2) + " " + (long)Math.ceil(c*3)
    + " " + (long)Math.ceil(c*4)+ " " + (long)Math.ceil(c*5)+ " " + (long)Math.ceil(c*6) + " " + (long)Math.ceil(c*7)+ " " + (long)Math.ceil(c*8)
    + " " + (long)Math.ceil(c*9)
    );
	}
}
