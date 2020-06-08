package ch4;

import java.io.*;

public class ex1_3 {
	public static void main(String args[]) throws IOException {
		int n;
		
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		
		bw.write("Number= ");
		bw.flush();
		
		n = Integer.parseInt(br.readLine());
		
		for(int i=0; i<n; i++) {
			for(int j=0; j<i+1; j++)
				bw.write(String.format("%4d", j+1));
			bw.write("\n");
		}
		
		bw.flush();
		bw.close();
		
		System.err.print("\nProgean End");
	}
}
