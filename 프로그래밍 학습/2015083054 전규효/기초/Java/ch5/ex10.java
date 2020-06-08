package ch5;

import java.io.*;

public class ex10 {
	public static void main(String args[]) throws Exception {
		int n;
		
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		
		bw.write("Number = ");
		bw.flush();
		n = Integer.parseInt(br.readLine());
		
		bw.write("*\n**\n");
		for(int i=0; i<n; i++) {
			bw.write("*");
			for(int j=0; j<i+1; j++)
				bw.write("@");
			bw.write("*\n");
		}
		for(int i=0; i<n-1; i++) {
			bw.write("*");
			for(int j=0; j<n-1-i; j++)
				bw.write("@");
			bw.write("*\n");
		}
		bw.write("**\n*\n");
		
		bw.flush();
		bw.close();
		br.close();
	}
}
