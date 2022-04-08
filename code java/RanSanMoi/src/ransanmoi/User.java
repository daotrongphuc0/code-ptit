 /*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package ransanmoi;

/**
 *
 * @author daotr
 */
public class User implements Comparable<User>{
    private String name;
    private int diem;
    private int level;

    public User(String name, int level, int diem) {
        this.name = name;
        this.diem = diem;
        this.level = level;
    }

    public int getLevel() {
        return level;
    }

    public void setLevel(int level) {
        this.level = level;
    }

    public int getDiem() {
        return diem;
    }

    public String getName() {
        return name;
    }

    public void setDiem(int diem) {
        this.diem = diem;
    }

    public void setName(String name) {
        this.name = name;
    }

    @Override
    public String toString() {
        return name +" -- " + diem +"diem";
    }

    
    

    @Override
    public int compareTo(User o) {   //ghi đè để so sánh
        if(this.diem>o.diem) return -1;
        else if(this.diem ==o.diem) return 0;
        else return 1;
    }
    
}
