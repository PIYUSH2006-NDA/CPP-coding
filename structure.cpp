#include <iostream>
#include <string>  
using namespace std;

struct emp {
    int id;
    int sal;
    char name[20];
    string mob; 
};

int main() {
    int n;
    cout << "Enter the number of employees: ";
    cin >> n;

    emp s[n]; 

    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for employee " << i + 1 << ":\n";

        cout << "Enter employee ID: ";
        cin >> s[i].id;

        cout << "Enter employee salary: ";
        cin >> s[i].sal;

        cout << "Enter employee name: ";
        cin >> s[i].name;

        cout << "Enter employee mobile number: ";
        cin >> s[i].mob;

        if (s[i].mob.length() != 10) {
            cout << "Invalid mobile number. Must be 10 digits.\n";
        }
    }

    cout << "\n----- Employee Details -----\n";
    for (int i = 0; i < n; i++) {
        cout << "\nEmployee " << i + 1 << ":\n";
        cout << "ID: " << s[i].id << endl;
        cout << "Salary: " << s[i].sal << endl;
        cout << "Name: " << s[i].name << endl;
        cout << "Mobile: " << s[i].mob << endl;
    }

    return 0;
}
