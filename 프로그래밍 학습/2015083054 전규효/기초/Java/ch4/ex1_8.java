package ch4;

public class ex1_8 {
	public static void main(String args[]) throws Exception {
		int n, number;
		
		System.out.print("Number = ");
		n = System.in.read() - '0';
		
		for(int i=0; i<n; i++) {
			number = n*(n-1-i);
			for(int j=0; j<n; j++)
				System.out.printf("%4d", ++number);
			System.out.println();
		}
	}
}
