package ch4;

import java.util.Scanner;

public class ex1_10 {
	public static void main(String args[]) throws Exception {
		int n, number=1;
		
		Scanner sc = new Scanner(System.in);
		
		System.out.print("Number = ");
		n = sc.nextInt();
		
		for(int i=0; i<n; i++) {
			for(int j=0; j<n-i-1; j++)
				System.out.print("    ");
			for(int j=0; j<i+1; j++)
				System.out.printf("%4d", number++);
			System.out.println();
		}
		
		sc.close();
	}
}
