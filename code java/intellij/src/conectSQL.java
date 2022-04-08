import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;

public class conectSQL {
    public static void main(String[] args) throws SQLException {
        String url = "jdbc:sqlserver:DNBK3\\sqlexpress;databaseName=accounts;";
        String user ="sa";
        String pass = "123456";
        try {
            Connection connection = DriverManager.getConnection(url, user, pass);
            System.out.println("connected");
        } catch (SQLException e) {
            System.out.println("connetion error");
            e.printStackTrace();
        }


    }
}
