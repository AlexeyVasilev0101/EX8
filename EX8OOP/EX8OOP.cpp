#include "Source.h"

int main()
{
    Student Alexey;
    cin >> Alexey;
    cout << Alexey;
    cout << endl;
    Student Maksim;
    cin >> Maksim;
    Alexey = Maksim;
    cout << Alexey << endl;
}