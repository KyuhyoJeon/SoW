import java.io.*;
public class ex2_6 {
	public static void main(String args[]) throws Exception {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		int n;
		
		bw.write("Please enter number: ");
		bw.flush();
		n = Integer.parseInt(br.readLine());
		
		bw.write("\n");
		for(int i=0; i<n; i++) {
			for(int j=0; j<n; j++)
				System.out.printf("%4d", j+1);
			System.out.println();
		}
		System.out.println();
		for(int i=0; i<n; i++) {
			for(int j=0; j<n; j++)
				System.out.printf("%4d", i+1);
			System.out.println();
		}
		System.out.println();
		for(int i=0; i<n; i++) {
			for(int j=0; j<n; j++)
				System.out.printf("%4d", i+j+1);
			System.out.println();
		}
		System.out.println();
		for(int i=0; i<n; i++) {
			for(int j=0; j<n; j++)
				System.out.printf("%4d", (i+1)*(j+1));
			System.out.println();
		}
		
		bw.close();
		
		System.err.print("\nProgram End");
	}
}
