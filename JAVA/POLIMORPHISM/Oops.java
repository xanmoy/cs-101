package POLIMORPHISM;
class Student { //class is a blueprint
    String name;
    int age;
    // This Implementaion is called Polimorphism and it is overloading 
    // if two methods has same return type then then it have to have different parameters or different number of parameters or different order of parameters or different type of parameters or different sequence of parameters or different data types of parameters. if it has same number of parameters then it has to have different data types of parameters or they have to have diffent return types
 
    public void printInfo(String name) {
        System.out.println(this.name);

    }
    
    public void printInfo(int age) {
        System.out.println(this.age);
    }

    public void printInfo(String name, int age) {
        System.out.println(this.name);
        System.out.println(this.age);
    }
    public void printInfo(int age, String name) {
        System.out.println(this.name);
        System.out.println(this.age);
    }
// new comment
}

public class Oops {
    public static void main(String[] args) {
        //We dont write distractors in java because java has a garbage collector which automatically deletes the objects which are not in use anymore

        // Polimorphism in java

        // Polimorphism means many forms easy way to understand is method overriding. when we do same thing in different ways in java it is called polimorphism

        // There are two types of polimorphism in java that are method method overloading and method overriding

        // compile time polimorphism is method overloading and runtime polimorphism is method overriding. runtime polimorphism is related to inheritance

        // method overloading is when we create two methods with same name but different parameters
        
        // we can say method in a class in java is a function
        
        Student s1 = new Student();
        s1.name = "Tanmoy";
        s1.age = 12;
        s1.printInfo(s1.name, s1.age);


    }
}
