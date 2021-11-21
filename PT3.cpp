//Name: Kenn Rouie M. Oloc-oloc
//Activity Name: PT3
//Description: Salary Program in C++
//Date: November 21, 2021

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string name;
    int num_hours_work;
    int idnumber;
    float tax;
    float tax1;
    double rate_per_hour;
    double gross_pay;
    double net_pay;

    

    cout << "Enter Employee Name:      ";
    getline(cin,name);
    cout << "Enter Employee ID number: ";
    cin >> idnumber;
    cout << "\n----------------" << endl;
    cout << "Enter Number of Hours Worked: ";
    cin >> num_hours_work;
    cout << "Enter Rate per Hour:          ";
    cin >> rate_per_hour;

    gross_pay = (rate_per_hour * num_hours_work);
    
    if(num_hours_work ==0 || rate_per_hour == 0) { //no input was added
        cout << "You did not input anything";
        return 0;

    }
    else if(gross_pay > 40000){
        tax = 0.12;
        tax1 = ((rate_per_hour * num_hours_work) * (tax));
        net_pay = (rate_per_hour * num_hours_work) - ((rate_per_hour * num_hours_work) * (tax));

    }
    else if(gross_pay > 20000 || 40000){
        tax = 0.10;
        tax1 = ((rate_per_hour * num_hours_work) * (tax));
        net_pay = (rate_per_hour * num_hours_work) - ((rate_per_hour * num_hours_work) * (tax));
    
    }
    if(gross_pay < 20000){
        tax = 0.05;
        tax1 = ((rate_per_hour * num_hours_work) * (tax));
        net_pay = (rate_per_hour * num_hours_work) - ((rate_per_hour * num_hours_work) * (tax));
    
    }

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    ofstream reciept ("Reciepts.txt", ios::app);
    
    reciept << "\n------------------------------" << endl;
    reciept << "\n------SALARY TRANSACTION------" << endl;
    reciept << "\n------------------------------" << endl;
    reciept << "Employee Name:          " << name << endl;
    reciept << "Employee ID Nume:       " << idnumber << endl;
    reciept << "Number of Hours Worked: " << num_hours_work << endl;
    reciept << "Rate per Hour:          " << rate_per_hour << endl;
    reciept << "Total Gross Pay:        " << gross_pay << endl;
    reciept << "Tax:                    " << tax << endl;
    reciept << "Total Tax:              " << tax1 << endl;
    reciept << "Total Net Pay:          " << net_pay << endl;

    cout << "\n------------------------------" << endl;
    cout << "\n------SALARY TRANSACTION------" << endl;
    cout << "\n------------------------------" << endl;
    cout << "Employee Name:          " << name << endl;
    cout << "Employee ID Nume:       " << idnumber << endl;
    cout << "Number of Hours Worked: " << num_hours_work << endl;
    cout << "Rate per Hour:          " << rate_per_hour << endl;
    cout << "Total Gross Pay:        " << gross_pay << endl;
    cout << "Tax:                    " << tax << endl;
    cout << "Total Tax:              " << tax1 << endl;
    cout << "Total Net Pay:          " << net_pay << endl;
    
    return 0;
}