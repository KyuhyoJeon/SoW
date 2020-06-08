package ch4;

public class ex1_5 {
	public static void main(String args[]) throws Exception{
		int n;
		
		System.out.print("Number = ");
		n = System.in.read() - '0';
		
		for(int i=0; i<n; i++) {
			for(int j=0; j<n-i; j++)
				System.out.printf("%4d", j+1);
			System.out.println();
		}
		
		System.err.print("\nProgram End");
	}
}
