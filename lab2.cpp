#include <iostream>


using namespace std;

int main(int argc, char * argv[]) {
	int grades[15] = {  55, 87, 93, 77, 92, 88, 67, 81, 84, 73, 81, 92, 89, 100, 62 };
	//show_grades(grades, 15);
	show_highgrade(grades, 15);
	show_lowgrade(grades, 15);
	show_lettergrades(grades, 15);

}
