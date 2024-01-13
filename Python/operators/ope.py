# Operators in Python
# There are many operators in Python. The most common ones are:
# - Arithmetic operators (+, -, *, /, %, //, **)
# - Assignment operators (=, +=, -=, *=, /=, %=, //=, **=)
# - Comparison operators (==, !=, >, <, >=, <=)
# - Logical operators (and, or, not)
# - Identity operators (is, is not)
# - Membership operators (in, not in)
# - Bitwise operators (&, |, ^, ~, <<, >>)

# Arithmetic operators
a =5 
b= 2
print(a+b)  # addition
print(a-b)  # subtraction
print(a*b)  # multiplication
print(a/b)  # division
print(a%b)  # modulus
print(a//b) # floor division
print(a**b) # a to the power b

print(" \n")

# Assignment operators
x= 5 # = is the assignment operator
print(x)
x+= 5 # here x+= 5 is equivalent to x= x+5
print(x)
x-= 5 # here x-= 5 is equivalent to x= x-5
print(x)
x*= 5 # here x*= 5 is equivalent to x= x*5
print(x)
x/= 5 # here x/= 5 is equivalent to x= x/5
print(x)
x%= 5 # here x%= 5 is equivalent to x= x%5 
print(x)
x//= 5 # here x//= 5 is equivalent to x= x//5
print(x) 
x**= 5 # here x**= 5 is equivalent to x= x**5
print(x)

print(" \n")

# Comparison operators
e = 5
f = 3
print(e==f) # is e equal to f?
print(e!=f) # is e not equal to f?
print(e>f)  # is e greater than f?
print(e<f)  # is e less than f?
print(e>=f) # is e greater than or equal to f?
print(e<=f) # is e less than or equal to f?

print(" \n")

# Logical operators
g = True
h = False
print(g and h) # is g and h both True?
print(g or h)  # is g or h True?
print(not g)   # is g False?

print(" \n")

# Identity operators

i = 5
j = 5
k = "Tanmoy"
l = "Tanmoy"
print(i is j) # is i and j the same object?
print(i is not j) # is i and j not the same object?
print(k is l) # is k and l the same object?
print(k is not l) # is k and l not the same object?


print(" \n")

# Membership operators

m = [1,2,3,4,5]
n = 3
o = 6
print(n in m) # is n in m?
print(o in m) # is o in m?
print(n not in m) # is n not in m?
print(o not in m) # is o not in m?

print(" \n")

# Bitwise operators

p = 5
q = 3
print(p & q) # Bitwise AND
print(p | q) # Bitwise OR
print(p ^ q) # Bitwise XOR
print(~p)    # Bitwise NOT
print(p << q) # Bitwise left shift
print(p >> q) # Bitwise right shift

print(" \n")
