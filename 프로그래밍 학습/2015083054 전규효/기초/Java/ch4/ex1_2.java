package ch4;

public class ex1_2 {
	public static void main(String args[]) throws Exception {
		int n, number=1;
		
		System.out.print("Number = ");
		n = System.in.read()-'0';
		System.in.read();
		System.in.read();
		
		for(int i=0; i<n; i++) {
			for(int j=0; j<n; j++) {
				System.out.printf("%4d", number);
				number+=2;
			}
			System.out.println();
		}
	}
}
