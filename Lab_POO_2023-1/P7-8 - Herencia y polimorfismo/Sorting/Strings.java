
// ******************************************************
//Numbers.java
//
// ******************************************************
import java.util.Scanner;

public class Strings {
	// --------------------------------------------
	// Reads in an array of Strings, sorts them,
	// then prints them in sorted order.
	// --------------------------------------------
	public static void main(String[] args) {
		String[] stringList;
		int size;
		Scanner scan = new Scanner(System.in);

		System.out.print("\n¿Cúantas cadenas quieres ordenar? ");
		size = scan.nextInt();
		stringList = new String[size];

		System.out.println("\nDame las cadenas...");
		for (int i = 0; i < size; i++)
			stringList[i] = scan.next();
		Sorting.insertionSort(stringList);
		System.out.println("\nLas cadenas ordenadas son:");
		for (int i = 0; i < size; i++)
			System.out.print(stringList[i] + " ");
		System.out.println();
		scan.close();
	}
}
