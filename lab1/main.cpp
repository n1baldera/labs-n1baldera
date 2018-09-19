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


        // Ask user to input one of the triangles side length
        cout<< "Please enter the length of first triangle side:";
        cin >> length1;
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