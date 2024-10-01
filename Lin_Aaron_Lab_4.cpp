// Aaron Lin
// 10/01/2024
// Lab 4

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

//beginning of code
int main() 
{
    string fruit; //fruit name
    bool answer1 = 1; //true
    double grams; //grams of a sugar

    while(answer1 == 1) //runs the code when user input 1
    {    
        cout << "\nWhat is your fruit and how much grams of sugar does it have?" << endl; //question
        cin >> fruit >> grams; //user input fruit name and grams of sugar

        if (grams<10) //if grams is less than 10
                cout << "\n" << fruit << " is a LOW SUGAR FRUIT" << endl; //prints fruit name and states that it is a LOW SUGAR FRUIT
        else if (grams>=10 && grams<=14) //if grams of sugar is greater than or equal to 10 and less than or equal to 14
                cout << "\n" << fruit << " is a MEDIUM SUGAR FRUIT" << endl; //prints fruit name and states it is a MEDIUM SUGAR FRUIT
        else //if the grams of sugar is greater than 14
	    cout << "\n" << fruit << " is a HIGH SUGAR FRUIT" << endl; //prints fruit name and states it is a HIGH SUGAR FRUIT

        cout << "Do you want to restart the question? (type: 1 for yes or 0 for no)" << endl; //question
        cin >> answer1; //user input 1 or 0

        if(answer1 == 0) //if user input 0
            cout << "Okay, have a nice day, goodbye!!!" << endl; //prints Okay, have a nice day, goodbye!!!
    }   

    return 0; //end of code

}
/*
What is your fruit and how much grams of sugar does it have?
grape 10

grape is a MEDIUM SUGAR FRUIT
Do you want to restart the question? (type: 1 for yes or 0 for no)
1

What is your fruit and how much grams of sugar does it have?
mango 13

mango is a MEDIUM SUGAR FRUIT
Do you want to restart the question? (type: 1 for yes or 0 for no)
0
Okay, have a nice day, goodbye!!!
*/