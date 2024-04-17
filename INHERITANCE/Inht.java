package INHERITANCE;


// Inheritance is a mechanism in which one object acquires all the properties and behaviors of a parent object. Or we can say that it is a process where one class acquires the properties (methods and fields) of another it is called inheritance. With the use of inheritance the information is made manageable in a hierarchical order.

//BASE CLASS/SUPER CLASS/PARENT CLASS
class Shape {
    String color;
    public void area() {
        System.out.println("Displays area");
    }
}

class Triangle extends Shape {
    // here Triangle class is inheriting the properties of Shape class 
    // and now Triangle class is a child class of Shape class and Shape class is a parent class of Triangle class 
    // and Triangle class is a subclass of Shape class and Shape class is a superclass of Triangle class
    // Now Triangle class will have the properties of Shape class which will not be defined in Triangle class

    public void area(int l, int h) {
        System.out.println(1 / 2 * l * h); //this is called single level inheritance
    }

}

class EquilaterialTriangle extends Triangle {
    // here EquilaterialTriangle class is inheriting the properties of Triangle class 
    // and now EquilaterialTriangle class is a child class of Triangle class and Triangle class is a parent class of EquilaterialTriangle class 
    // and EquilaterialTriangle class is a subclass of Triangle class and Triangle class is a superclass of EquilaterialTriangle class
    // Now EquilaterialTriangle class will have the properties of Triangle class which will not be defined in EquilaterialTriangle class

    public void area(int l, int h) {
        System.out.println(1 / 2 * l * h); //this is called multilevel inheritance
    }
}

class Circle extends Shape {
    // here Circle class is inheriting the properties of Shape class 
    // and now Circle class is a child class of Shape class and Shape class is a parent class of Circle class 
    // and Circle class is a subclass of Shape class and Shape class is a superclass of Circle class
    // Now Circle class will have the properties of Shape class which will not be defined in Circle class

    public void area(int r) {
        System.out.println(3.14 * r * r); //this is called single level inheritance
    }
}

// Here Base class of Triangle class and Circle class is Shape class and This is called Hierarchical Inheritance

// Multiple Inheritance is not supported in java but we can achieve it by using interfaces

public class Inht {
   public static void main(String[] args) {
     Triangle t1 = new Triangle(); // here we are creating an object of Triangle class
     t1.color = "red"; // here we are accessing the properties of Shape class by using the object of Triangle class
     System.out.println(t1.color);


    }
    
}
