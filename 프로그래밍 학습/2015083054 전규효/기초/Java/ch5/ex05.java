package ch5;

import java.io.*;

public class ex05 {
	public static void main(String arg[]) throws IOException {
		int n;
		
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		
		bw.write("Number = ");
		bw.flush();
		n = Integer.parseInt(br.readLine());
		
		for(int i=0; i<n; i++) {
			for(int j=0; j<n-i-1; j++)
				bw.write(" ");
			for(int j=0; j<2*i+1; j++)
				bw.write("*");
			bw.write("\n");
		}
		for(int i=0; i<n-1; i++) {
			for(int j=0; j<i+1; j++)
				bw.write(" ");
			for(int j=0; j<2*(n-i-2)+1; j++)
				bw.write("*");
			bw.write("\n");
		}
		
		bw.flush();
		bw.close();
	}
}
