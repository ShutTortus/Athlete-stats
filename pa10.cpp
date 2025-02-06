/**
 * @file pa10.cpp
 * @author Daniel O'Neill
 * @date 9/4/2024
 * @section 1003
 *
 * @note I pledge my word of honor that I have abided by the
 * CSN Academic Integrity Policy while completing this assignment.
 *
 * @brief this program is designed to manage athlete data using class commands
 */

#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>
#include <iomanip>
#include <cmath>
#include <cassert>

#include "Athlete.h"

using namespace std;



int main() {
    Athlete athlete[2];

    int id[2];
    string NM[2];
    double SC[2][5];

    for (int i = 0; i <= 1; i++)
    {
        cin >> NM[i] >> id[i];
        for (int x = 0; x < 5; x++)
        {
            cin >> SC[i][x];
        }
    }

    for (int i = 0; i <= 1; i++)
    {
        athlete[i].name(NM[i]);
        athlete[i].id(id[i]);
        for (int x = 0; x < 5; x++)
        {
            athlete[i].at(x, SC[i][x]);
        }
    }
    for (int i = 0; i <= 1; i++)
    {
        cout << fixed << showpoint << setprecision(1);
        cout << "Athlete: " << athlete[i].name() << ", ";
        cout << "ID: " << athlete[i].id() << endl;
        cout << "Scores: ";
        for (int x = 0; x < 5; x++)
        {
            cout << athlete[i].at(x);
            if (x < 4)
            {
                cout << " ";
            }
        }
        cout << endl;
        cout << "Min: " << athlete[i].min_score() << ", ";
        cout << "Max: " << athlete[i].max_score() << ", ";
        cout << "Avg: " << athlete[i].average_score();
        cout << endl;
        if (i == 0)
        {
            cout << endl;
        }
    }


    return 0;
}
