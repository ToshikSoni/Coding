//Write a Java program that recursively searches a directory for files with a specific
//extension, reads the content of each file, and performs a search for a specified keyword.
//The program should display the name of each file that contains the keyword and the
//line number(s) where it occurs.
import java.util.Scanner;
public class a2q2 {
    public static void main(String args[]) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter directory to search: ");
        String directoryPath = scanner.nextLine();
        System.out.println("Enter file extension (without the dot): ");
        String fileExtension = scanner.nextLine();
        System.out.println("Enter word to search: ");
        String wordToSearch = scanner.nextLine();
        scanner.close();
    }
}
