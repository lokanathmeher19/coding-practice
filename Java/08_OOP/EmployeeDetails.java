class Employee {
    String name;
    int employeeId;
    double salary;
    String department;
}

public class EmployeeDetails {
    public static void main(String[] args) {

        Employee employee = new Employee();

        employee.name = "Rahul";
        employee.employeeId = 101;
        employee.salary = 35000;
        employee.department = "Development";

        System.out.println("Employee Name: " + employee.name);
        System.out.println("Employee ID: " + employee.employeeId);
        System.out.println("Salary: " + employee.salary);
        System.out.println("Department: " + employee.department);
    }
}