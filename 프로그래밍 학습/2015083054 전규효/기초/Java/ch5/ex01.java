package ch5;

public class ex01 {
	public static void main(String args[]) throws Exception {
		int n;
		
		System.out.print("NUmber = ");
		n = System.in.read() - '0';
		
		for(int i=0; i<n; i++) {
			for(int j=0; j<n; j++)
				System.out.print("*");
			System.out.println();
		}
	}
}
