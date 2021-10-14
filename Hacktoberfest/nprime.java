/* package whatever; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Ideone
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner scanner = new Scanner(System.in);
		String input = scanner.next();
		int num = Integer.parseInt(input);
		int count = 0;
		
		for(int n = 2; count < num; n++){
            boolean isPrime = true;
            for (int i = 2; i <= n / 2; i++){
                if ( n % i == 0){
                    isPrime = false;
                    break;
                }
            }
 
            if ( isPrime == true ){
                System.out.println(n);
                count++;
            }
		}
	}
}
