class Student {
    String name;
    static String school;

    public static void changeSchool(String[] args) {
        school = "new school";
    }

}




public class Main {
    public static void main(String[] args) {
        Student.school = "MIT";
        Student s1 = new Student();
        s1.name = "Tony";
        System.out.println(s1.school);
        System.out.println(s1.name);
    }
}


