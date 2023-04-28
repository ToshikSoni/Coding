import java.util.Scanner;

public class testtt {
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter size of array: ");
		int size = sc.nextInt(), b = 0, b1 = 0;
		int[] arr;
		arr = new int[size];
		System.out.println("Enter elements of array: ");
		for (int i = 0; i < size; i++)
			arr[i] = sc.nextInt();
		if (arr[0] < arr[size - 1]) {
			b = arr[0];
			b1 = arr[0];
		}
		else {
			b = arr[size - 1];
			b1 = arr[size - 1];
		}
		for (int i = 0; i < size; i++)
			if (b > arr[i]) {
				b = arr[i];
				b1 = arr[i];
			}
		if (arr[0] > arr[size - 1])
			b = arr[size - 1];
		else
			b = arr[0];
		for (int i = 0; i < size; i++)
			if (b > arr[i])
				if (arr[i] != b1)
					b = arr[i];
		sc.close();
		System.out.println(
				"The largest number is: " + b1 + "\nAnd the second largest number is: " + b);
	}
}
