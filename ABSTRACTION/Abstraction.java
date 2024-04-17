package ABSTRACTION;

import INTERFACES.Animal;
import INTERFACES.Horse;

//Abstraction is a process of hiding the implementation details and showing only functionality to the user but Encapsulation is a process of wrapping code and data together into a single unit.

abstract class Animal {
    abstract void walk();
    // constructor
    Animal() {
        System.out.println("Animal is created");
    }
    public void eat() {
        System.out.println("Animal is eating");
    }
}

class Horse extends Animal {
    //constructor
    Horse() {
        System.out.println("Horse is created");
    }
    public void walk() {
        System.out.println("Horse is walking on 4 legs");
    }
}

class Chicken extends Animal {
    public void walk() {
        System.out.println("Chicken is walking on 2 legs");
    }
}





public class Abstraction {
    public static void main(String[] args) {
        Horse horse = new Horse();
        // horse.walk();
        // horse.eat();

        // Animal animal = new Animal();
        // animal.walk();
    }
}
