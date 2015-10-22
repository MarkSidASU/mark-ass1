#include <iostream>
#include <string>
using namespace std;

class Person {
private:
	static const int LIMIT = 25;
	string lname; // Person’s last name
	char fname[LIMIT]; // Person’s first name 

public:
	Person()
	{
		lname = "";

		fname[0] = '\0';
	} // #1 
	Person(const string & ln, const char * fn = "Heyyou"){
		lname = ln;
		for (int i = 0; i < LIMIT; i++) {
			fname[i] = fn[i];
		}
	}// #2
	// the following methods display lname and fname
	
	void Show() const{	// firstname lastname format
		cout << fname;
		cout << lname;
	}
	
	void FormalShow() const // lastname, firstname format
	{
	
		cout << lname << ",";
			cout << fname;
			
	}
};
void main(){
	Person one; // use default constructor
	Person two("Smythecraft"); // use #2 with one default argument _ lname
	Person three("Dimwiddy", "Sam"); // use #2, no defaults _lname &fname
	one.Show();
	cout << endl;
	one.FormalShow();
	cout << endl;
	two.Show();
	cout << endl;
	two.FormalShow();
	cout << endl;
	three.Show();
	cout << endl;
	three.FormalShow();
	cout << endl;
	system("Pause");
}
