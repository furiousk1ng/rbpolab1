#include <iostream>
#include <string>
using namespace std;
unsigned short personHeight;
unsigned short personWeight;

unsigned short ReadPersonAge()
{
unsigned short age;
cin >> age;
return age;
}
string ReadPersonName()
{
	string name;
	cin >> name;
	return name;
}

void ReadPersonHeight() {
	cin >> personHeight;
}

void ReadPersonWeight(unsigned short &weight) {
	cin >> weight;
}

void ReadPersonSalary(double *salary)
{
	cin >> *salary;
}
void ReadPersonData(string &name, unsigned short &age, double &salary)
{
	name = ReadPersonName();
	age = ReadPersonAge();
	ReadPersonSalary(&salary);
	
 }

void ReadPersonData(string &name, unsigned short &age, unsigned short &height, unsigned short &weight)
{
	name = ReadPersonName();
	age = ReadPersonAge();
	ReadPersonHeight();
	height = personHeight;
	ReadPersonWeight(weight);
	

}
void WritePersonData(unsigned short age, string &name, const string &height = "", const string &weight = "", const string & salary = "") {
	cout << name << endl << to_string(age) << endl << height << endl << weight << endl << salary << endl;
}

int main() {
	string name;
	unsigned short age, height, weight;
	double salary;
	cout << "Vvod:\n";
	ReadPersonData(name, age, salary);
	cout <<"\n" << "Vivod:\n";
	WritePersonData(age, name, "", "", to_string(salary));
	cout << "\n" << "Vvod:\n";
	ReadPersonData(name, age, height, weight);
	cout << "\n" << "Vivod:\n";
	WritePersonData(age, name, to_string(height), to_string(weight));
	return 0;
}