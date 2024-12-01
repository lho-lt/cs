# Introduction to Object-Oriented Programming (OOP)

## Class and Object

- **Class**: A blueprint for creating objects, defining their structure and behavior.
- **Object**: An instance of a class, representing a specific entity with its own state and behavior.

### Defining a Class

```cpp
class Dog {
public:
    // Attributes
    std::string name;
    int age;

    // Methods
    void bark() {
        std::cout << "Woof!" << std::endl;
    }
}
```

- **Access Specifiers:**
  - `public`: Accessible from outside the class.
  - `private`: Accessible only within the class.
  - `protected`: Accessible within the class and its derived classes.

### Creating Objects

```cpp
int main() {
    Dog myDog; // Create an instance of the Dog class
    myDog.name = "Buddy"; // Set the name attribute
    myDog.age = 3;  // Set the age attribute
    myDog.bark();   // Call the bark method
    return 0;
}
```

## Constructors and Destructors

- **Constructor**: A special method that is called when an object is created.
- **Destructor**: A special method that is called when an object is destroyed.

```cpp
class Dog {
public:
    std::string name;
    int age;

    // Constructor
    Dog(std::string n, int a): name(n), age(a) {
        std::cout << "Dog created: " << name << std::endl;
    }

    // Destructor
    ~Dog() {
        std::cout << "Dog destroyed: " << name << std::endl;
    }

    void bark() {
        std::cout << "Woof!" << std::endl;
    }
}

int main() {
    Dog myDog("Buddy", 3);
    myDog.bark();
    return 0; // Destructor will be called automatically
}
```

### Member Functions

- **Member Functions**: Functions that are defined within a class and can access its attributes and methods.
  
```cpp
class Dog {
public:
    std::string name;
    int age;

    // Member Function 
    void bark() {
        std::cout << "Woof!" << std::endl;
    }

    // Member Function
    void changeName(std::string newName) {
        name = newName;
    }
}
```

### Static Members

- **Static Members**: Members that are defined within a class and can be accessed without creating an instance of the class.
  
```cpp
class Dog {
public:
    static int count; // Static member to keep track of the number of dogs

    Dog() {
        count++; // Increment count when a new Dog object is created
    }
};

// Initialize static member
int Dog::count = 0;

int main() {
    Dog d1, d2;
    std::cout << "Total dogs: " << Dog::count << std::endl; // Accessing static member
    return 0;
}
```
