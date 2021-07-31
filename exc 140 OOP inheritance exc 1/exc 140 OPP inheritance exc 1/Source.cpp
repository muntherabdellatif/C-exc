#include"Person.h"
#include"Studant.h"
#include"Employee.h"
#include"Hourly_Employee.h"
int main() {
	string line = "\n----------------------------------------------------\n";
	cout << "person munther :" << endl;
	Person munther("monther", 27, "amman sahab", "jordanian");
	munther.print();
	cout << line;
	cout << "studant Ali :" << endl;
	Studant Ali("Ali",26,"amman","jordanian",12,"sciantific",85);
	Ali.print();
	cout << line;
	cout << "unknown person:" << endl;
	Person unknown;
	unknown.print();
	cout << line;
	cout << "unknown Studant :" << endl;
	Studant unknownStudant;
	unknownStudant.print();
	cout << line;
	cout << "mohammad employee" << endl;
	Employee mohammad("mohammad", 30, "irbed", "egyptian", 700, "team Leader", "engineer");
	mohammad.print();
	cout << line;
	cout << "malik hourly employee" << endl;
	Hourly_Employee malik("malek", 34, "Amman", "jordanian", 700, "worker", "paint agent", 4, 5);
	malik.print();
}