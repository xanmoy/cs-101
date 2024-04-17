void main() {
  List<String> names = ['Jack', 'Jill', 'John']; //<String> <Int> <Double> <dynamic> <num> <bool> <List> <Map> <Set> <Iterable>
  print(names);
  names.add('James');
  print(names);
  names.removeAt(2); //or names.remove('John');
  // names.add(30); //error as it is a string list
  print(names);
  print(names[0]);
  print(names.length);
  print(names.reversed);
  print(names.isEmpty);
}
