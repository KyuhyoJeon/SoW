package ch4;

import java.util.*;

public class ex1_7 {
	public static void main(String args[]) throws Exception {
		int n;
		
		Scanner sc = new Scanner(System.in);
		
		System.out.print("Number = ");
		n = sc.nextInt();
		
		for(int i=0; i<n; i++) {
			for(int j=0; j<n; j++)
				System.out.printf("%4d", i+j+1);
			System.out.println();
		}
		
		sc.close();
	}
}
