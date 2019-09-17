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

//POINTERS AND FUNCTIONS
/* void multiplybytwo(int *intPtr) {
    *intPtr *= 2;
}
int main () {
    int number = 10;

    std::cout << "Value of the variable number is: " << number << std::endl;
    multiplybytwo(&number);
    std::cout << "Value of the variable number is: " << number << std::endl;

    int *intPtr = &number;

    multiplybytwo(intPtr);
    std::cout << "Value of the variable number is: " << number << std::endl;

    return 0;
} */
/*int *whichIsBigger(int *intPtr1, int *intPtr2) {
    if (*intPtr1>*intPtr2) {
        return intPtr1;
    } else {
        return intPtr2;
    }
}
int main() {
    int a = 77;
    int b = 18;

    int *biggerNumberPtr = nullptr;
    biggerNumberPtr = whichIsBigger(&a, &b);
    std::cout << "The bigger number is: " << *biggerNumberPtr << std::endl;

    return 0;
} */

//MIN AND MAX FINDER IN ONE
//SOLUTION POINTERS ONLY - FOR STUDYING
/* int main()
{
    int array[50], *max, *min, size, i;
    std::cout<<"Enter the number of elements in array\n";
    std::cin>>size;
    std::cout<<"Enter array elements\n";
    for ( i = 0 ; i < size ; i++ )
        std::cin>>array[i];
    max = array;
    min = array;
    for (i = 0; i < size; i++)
    {
        if (*(array+i) > *max)
            *max = *(array+i);
    }
    std::cout<<"Maximum element in the array is "<< *max << "\n" ;
    for (i = 0; i < size; i++) {
        if (*(array+i) < *min)
            *min = *(array+i);
    }
    std::cout <<"Minimum element in the array is "<< *min <<"\n";
    return 0;
} */

//SOLUTION WITH FUNCTION
/* int FindMax(int a[],int n)
{
    int i, max;
    max = a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>max)
            max =a[i];
    }
    return max;
}

int FindMin(int a[],int n)
{
    int i, min;
    min = a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]<min)
            min =a[i];
    }
    return min;
}
int main()
{
    int i, array[50], size, max, min;

    std::cout<<"Input number of elements in array\n";
    std::cin>>size;

    std::cout<<"Enter "<< size << " integers\n";
    for(i=0;i<size;i++)
        std::cin>>array[i];

    max = FindMax(array,size);
    min = FindMin(array,size);
    int *maxPtr = &max;
    int *minPtr = &min;

    std::cout<<"Maximum element in the array is: " << *maxPtr << "\n";
    std::cout<<"Minimum element in the array is: " << *minPtr << "\n";

    return 0;
} */

//SWAP
/* void swapdat(int *skra, int *skija) {
    int temp = *skra;
    *skra = *skija;
    *skija = temp;
    return;
}
int main() {
    int papappa = 10;
    int siquidippapa = 316;

    swapdat(&papappa, &siquidippapa);
    std::cout << "papappa = " << papappa << " siquidippapa= " << siquidippapa << std::endl;

    return 0;
} */

//PRINT ADDRESSES
/* int main () {
    int array[5], size = 5;
    std::cout<<"Enter 5 integers\n";
    for(int i=0; i < size; i++) {
        std::cin>>array[i];
    }
    for (int j = 0; j < size; ++j) {
        std::cout << &array[j] << std::endl;
    }
    return 0;
} */

//FIVE NUMBERS
/* int main () {
    int array[5], size = 5;
    std::cout << "Enter 5 integers\n";
    for (int i = 0; i < size; i++) {
        std::cin >> array[i];
    }
    for (int j = 0; j < size; ++j) {
        int *arrayptr = &array[j];
        std::cout << arrayptr << std::endl;
    }
    return 0;
} */

//LOOK FOR VALUE
/* int main() {
    int array[50], size, number;

    std::cout<<"Enter the number of elements in array\n";
    std::cin>>size;

    std::cout<<"Enter array elements\n";
    for (int i = 0 ; i < size ; i++ ) {
        std::cin >> array[i];
    }

    std::cout<<"Enter the number you're looking for\n";
    std::cin>>number;

    int j = 0;
    for (j= 0; j < size; ++j) {
        if (array[j]==number) {
            break;
        }
    }
    if (j < size){
        std::cout << number << " is at " << j << " in the array.";
    } else {
        std::cout << "Not present\n";
    }

    return 0;
} */