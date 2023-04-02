#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Cgpa {
	
private:

	string name;
	vector<string> courses;
	vector<int> grades;
	int grade_average;
	double gpa;

public:

	Cgpa(string new_name);

	void add_course(string new_course, int new_grade);

	void view_gpa();

	string view_courses_grades();

};