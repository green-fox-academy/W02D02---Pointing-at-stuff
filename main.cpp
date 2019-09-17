#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>

//ADRESS OF OPERATOR
/* int main() {
    int number = 420;
    std::cout << "The value of the number is: " << number << std::endl;
    std::cout << "The address of the number is: " << &number << std::endl;
    return 0;
} */

//POINTER AND NULLPTR
/* int main() {
    int *ptr;
    std::cout << "The value of ptr is " << ptr << std::endl;
    std::cout << "The address of ptr is " << &ptr << std::endl;

    ptr = nullptr;
    std::cout << "The value of ptr is " << ptr << std::endl;
    return 0;
} */

//POINTING TO A VARIABLE
/* int main () {
    int age = 31;
    int *agePtr = nullptr;
    std::cout << "The value of age is " << age << std::endl;
    std::cout << "The memory address of age is " << &age << std::endl;

    std::cout << "The value of agePtr is " << agePtr << std::endl;

    agePtr = &age;
    std::cout << "The value of agePtr is " << agePtr << std::endl;
} */

//POINTER TYPE
/* int main() {
    int a = 31;
    double b = 432.2;
    std::string name = "Bob";

    int *aPtr = &a;
    double *bPtr = &b;
    std::string *namePtr = &name;

    std::cout << aPtr << std::endl;
    std::cout << bPtr << std::endl;
    std::cout << namePtr << std::endl;

    return 0;
} */

//PRINT VALUE
/* int main () {
    int age = 31;
    int *agePtr = &age;

    std::cout << *agePtr << std::endl;
} */

//CHANGE VALUE
/* int main () {
    float temperature = 21.3;
    float *tempPtr = &temperature;

    float change = 15.8;
    float *tempChange = &change;

    *tempPtr = *tempChange;
    std::cout << *tempPtr << std::endl;

    return 0;
} */

//ADDING
/* int main() {
    int a = 20;
    int b = 17;
    int *aPtr = &a;
    int *bPtr = &b;

    std::cout << *aPtr + *bPtr << std::endl;

    return 0;
} */