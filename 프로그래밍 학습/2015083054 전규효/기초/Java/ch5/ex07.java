package ch5;

public class ex07 {
	public static void main(String args[]) throws Exception {
		int n;
		
		System.out.print("Number = ");
		n = System.in.read() - '0';
		
		for(int i=0; i<n; i++) {
			for(int j=0; j<n-i-1; j++)
				System.out.print(" ");
			for(int j=0; j<2*i+1; j++)
				System.out.print("*");
			for(int j=0; j<2*(n-i-1); j++)
				System.out.print(" ");
			for(int j=0; j<2*i+1; j++)
				System.out.print("*");
			for(int j=0; j<2*n; j++)
				System.out.print("*");
			for(int j=0; j<2*(n-i-1); j++)
				System.out.print(" ");
			for(int j=0; j<2*i+1; j++)
				System.out.print("*");
			System.out.println();
		}
	}
}
