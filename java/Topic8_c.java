import java.io.*;
import java.util.*;

public class Topic8_c {
	public static void main(String[] args) {
		try {
			BufferedReader reader = new BufferedReader(new FileReader("input.txt"));
			PrintWriter writer = new PrintWriter(new FileWriter("output.txt"));
			Map<String, Integer> wordCountMap = new TreeMap<>();
			String line;
			while ((line = reader.readLine()) != null) {
				String[] words = line.split("\\s+");
				for (String word : words) {
					word = word.replaceAll("^[^\\p{L}\\p{N}]+|[^\\p{L}\\p{N}]+$", "");
					if (!word.isEmpty())
						wordCountMap.put(word, wordCountMap.getOrDefault(word, 0) + 1);
				}
			}
			for (Map.Entry<String, Integer> entry : wordCountMap.entrySet())
				writer.println(entry.getKey() + " " + entry.getValue());
			reader.close();
			writer.close();
			System.out.println("Word count completed.");
		} catch (IOException e) {
			e.printStackTrace();
		}
	}
}