#include <iostream>
#include <string>
#include <fstream>
using namespace std;
class employee {
public:
    employee() {
        cout << "Name: "; cin >> Name;
        cout << "Experience: "; cin >> Experience;
        cout << "Hourly_Wag: "; cin >> Hourly_Wag;
        cout << "Hours worked: "; cin >> Hours;
        Salary = Hourly_Wag * Hours;
        switch (Experience)
        {
        case 0:  Premy = 0;
        case 1:  Premy = Salary * 0.05; 
            break;
        case 2:  Premy = Salary * 0.05;
            break;
        case 4:  Premy = Salary * 0.08;
            break;
        case 5:  Premy = Salary * 0.08;
            break;
        default: Premy = Salary * 0.15; 
            break;
        }
    }
    void print(employee& x) {
        cout << "\nName: " << x.Name
            << "\nExperience: " << x.Experience
            << "\nHourly Wag:" << x.Hourly_Wag
            << "\nHours: " << x.Hours
            << "\nSalary: " << x.Salary
            << "\nPremy: " << x.Premy << endl;
    }
    void fprint(employee& x) {
        ofstream F("Emplpyers.txt", ios::app);
        F << Name << "\nExperience: " << Experience
            << "\nHourly Wag: " << Hourly_Wag
            << "\nHours worked: " << Hours
            << "\nSalary: " << Salary
            << "\nPremy: " << Premy << endl << endl;
        F.close();
    }
private:
    string Name;
    int Experience;
    int Hourly_Wag;
    int Hours;
    int Salary;
    double Premy;

};
int main()
{
    
    employee x;
    x.print(x);
    x.fprint(x);
    return 0;
}