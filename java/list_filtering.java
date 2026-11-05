import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class list_filtering{

  public static List<Object> filterList(final List<Object> list) {
    List<Object> result = new ArrayList<>();

    for (Object item : list) {
      if (!(item instanceof String)) {
        result.add(item);
      }
    }

    return result;
  }

  public static void main(String[] args) {
    List<Object> input = Arrays.asList(1, "a", 2, "b", 3);

    List<Object> output = filterList(input);

    System.out.println("Input:  " + input);
    System.out.println("Output: " + output);
  }
}
