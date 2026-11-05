public class ReverseWord {
	public static void main(String[] args) {
		String original = "This  is    an example!";

		String[] split = original.split(" ");
	
		String output = "";
		int splits = 0;
		for(String i : split) {
			splits = 0;
			output += new StringBuilder(i).reverse().toString();
			while(output.length() < original.length() && original.charAt(output.length()) == ' ') output += " ";
		}
		System.out.println(output);	

		//return output.substring(0, output.length() - 1);
	}
}
