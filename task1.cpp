#include <iostream>
#include <string>
using namespace std;
class SavingsAccount
{
private:
 double savingBalance;
 static double annualInterestRate;
public:
 SavingsAccount(double balance)
 {
 savingBalance = balance;
 }
 static void setAnnualInterestRate(double rate)
 {
 annualInterestRate = rate;
 }
 void monthlyInterest()
 {
 double interest;
 interest = savingBalance * annualInterestRate / 12;
 savingBalance = savingBalance + interest;
 }
 void displayBalance()
 {
 cout << "Current Balance: " << savingBalance << endl;
 }
};
double SavingsAccount::annualInterestRate = 0.0;
int main()
{
 SavingsAccount saver1(2000.0);
 SavingsAccount saver2(3000.0);
 SavingsAccount::setAnnualInterestRate(0.04);
 cout << "After calculating monthly interest:\n";
 saver1.monthlyInterest();
 saver2.monthlyInterest();
 saver1.displayBalance();
 saver2.displayBalance();
 return 0;
}
