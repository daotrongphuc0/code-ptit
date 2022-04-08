import java.sql.SQLException;

public class test {
    public static void main(String[] args) {
        try {
            SQLServerConnUtils_SQLJDBC.getSQLServerConnection();
            System.out.println("connected");
        } catch (SQLException e) {
            System.out.println("0-1");
            e.printStackTrace();
        } catch (ClassNotFoundException e) {
            System.out.println("0-2");
            e.printStackTrace();
        }
    }
}
