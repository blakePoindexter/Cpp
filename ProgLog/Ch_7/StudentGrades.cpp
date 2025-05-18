// Student Grade Program - Allows an instructor to enter mid-term and final grades and then displays average of them
// Author - Blake Poindexter
// Date - 03/09/2024

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    double midTerm = 0.0;
    double finalGrade = 0.0;    // initialize variables
    double average = 0.0;
    char repeat = 'Y';
    char letterGrade = 'X';


    // start program header code
    for(int x = 0; x < 61; x += 1)
        cout << "*";
    cout << endl << endl;
    cout << setw(42);
    cout << "Student Grades Program" << endl << endl;
    for(int x = 0; x < 61; x += 1)
        cout << "*";
    cout << endl;
    // end program header code    


    cout << "Do you want to enter a student's grades? (Y or N): ";  // priming read prompt
    cin >> repeat;  
    repeat = toupper(repeat);   //toupper for priming read comparison in while loop pretest


    while (repeat == 'Y')   //start while loop
    {
        cout << "Enter the mid-term grade: ";       //prompt for mid-term
        cin >> midTerm;
        // if(midTerm < 0 || midTerm > 100)
          //  cout << "Please enter a valid grade (0 - 100)." << endl;;

        cout << "Enter the final grade: ";      //prompt for final grade
        cin >> finalGrade;
        if(finalGrade < 0 || finalGrade > 100)
            cout << "Please enter a valid grade (0 - 100)." << endl;

        average = (midTerm + finalGrade) / 2.0;   //compute average using double

        //start if for letter grade
        if(average >= 90) 
            letterGrade = 'A';
        else if(average >= 80)
            letterGrade = 'B';
        else if(average >= 70) 
            letterGrade = 'C';
        else if(average >= 60) 
            letterGrade = 'D';
        else
            letterGrade = 'F';
        // end if-else structure

        cout << "The average of the grades is: " << setprecision(1) << fixed << average << endl;        //display average
        cout << "The final grade is: " << letterGrade << endl;       //display final letter grade

        cout << "Do you want to enter a student's grades? (Y or N): ";  // update read prompt
        cin >> repeat; 
        repeat = toupper(repeat);        
    } //end while loop


    // start program footer code
    for(int x = 0; x < 61; x += 1)
        cout << "*";
    cout << endl << endl;
    cout << setw(42);
    cout << "Student Grades Program End" << endl << endl;
    for(int x = 0; x < 61; x += 1)
        cout << "*";
    cout << endl;
    // end program footer code

    
    return 0;
} // end main