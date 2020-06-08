package ch4;

import java.io.*;
import java.util.Scanner;

public class ex1_1 {
	public static void main(String args[]) throws Exception, IOException {
		int n, number=0;
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		
		bw.write("Number = ");
		bw.flush();
		
		n = Integer.parseInt(br.readLine());
		
		for(int i=0; i<n; i++) {
			for(int j=0; j<n; j++)
				bw.write(String.format("%4d", ++number));
			bw.write("\n");
		}
		bw.flush();
		
		number =0;
		
		Scanner sc = new Scanner(System.in);
		System.out.print("Number = ");
		
		n = sc.nextInt();
		
		for(int i=0; i<n; i++) {
			for(int j=0; j<n; j++)
				System.out.printf("%4d", ++number);
			System.out.println();
		}
		
		bw.close();
		sc.close();
		
		System.err.print("\nProgram End");
	}
}
