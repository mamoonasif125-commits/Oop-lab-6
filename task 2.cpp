#include <iostream>
using namespace std;
class Sum
{
private:
 static int total;
public:
 void addNumber(int num)
 {
 total = total + num;
 cout << "The current total is " << total << endl;
 }
};
int Sum::total = 0;
int main()
{
 Sum obj;
 int num;
 cout << "***Static Variables***" << endl;
 cout << "Please enter 5 numbers to be summed" << endl;
 for (int i = 0; i < 5; i++)
 {
 cout << "Enter a number: ";
 cin >> num;
 obj.addNumber(num);
 }
 cout << "Program completed" << endl;
 return 0;
}
