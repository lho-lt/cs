# Inheritence and Polymorphism

## Inheritance

Inheritance is one of the key principles of Object-Oriented Programming (OOP) in C++. It allows us to define a new class (derived class) that inherits properties and behaviors (methods) from an existing class (base class). This allows for code reusability and a hierarchical relationship between classes.

- Base Class (Parent Class): The class from which the derived class inherits.
- Derived Class (Child Class): The class that inherits from the base class.
  
The derived class can access and use the attributes and methods of the base class, as well as add its own unique attributes and methods.

```cpp
// Base class
class Animal {
public:
    void eat() {
        std::cout << "This animal eats food." << std::endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    void bark() {
        std::cout << "The dog barks." << std::endl;
    }
};

int main() {
    Dog dog;
    dog.eat();  // Inherited from Animal class
    dog.bark(); // Defined in Dog class

    return 0;
}
```

## Polymorphism

Polymorphism is one of the core principles of Object-Oriented Programming (OOP). It allows a single interface (method or function) to be used for objects of different types. Essentially, polymorphism means "many forms," and it lets one function or method take on different behaviors depending on the type of object it is interacting with.

In simpler terms, polymorphism enables the same function or method to behave differently based on the type of object that is calling it.

There are two types of polymorphism.

### Compile-time Polymorphism (Static Polymorphism)

This type of polymorphism is resolved at compile time. It is achieved by using:

- Function Overloading
- Operator Overloading

```cpp
class Printer {
public:
    void print(int i) {
        std::cout << "Printing an integer: " << i << std::endl;
    }

    void print(string s) {
        std::cout << "Printing a string: " << s << std::endl;
    }
};

int main() {
    Printer p;
    p.print(5);      // Calls the print(int) function
    p.print("Hello"); // Calls the print(string) function

    return 0;
}
```

### Runtime Polymorphism (Dynamic Polymorphism)

Run-time polymorphism is the more advanced and widely used form of polymorphism. It is resolved at runtime, and it's primarily achieved through:

- Method Overriding
- Virtual Functions

```cpp
class Animal {
public:
    virtual void speak() {  // Virtual function in base class
        std::cout << "Animal makes a sound." << std::endl;
    }
};

class Dog : public Animal {
public:
    void speak() override {  // Method overriding in derived class
        std::cout << "Dog barks!" << std::endl;
    }
};

class Cat : public Animal {
public:
    void speak() override {  // Method overriding in derived class
        std::cout << "Cat meows!" << std::endl;
    }
};

int main() {
    // Polymorphism in action
    Animal* animal1 = new Dog();  // Base class pointer, but points to a Dog object
    Animal* animal2 = new Cat();  // Base class pointer, but points to a Cat object

    // Dynamic dispatch happens here based on the actual object type
    animal1->speak();  // Output: Dog barks!
    animal2->speak();  // Output: Cat meows!

    delete animal1;
    delete animal2;

    return 0;
}
```

## Assignments

- [x] Create a Vehicle base class and derive Car, Bike, and Bus from it.
- [x] Implement a method `printVehicleInfo()` that behaves differently for each derived class.
