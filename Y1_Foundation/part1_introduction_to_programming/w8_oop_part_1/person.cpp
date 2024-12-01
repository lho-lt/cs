#include <iostream>
#include <string>

class Person {
  public:
    Person(std::string name, int age) {
        this->name = name;
        this->age = age;
    }
    std::string getName() const { return name; }
    int getAge() const { return age; }

    void setAge(int age) { this->age = age; }

  private:
    std::string name;
    int age;
};

int main() {
    Person person("John Doe", 30);

    std::cout << "Name: " << person.getName() << std::endl;
    std::cout << "Age: " << person.getAge() << std::endl;

    person.setAge(25);

    std::cout << "Updated age: " << person.getAge() << std::endl;
}