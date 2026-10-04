class Student {
    String name;
    int age;
    String course;
}

public class StudentDetails {
    public static void main(String[] args) {

        Student student = new Student();

        student.name = "Lokanath";
        student.age = 20;
        student.course = "B.Tech CSE";

        System.out.println("Student Name: " + student.name);
        System.out.println("Age: " + student.age);
        System.out.println("Course: " + student.course);
    }
}