import java.io.*;
import java.util.Scanner;
public class ex2_8 {
	public static void main(String args[]) throws Exception, IOException {
		int n;
		
		System.out.print("Please enter number: ");
		n = System.in.read() - '0';
		System.in.read();
		System.in.read();

		System.out.println();
		for(int i=0; i<n; i++) {
			for(int j=0; j<i+1; j++)
				System.out.printf("%4d", j+1);
			System.out.println();
		}
		System.out.println();
		for(int i=0; i<n; i++) {
			for(int j=0; j<n-i; j++)
				System.out.printf("%4d", j+1);
			System.out.println();
		}
		System.out.println("------------------------");
		
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		
		bw.write("Please enter number: ");
		bw.flush();
		n = Integer.parseInt(br.readLine());

		bw.write("\n");
		for(int i=0; i<n; i++) {
			for(int j=0; j<i+1; j++)
				bw.write(String.format("%4d", j+1));
			bw.write("\n");
		}
		bw.write("\n");
		for(int i=0; i<n; i++) {
			for(int j=0; j<n-i; j++)
				bw.write(String.format("%4d", j+1));
			bw.write("\n");
		}
		bw.flush();

		System.out.println("------------------------");

		Scanner sc = new Scanner(System.in);
		
		System.out.print("Please enter number: ");
		n = sc.nextInt();

		System.out.println();
		for(int i=0; i<n; i++) {
			for(int j=0; j<i+1; j++)
				System.out.printf("%4d", j+1);
			System.out.println();
		}
		System.out.println();
		for(int i=0; i<n; i++) {
			for(int j=0; j<n-i; j++)
				System.out.printf("%4d", j+1);
			System.out.println();
		}
		
		bw.close();
		sc.close();
		
		System.out.println();
		System.err.print("Program End");
	}
}
