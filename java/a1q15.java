import java.util.Scanner;

public class a1q15 {
	public static class Box {
		private double width, height, length;

		public Box(double w, double h, double l) {
			width = w;
			height = h;
			length = l;
		}

		public double volume() {
			return (length * width * height);
		}
	}

	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter width, height, length: ");
		double w = sc.nextDouble(), h = sc.nextDouble(), l = sc.nextDouble();
		Box a = new Box(w, h, l);
		System.out.print("The volume is: " + a.volume());
		sc.close();
	}
}
