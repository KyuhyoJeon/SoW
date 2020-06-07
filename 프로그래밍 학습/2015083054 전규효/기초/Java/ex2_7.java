import java.io.*;
import java.util.Scanner;
public class ex2_7 {
	public static void main(String args[]) throws Exception, IOException {
		int n, k;
		
		System.out.println("BufferedReader/Writer를 이용한 방법");
		
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		
		bw.write("Please enter number: ");
		bw.flush();
		n = Integer.parseInt(br.readLine());
		
		bw.write("\n");
		bw.flush();
		k=0;
		for(int i=0; i<n; i++) {
			for(int j=0; j<n; j++)
				System.out.printf("%4d", ++k);
			bw.write("\n");
			bw.flush();
		}
		
		System.out.println("System.in/out을 이용한 방법");

		System.out.print("Please enter number: ");
		n = System.in.read()-'0';
		
		System.out.println();
		k=0;
		for(int i=0; i<n; i++) {
			for(int j=0; j<n; j++)
				System.out.printf("%4d", k+=1);
			System.out.println();
		}
		
		System.out.println("Scanner를 이용한 방법");
		
		Scanner sc = new Scanner(System.in);
		
		System.out.print("Please enter number: ");
		n = sc.nextInt();
		
		System.out.println();
		k=0;
		for(int i=0; i<n; i++) {
			for(int j=0; j<n; j++)
				System.out.printf("%4d", ++k);
			System.out.println();
		}
		
		br.close();
		bw.close();
		sc.close();

		System.err.print("\n Program End");
	}

}
