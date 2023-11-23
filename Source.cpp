#include<iostream>
using namespace std;
int main() {
	double current_salary, number_of_years, increment_percentage, bonus, exceptional_rating, new_salary;
	cout << "enter the current_salary ";
	cin >> current_salary;
	cout << "enter the number_of_years";
	cin >> number_of_years;
	for (int years = 1; years<=number_of_years;years++) {
		increment_percentage = current_salary * 0.05;
		cout << "does the employee have an exceptional_rating?(yes/no):";
		cin >> exceptional_rating;
		if (exceptional_rating== 'yes') {
			bonus = current_salary * 0.02;
		}
		else {
			double increment_amount=current_salary*(bonus/100);
		}
		new_salary = current_salary + increment_percentage + bonus;
		cout << "year" << years << endl;
		cout << "new_salary" << new_salary << endl;
			current_salary = new_salary;
	}

	return 0;
}