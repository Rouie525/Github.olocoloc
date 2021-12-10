//Name: Kenn Rouie M. Oloc-oloc
//Activity Name: PT4
//Description: Case Study
//Date: December 12, 2021

#include <iostream>

using namespace std;

void promptAndWait();
void convert1 (float sci, float math, float eng, float fil, float rel);
void convert2 (float sci, float math, float eng);
void convert3 (float sci, float math, float eng, float fil);


int main(){
string name, section;
float sci, math, eng, fil, rel;
int ch, ans=0;

cout << "------10th Grade Grading System------" << endl; 
cout << "Enter the Name of the Student: ";
getline(cin,name);
cout << "Enter the Section of the Student: ";
cin >> section;

do{
    
       system("cls");
       cout << endl;
       cout << "Name: " << name << endl;
       cout << "Section: " << section << endl;
       cout << "<< Choose which Area needs to be Graded>>" << endl;
       cout << "[1] Academic Performance" << endl;
       cout << "[2] Character and Values" << endl;
       cout << "[3] Physical Education" << endl;
       cout << "[0] Exit Grading System App" << endl;
       cout << "Enter your choice: " << endl;
       cin >> ch;

       switch(ch){
           case 1:{
               cout << "\n<< Academic Performance Assessment  >>" << endl;
               cout << "The Passing Grade is 75" << endl;
               cout << "Enter Final Grade in Science: ";
               cin >> sci;
               cout << "Enter Final Grade in Mathematics: ";
               cin >> math;
               cout << "Enter Final Grade in English: ";
               cin >> eng;
               cout << "Enter Final Grade in Filipino: ";
               cin >> fil;
               cout << "Enter Final Grade in Religion: ";
               cin >> rel;
               promptAndWait();
               convert1(sci, math, eng, fil, rel);
               
               break;
           }
           case 2:{
               cout << "\n<< Character and Values Assessment >>" << endl;
               cout << "Enter Grade for Classroom Involvement: ";
               cin >> sci;
               cout << "Enter Grade for Campus Involvement: ";
               cin >> math;
               cout << "Enter Grade for Faculty Interaction: ";
               cin >> eng;
               promptAndWait();
               convert2(sci, math, eng);
               
               break;
           }
           case 3:{
               cout << "\n<< Physical Education Assessment >>" << endl;
               cout << "Enter Final Grade for 1st Quarter: ";
               cin >> sci;
               cout << "Enter Final Grade for 2nd Quarter: ";
               cin >> math;
               cout << "Enter Final Grade for 3rd Quarter: ";
               cin >> eng;
               cout << "Enter Final Grade for 4th Quarter: ";
               cin >> fil;
               promptAndWait();
               convert3(sci, math, eng, fil);
               
               break;
           }
           case 0:{
               
                cout << "Grading System Terminated";
                promptAndWait();
                return 0;
           } 
            default: {
               cout << "Invalid Input!";
               promptAndWait();
               return 0;
           }  
       }
   }while(ans = 0); 
}

void promptAndWait () {
    cin.ignore(100, '\n');
    cout << "\nPress Enter or Return to continue..." << endl;
    cin.get();
    }

void convert1 (float sci, float math, float eng, float fil, float rel)
{
    cout << "Grade in Science " << sci << endl;
    cout << "Grade in Mathematics " << math << endl;
    cout << "Grade in English " << eng << endl;
    cout << "Grade in Filipino " << fil << endl;
    cout << "Grade in Religion " << rel << endl;

    float result;
    result =  (sci + math + eng + fil + rel) / 5;
    cout << "<< The Final Average Grade: " << result << endl;
    if (result > 75)
    {
        cout << "PASSED"; 
    if (result < 75){
        cout << "FAILED";
    }
    }
    
}
void convert2 (float sci, float math, float eng)
{
    cout << "Grade in Classroom Involvement: " << sci << endl;
    cout << "Grade in Campus Involvement: " << math << endl;
    cout << "Grade in Faculty Interaction: " << eng << endl;

    float result;
    result =  (sci + math + eng) / 3;
    cout << "Final Character and Values Average Grade: " << result <<  endl;
    if (result > 75)
    {
        cout << "PASSED";  
    if (result < 75){
        cout << "FAILED";
    }
    }
    
}
void convert3 (float sci, float math, float eng, float fil)
{
    cout << "Final Grade for 1st Quarter: " << sci << endl; 
    cout << "Final Grade for 2nd Quarter: " << math << endl;
    cout << "Final Grade for 3rd Quarter: " << eng << endl;        
    cout << "Final Grade for 4th Quarter: " << fil << endl;

    float result;
    
    result = (sci + math + eng + fil) / 4;
    cout << "Final Physical Education: " << result  << endl;
    if (result > 75)
    {
        cout << "PASSED";  
    if (result < 75){
        cout << "FAILED";
    }
    }
    
}

