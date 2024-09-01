/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
     double fahrenheit,celcius;

    cout << "masukan suhu dalam derajat fahrenheit ";
    cin >> fahrenheit;
    
    celcius = (fahrenheit-32)*5/9;

    cout << fixed << setprecision(2);
    cout << "suhunya adalah " << celcius << " celcius, ";
    
    if (celcius >= 100) {
        cout << "Artinya Air udah mendidih yagesyak" << endl;
    } else {
        cout << "Artinya Air belum mendidih" << endl;
    
    return 0;
}}
