package BASIC;
class Pen {
    String color;
    String type; //ballpoint, gel, fountain 

    public void write() {
        System.out.println("Writing something...");
    }

    public void printColor() {
        System.out.println(this.color);
    }
}

class Student { //class is a blueprint
    String name;
    int age;

    public void printInfo() {
        System.out.println(this.name);
        System.out.println(this.age);
    }
    // if we don't create any constructor then java will create a default constructor for us

    // Student() { //this is a default constructor
    //     System.out.println("Constructor called!");
    // }


    // Student(String name, int age) { //this is a parameterized constructor
    //     System.out.println("Constructor called!");
    //     this.name = name;
    //     this.age = age;

    // }

    //copy constructor
    Student(Student s2) {
        this.name = s2.name;
        this.age = s2.age;
    }

    Student() {
        System.out.println("Constructor called!"); //this is a default constructor we have to create it manually if we create any parameterized constructor or copy constructor
    }
}

public class Main {
    public static void main(String[] args) {
        Pen pen1 = new Pen();
        pen1.color = "blue";
        pen1.type = "gell";

        Pen pen2 = new Pen();
        pen2.color = "black";
        pen2.type = "ballpoint";

        // pen1.printColor();
        // pen2.printColor();

        // Student s1 = new Student("Tanmoy", 21); //Student() is a constructor and s1 is an object and we call constructor using new keyword white creating an object
        Student s1 = new Student();
        s1.name = "Tanmoy";
        s1.age = 21;
        
        Student s2 = new Student(s1); //copy constructor
        

        s2.printInfo();

        



    }
}