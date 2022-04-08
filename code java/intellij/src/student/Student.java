package student;

import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.Date;

public class Student {
    private String name;
    private String studentId;
    private Date birthDate;
    private String address;
    private String major;
    private double gpa;

    public Student(String name, String studentId, String birthDate, String address, String major, double gpa) throws ParseException {
        this.name = name;
        this.studentId = studentId;

        this.birthDate =  new SimpleDateFormat("dd/MM/yyyy").parse(birthDate);
        this.address = address;
        this.major = major;
        this.gpa = gpa;
    }

    public String getName() {
        return name;
    }

    public String getStudentId() {
        return studentId;
    }

    public Date getBirthDate() {
        return birthDate;
    }

    public String getAddress() {
        return address;
    }

    public String getMajor() {
        return major;
    }

    public double getGpa() {
        return gpa;
    }

    public void setName(String name) {
        this.name = name;
    }

    public void setStudentId(String studentId) {
        this.studentId = studentId;
    }

    public void setBirthDate(Date birthDate) {
        this.birthDate = birthDate;
    }

    public void setAddress(String address) {
        this.address = address;
    }

    public void setMajor(String major) {
        this.major = major;
    }

    public void setGpa(double gpa) {
        this.gpa = gpa;
    }

    @Override
    public String toString() {
        return  "Student name: " + name +
                "\nStudent Id: " + studentId +
                "\nStudent birthday: " + birthDate +
                "\nStudent address: " + address +
                "\nStudent major: " + major +
                "\nStudent gpa: " + String.format("%.2f",gpa) ;
    }
}
