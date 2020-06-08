import java.io.*;
import java.util.Scanner;
public class ex2_3 {
	public static void main(String[] args)throws Exception {
		int a, b, c;
		int input;
		Scanner sc = new Scanner(System.in);
		System.out.print("Please enter first number(a) : ");
		BufferedReader inputNum = new BufferedReader(new InputStreamReader(System.in));
		a = Integer.parseInt(inputNum.readLine());
		
		System.out.println("Please enter second Number(b) : ");
		inputNum = new BufferedReader(new InputStreamReader(System.in));
		b = Integer.parseInt(inputNum.readLine());
		
		c = a+b;
		System.out.println("a = " + a + ", b = " + b + ", c = " + c);
		
		System.out.println("정수 입력: ");
		input = sc.nextInt();
		
		System.out.println("입력받은 정수: " + input);
		sc.close();
		inputNum.close();

		System.err.println("\nProgram End");
	}
}
