import java.util.Scanner;
import java.io.*;
public class ex2_4 {
	public static void main(String args[]) throws Exception {
		Scanner sc = new Scanner(System.in);
		int n;
		System.out.print("Please enter number: ");
		n = sc.nextInt();
		
		System.out.println();
		for(int i=0; i<n; i+=1) {
			System.out.print("yes ");
			System.out.println("i = " + i + ": print " + n + " many yes");
		}
		System.out.println("-------------------------------");
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		System.out.print("Please enter number: ");
		n = Integer.parseInt(br.readLine());
		
		System.out.println();
		for(int i=0; i<n; i++) {
			System.out.print("yes ");
			System.out.println("i = " + i + ": print " + n + " many yes");
		}
		
		System.out.println("-------------------------------");
		System.out.print("Please enter number: ");
		n = Integer.parseInt(br.readLine());
		
		System.out.println();
		for(int i=0; i<n; i++)
			System.out.println("i = " + i + ": print the numbers from 0 to " + (n-1));

		sc.close();
		br.close();
		
		System.err.println("\nProgram End");
	}
}
