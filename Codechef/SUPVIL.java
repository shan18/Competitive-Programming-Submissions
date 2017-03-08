// Java

import java.io.*;
import java.util.*;
 
class SUPVIL {
    private static Scanner sc;
    
	public static void main (String[] args) {
		sc = new Scanner(System.in);
		int test = sc.nextInt();
		
		for(int i=1; i<=test; i++) {
		    int n = sc.nextInt();
		    int superHero = 0;
		    int villain = 0;
		    int flag = 0;
		    for(int j=1; j<=n; j++) {
		        String s = sc.next();
		        
		        if(flag==0) {
    		        if(s.endsWith("man") || s.endsWith("woman"))
    		            superHero++;
    		        else
    		            villain++;
    		        
    		        if(superHero - villain == 2)
    		            flag = 1;
    		        else if(villain - superHero == 3)
    		            flag = 2;
		        }
		    }
		    if(flag==1)
		        System.out.println("superheroes");
		    else if(flag==2)
		        System.out.println("villains");
		    else
		        System.out.println("draw");
		}
	}
}
