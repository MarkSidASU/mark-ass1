#include <iostream>
#include <string>
using namespace std;
class  bank_account {
private:
	string depositor_name;
	string account_number;
	int balance;
public:
	bank_account() : depositor_name(""), account_number("0"), balance(0)
	{}
	void display_dep(void){
		cout << depositor_name;
		cout << endl;
	}
	void display_account(void){
		cout << account_number;
		cout << endl;
	}
	void display_balance(void){
		cout << balance;
		cout << endl;
	}
	void deposite(int b){
		balance += b;
	}
	void withdraw(int d){
		balance -= d;
	}
};
void main(){
	bank_account first_account;
	first_account.display_dep();
	first_account.display_balance();
	first_account.deposite(100);
	first_account.display_balance();
	first_account.withdraw(50);
	first_account.display_balance();
	system("pause");
}

