// Nubia Balderas Ibarra
// Cosc 1337
// Lab 1
// Finding the length of the hypotenuse of a right triangle

#include <iostream>
#include <cmath>
    using namespace std;

    int main()
    {
        double length1,length2,length3;
        int a = length1

        // do loop execution and ask user to enter 1st length
        do {
            cout<< "Please enter the length of first triangle side, a negative number will terminate:";
            cin >> length1;

        } while( a > 0 );
        // Ask user to input the second triangles side length
           cout << "Please enter the second length of the triangle side:";
           cin >> length2;

        //Compute the hypotenuse
        length3= sqrt(pow(length1,2)+ pow(length2,2));

        if(length1<= 0) {
            cout<<"NUMBER IS NOT VALID!!!";
        } else {
            if(length1>0) {
                cout<< "The length of the hypotenuse of a right triangle is: " <<length3<< std::endl;
            }
        }
        std::cout << "Thanks for visiting!" << std::endl;
    return 0;
}