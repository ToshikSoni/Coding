import java.sql.*;
import java.util.Scanner;

public class c230512q1 {
    public static void main(String[] args) {
        try {
            Class.forName("com.mysql.jdbc.Driver");
            Connection conn = DriverManager.getConnection("jdbc:mysql://localhost:3306/toshik", "root", "Qazplm@123");
            Statement stmt = conn.createStatement();
            Scanner sc = new Scanner(System.in);
            System.out.println("Enter number: ");
            int i = sc.nextInt();
            System.out.println("Enter name: ");
            String s = sc.next();

            PreparedStatement ps = conn.prepareStatement("insert into mytab values(?,?);");
            ps.setInt(1, i);
            ps.setString(2, s);
            ResultSet rs = ps.executeQuery();
            ResultSetMetaData 
            while (rs.next()) {

            }
            stmt.close();
            sc.close();
            conn.close();
        } catch (Exception e) {
            System.err.println("Error: " + e.getMessage());
        }
    }
}
