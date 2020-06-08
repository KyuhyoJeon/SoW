package ch5;

import java.util.Scanner;

public class ex06 {
	public static void main(String args[]) throws Exception {
		int n;
		
		Scanner sc = new Scanner(System.in);
		
		System.out.print("Number = ");
		n = sc.nextInt();
		
		for(int i=0; i<n; i++) {
			for(int j=0; j<n-i-1; j++)
				System.out.print(" ");
			for(int j=0; j<2*i+1; j++)
				System.out.print("*");
			for(int j=0; j<2*(n-i-1); j++)
				System.out.print(" ");
			for(int j=0; j<2*i+1; j++)
				System.out.print("*");
			System.out.println();
		}
		for(int i=0; i<n-1; i++) {
			for(int j=0; j<i+1; j++)
				System.out.print(" ");
			for(int j=0; j<2*(n-i-2)+1; j++)
				System.out.print("*");
			for(int j=0; j<2*(i+1); j++)
				System.out.print(" ");
			for(int j=0; j<2*(n-i-2)+1; j++)
				System.out.print("*");
			System.out.println();
		}
		
		sc.close();
	}
}
