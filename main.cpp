#include <iostream>
#include "proto/base.pb.h"

int main() {
    Person person;
    person.set_name("张三");
    person.set_age(28);
    std::string data;
    person.SerializeToString(&data);
    std::cout << data.length() << std::endl;

    Person person1;
    person1.ParseFromString(data);
    std::cout << "name: " << person1.name() << ", age: " << person1.age() << std::endl;
    return 0;
}
