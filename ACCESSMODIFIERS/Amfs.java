package ACCESSMODIFIERS;
//There are 4 types of access modifiers in java

//1. public : can be accessed from anywhere
//2. private : can be accessed only from the same class
//3. protected : can be accessed from the same package and from the sub classes of other packages
//4. default : can be accessed only from the same package
class Account {
    // String name;
    public String name;
    protected String email;
    private String password;
    // getter and setter methods
    // getter method: to get the value of a private variable
    //setter method: to set the value of a private variable

    public String getPassword() {
        // setPassword(randomPassword());
        return this.password;
    }

    public void setPassword(String password) {
        this.password = password;
    }
}
public class Amfs {
    public static void main(String[] args) {
        Account account1 = new Account();
        account1.name = "Xanmoy";
        account1.email = "xanmoy@outlook.vom";
        account1.setPassword("abcd");
        System.out.println(account1.getPassword());

    }
}
