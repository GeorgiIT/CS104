// 2.PersonalFinances
#include <iostream>
using namespace std;
int main()
{
   
    int menu;
    float rate;
    float investment;


    //����
    cout << "Presonal Finances 1.0 Main Menu:" << endl;
    cout << "1.Presonal Finances" << endl;
    cout << "2.Personal Homeover" << endl;
    cout << "3.Personal Gold" << endl;
    cout << "4.Small Business" << endl;
    cout << "5.Big Business" << endl;
    cout << "6.Gold Business" << endl;
    cout << "Make uoyr choise:";
    cin >> menu;
    cout << "Please enter your investment sum:";
    cin >> investment;
    /*
    if (menu == 1)rate = 2.3;
    else if (menu == 2) rate = 2.6;
    else if (menu == 3)rate = 2.9;
    else if (menu == 4)rate = 3.3;
    else if (menu == 5)rate = 3.5;
    else if (menu == 6)rate = 3.8;
    */
   switch (menu)
    {
    case1:
        {
            rate = 2.3;
            break;
        }
    case2:
        {
            rate = 2.6;
            break;
        }
    
    case3:
        {
            rate = 3.3;
            break;
        }
    case4:
        {
            rate = 3.5;
            break;
        }
    case5:
        {
            rate = 3.9;
            break;
        }
    case6:
        {
            rate = 3.9;
            break;
        }
    }//
       
    
    
    
    float sum = investment + (investment * rate) / 100;
    cout << "Deposit total:" << sum << endl;


    return 0;



}