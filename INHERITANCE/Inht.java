package INHERITANCE;
// Inheritance is a mechanism in which one object acquires all the properties and behaviors of a parent object. Or we can say that it is a process where one class acquires the properties (methods and fields) of another it is called inheritance. With the use of inheritance the information is made manageable in a hierarchical order.

class Shape {
    String color;
}

class Triangle extends Shape { // here Triangle class is inheriting the properties of Shape class and now Triangle class is a child class of Shape class and Shape class is a parent class of Triangle class and Triangle class is a subclass of Shape class and Shape class is a superclass of Triangle class
    // Now Triangle class will have the properties of Shape class which will not be defined in Triangle class
    int base;
    int height;

    public void printArea() {
        System.out.println(0.5 * this.base * this.height);
    }


}


public class Inht {
    
}
