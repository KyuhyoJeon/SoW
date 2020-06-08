package ch5;

import java.util.Scanner;

public class ex09 {
	public static void main(String args[]) throws Exception {
		int n;
		
		Scanner sc = new Scanner(System.in);
		
		System.out.print("Number = ");
		n = sc.nextInt();
		
		for(int i=0; i<n+2; i++)
			System.out.print("$");
		System.out.println();
		for(int i=0; i<n; i++) {
			System.out.print("$");
			for(int j=0; j<n; j++)
				System.out.print("*");
			System.out.println("$");
		}
		for(int i=0; i<n+2; i++)
			System.out.print("$");
		
		sc.close();
	}
}