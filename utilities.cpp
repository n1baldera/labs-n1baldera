#include <iostream>
using namespace std;

void show_grades(int data[], int num_values) {
    for(int i=0;i<num_values;i++) {
        cout << data[i] << endl;
    }
}

void show_highgrade(int data[], int num_values) {
	int lowestgrade = 0;
    for(int i=0;i<num_values;i++) {
        if(lowestgrade < data[i]){
			lowestgrade = data[i];
		}
    }
	cout << "Highest grade is: " << lowestgrade << endl;
}

void show_lowgrade(int data[], int num_values) {
	int highestgrade = 9000;
	
    for(int i=0;i<num_values;i++) {
        if(highestgrade > data[i]){
			highestgrade = data[i];
		}
    }
	cout << "Lowest grade is: " << highestgrade << endl;
}

void show_lettergrades(int data[], int num_values) {
    for(int i=0;i<num_values;i++) {
		if(data[i] >= 90) {
			cout << "Grade is an A: " << data[i] << endl;
		} else if (data[i] >= 80) {
			cout << "Grade is an B: " << data[i] << endl;
		} else if (data[i] >= 70) {
			cout << "Grade is an C: " << data[i] << endl;
		} else if (data[i]  <= 69) {
			cout << "Grade is an F: " << data[i] << endl;
		}
    }
}