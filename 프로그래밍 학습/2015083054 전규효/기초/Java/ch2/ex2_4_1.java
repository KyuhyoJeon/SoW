import java.io.*;
public class ex2_4_1 {
	public static void main(String args[]) throws Exception {
		for(int i=0; i<10; i++)
			System.out.print("yes ");
		System.out.println();
		for(int i=0; i<100; i++)
			System.out.print("happy ");
		System.out.println();
		for(int i=0; i<1000; i++)
			System.out.print("laugh ");
		System.out.println();
		
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		for(int i=0; i<10; i++)
			bw.write("yes ");
		bw.write("\n");
		for(int i=0; i<100; i++)
			bw.write("happy ");
		bw.write("\n");
		for(int i=0; i<1000; i++)
			bw.write("laugh ");
		bw.write("\n");
		
		bw.flush();
		bw.close();
		
		System.err.print("\nProgram End");
	}
}
