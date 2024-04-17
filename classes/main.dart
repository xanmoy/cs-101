void main() {
  User userOne = User("Doe", 25); //object of User class
  print(userOne.username);
  print(userOne.age);
  userOne.login();

  User userTwo = User("Jhon", 30); //object of User class
  print(userTwo.username);
  print(userTwo.age);
  userTwo.login();

  SuperUser superUserOne = SuperUser("James", 35); //object of SuperUser class
  print(superUserOne.username);
  print(superUserOne.age);
  superUserOne.publish();
  superUserOne.login();
}

class User {
  dynamic username;
  dynamic age;

  
  User(String username, int age)
  //constructor
  {
    this.username = username;
    this.age = age;
  }

  void login() {
    print("User logged in");
  }
}

class SuperUser extends User {
  SuperUser(String username, int age) : super(username, age); //constructor here super is used to call the constructor of the parent class 
  void publish() {
    print("Published update");
  }
}
