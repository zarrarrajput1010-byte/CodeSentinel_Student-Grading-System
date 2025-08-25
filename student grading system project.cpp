#include<iostream>
#include<string>
using namespace std;

int main() {
	int numStudents;
	
	cout << "Enter the number of students: ";
	cin >> numStudents;
	
	string names[numStudents];
	float marks[numStudents][3];
	float averages[numStudents];
	char grades[numStudents];
	
	for (int i = 0; i < numStudents; i++) {
		cout << "Enter name of student " << (i + 1) << ": ";
		cin >> names[i];
		
		float totalMarks = 0;
		for (int j = 0; j < 3; j++) {
			cout << "Enter marks for subject " << (j + 1) << ": ";
			cin >> marks[i][j];
			totalMarks += marks[i][j];
		}
		
		averages[i] = totalMarks / 3;
		
		if (averages[i] >= 70) {
			grades[i] = 'A';
		}
		else if (averages[i] >= 60) {
			grades[i] = 'B';
		}
		else if (averages[i] >= 50) {
			grades[i] = 'C';
		}
		else {
			grades[i] = 'F';
		}
	}
	
	cout << "\nstudent Results:\n";
	cout << "Name\t\tAverage\tGrade\n";
	cout << "-----------------------------------\n";
	for (int i = 0; i < numStudents; i++) {
		cout << names[i] << "\t\t" << averages[i] << "\t" << grades[i] << endl;
	}
	return 0;
}