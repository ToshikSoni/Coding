import java.util.Scanner;

public class First {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter month number (1-12): ");
        int month = sc.nextInt();
        boolean flag = true;
        sc.close();
        String monthName = "";
        if (month == 1)
            monthName = "January";
        else if (month == 2)
            monthName = "February";
        else if (month == 3)
            monthName = "March";
        else if (month == 4)
            monthName = "April";
        else if (month == 5)
            monthName = "May";
        else if (month == 6)
            monthName = "June";
        else if (month == 7)
            monthName = "July";
        else if (month == 8)
            monthName = "August";
        else if (month == 9)
            monthName = "September";
        else if (month == 10)
            monthName = "October";
        else if (month == 11)
            monthName = "November";
        else if (month == 12)
            monthName = "December";
        else {
            System.out.println("Invalid month number");
            flag = false;
        }
        if (flag == true)
            System.out.println("Month name: " + monthName);
    }
}
