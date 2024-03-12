// SubtractionTestMaker.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Author: Jeremy Burch

#include <iostream>
#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <algorithm>
#include <string>

using namespace std;


//Function that handles the random generation of numbers.
double random(int lim) {
    double a;
    a = rand() % lim;
    return a;
}

//Fuction to make the questions for the exam currently also gives the exam
void questionmaker(double z, double y) {
    vector<double> a(z);
    vector<double> b(z);
    vector<double> c(z);
    int i = 0;
    double answer;
    while (z > 0) {
        a[i] = random(y);
        b[i] = random(y);
        c[i] = a[i] - b[i];
        z--;
        i++;

    }
    for (i = 0; i <= z; i++)
    {
        cout << "What is the answer to this question" << endl;
        cout << a[i] << " - " << b[i] << " = "; cin >> answer;
    }
    if (answer == c[i]) {
        cout << "Correct" << endl;
    }
    else{
        cout << "Wrong" << endl;
    }
}

void qnumber() {

    long double questnum = 0; //creates variable for question numbers and makes it zero.
    int lim = 101; //creates variable for limit on randomizer and makes it 101 as the randomizer does not uses that last number input such as if 100 is selected only 0 - 99 will be used.
    int limdes = lim - 1; //Creates variable for correct display of the limit and makes it the limit minus on for the purpose of displaying the correct limit. 
    string in;

    cout << "Please submit the number of questions you want: ";
    cin >> questnum; //Gets number of questions

    cout << "Would you like to set a maximum number?\nCurrent limit is 0 through " << limdes << endl << "Please use Yes or No" << endl;
    cin >> in;

    transform(in.begin(), in.end(), in.begin(), ::tolower);

    if (in == "yes") {
        cout << "Please input limit" << endl;
        cin >> lim;
        lim++;
    }
    else {}

    questionmaker(questnum, lim);

}
/*most people forget to comment including me.
you don't think much off it until you look at someone else stuff and realize the are 3 times the madman that you are.
using comments are wonderful ways of saving old code that you may not want to get ride of.*/
int main()
{
    int a;
    srand(time(0));
    qnumber();
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
