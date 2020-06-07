import java.io.*;
import java.util.*;
public class ex2_5 {
	public static void main(String argsp[]) throws Exception {
		int n;
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		
		bw.write("Please enter number: ");
		bw.flush();
		n = Integer.parseInt(br.readLine());
		
		bw.write("\n");
		for(int i=0; i<n; i++)
			bw.write(String.valueOf(i+1));
		bw.write("\n");
		bw.flush();
		
		Scanner sc = new Scanner(System.in);
		
		System.out.print("Please enter number: ");
		n = sc.nextInt();

		System.out.println();
		for(int i=0; i<n; i++)
			System.out.print(i + 1);
		System.out.println();
		for(int i=0; i<n; i++)
			System.out.println(i + 1);
		System.out.println();
		for(int i=0; i<n; i++)
			System.out.printf("%2d", i + 1);
		System.out.println();
		for(int i=0; i<n; i++)
			System.out.printf("%2d \n", i + 1);
		System.out.println();
		for(int i=0; i<n; i++) {
			for(int j=0; j<n; j++)
				System.out.printf("%2d", j + 1);
			System.out.println();
		}
		System.out.println();

		bw.close();
		sc.close();
		
		System.err.print("\nProgram End");
		
	}
}
