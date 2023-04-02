// CGPA_Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "GPA_Functions.hpp"

using namespace std;

int main()
{

	string name;
	string course;
	int grade;
	int yn = 1;
	bool check = true;

	cout << "Please enter your name: \n";

	cin >> name;

	Cgpa student_one(name);

	while (check) {

		if (yn == 1) {

			cout << "\nPlease enter your course name: \n";

			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			
			getline(cin, course);

			cout << "\nPlease enter the course grade: \n";

			cin >> grade;

			cout << "\nDo you have more grades to enter? \n\n"
				<< "Enter 1 for yes or 2 for no \n";

			cin >> yn;

			student_one.add_course(course, grade);

			check = true;

		}
		else {

			check = false;

		}

	}

	cout << "\n" + student_one.view_courses_grades();

	student_one.view_gpa();

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
