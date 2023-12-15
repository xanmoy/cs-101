package INTERFACES;
// Interfaces are abstract by default. They are used to achieve abstraction and multiple inheritance in Java.
// A class can implement multiple interfaces.
// A class can extend only one class but can implement multiple interfaces.
// An interface can extend another interface.
// An interface cannot implement another interface.
// An interface that is declared inside another interface is called nested interface.
// A class that implements interface must implement all the methods in interface.
// An interface can have methods and variables but the methods declared in interface are by default abstract (only method signature, no body).
// Java 8 allows us to define default and static methods in an interface.
// An interface can have static method implementation but can't create instance of interface.
// An interface can have default method implementation but can't create instance of interface.
// An interface can extend another interface and can have default method implementation.
// An interface can extend another interface and can have static method implementation.



interface Animal {
    int eyes = 2;

    public void walk();

}

interface Herbivore {
    // public void eatGrass();
}


// This is called multiple inheritance
class Horse implements Animal, Herbivore {
    //constructor
    Horse() {
        System.out.println("Horse is created");
    }
    public void walk() {
        System.out.println("Horse is walking on 4 legs");
    }
    
}
public class Interfaces {
    public static void main(String[] args) {
        Horse horse = new Horse();
        horse.walk();
       
    }
}