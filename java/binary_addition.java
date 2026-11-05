public class binary_addition {
	public static String binaryAddition(int a, int b) {
		return Integer.toBinaryString(a + b);
	}

	public static void main(String args[]) {
		String output = binaryAddition(3, 2);

		System.out.println("Input: 3, 2");
		System.out.println("Output: " + output);
	}
}
