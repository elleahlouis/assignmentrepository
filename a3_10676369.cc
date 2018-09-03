#include <iostream>

using namespace std;

int main()
{
    double grade;
    cout<< "Please enter grade";
    cin>>grade;
    if( (grade >80) && (grade <100) )
       {
       cout<< "Grade A: ";
       }
       else if( (grade >75) && (grade <79) )
        {
        cout<< "Grade B+: ";
        }
       else if( (grade >74) && (grade <70) )
        {
        cout<< "Grade B: ";
       }
       else if( (grade >69) && (grade <65) )
        {
        cout<< "Grade C+: ";
       }
       else if( (grade >64) && (grade <60) )
        {
        cout<< "Grade C: ";
       }
       else if( (grade >59) && (grade <55) )
        {
        cout<< " Grade D+ ";
       }
       else if ( (grade >54) && (grade <50) )
        {
        cout<< " Grade D: ";
       }
       else if( (grade >49) && (grade <45) )
        {
        cout<< " Grade E:";
       }
       else if( (grade >44) && (grade <0) )
        {
        cout<< "Grade F: ";
       }
    return 0;
}
