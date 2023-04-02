#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include "GPA_Functions.hpp"

using namespace std;

// Name Constructor
Cgpa::Cgpa(string new_name) {

	name = new_name;

}

// Intake Coure Name and Grade Method
void Cgpa::add_course(string new_course, int new_grade) {

	int check = 0;

	for (int i = 0; i < courses.size(); i++)

		if (courses[i] == new_course) {

			grades[i] = new_grade;

			check++;

			break;

		}

	if (check == 0) {

		courses.push_back(new_course);

		grades.push_back(new_grade);

	}

}

// Output GPA
void Cgpa::view_gpa() {

	for (int grade = 0; grade < grades.size(); grade++) {

		grade_average += grades[grade];

	}

	grade_average /= grades.size();

	if (grade_average >= 93) {
		gpa = 4.0;
	}
	else if (grade_average >= 90) {
		gpa = 3.7;
	}
	else if (grade_average >= 87) {
		gpa = 3.3;
	}
	else if (grade_average >= 83) {
		gpa = 3.0;
	}
	else if (grade_average >= 80) {
		gpa = 2.7;
	}
	else if (grade_average >= 77) {
		gpa = 2.3;
	}
	else if (grade_average >= 73) {
		gpa = 2.0;
	}
	else if (grade_average >= 70) {
		gpa = 1.7;
	}
	else if (grade_average >= 67) {
		gpa = 1.3;
	}
	else if (grade_average >= 63) {
		gpa = 1.0;
	}
	else if (grade_average >= 60) {
		gpa = 0.7;
	}
	else if (grade_average < 60) {
		gpa = 0.0;
	}
	else {
		cout << "Something Went Wrong!";
	}

	cout << name + ", your cumulative GPA currently is: \n\n";
	cout << fixed << setprecision(1) << gpa << "\n\n";


}

string Cgpa::view_courses_grades() {

	string list_grades = name + ", your current grades are: \n\n";

	for (int i = 0; i < courses.size(); i++) {

		list_grades += courses[i] + " " + to_string(grades[i]) + "\n\n";

	}

	return list_grades;

}