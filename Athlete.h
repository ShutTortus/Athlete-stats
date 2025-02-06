/**
 * @file Athlete.cpp
 * @author Daniel O'Neill
 * @date 9/4/2024
 * @section 1003
 *
 * @note I pledge my word of honor that I have abided by the
 * CSN Academic Integrity Policy while completing this assignment.
 *
 * @brief this program is designed to declare the athlete class
 */

#ifndef ATHLETE_H
#define ATHLETE_H

#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>
#include <iomanip>
#include <cmath>
#include <cassert>


class Athlete
{
public:
    static const size_t CAPACITY = 5;  // Total number of scores allowed
    Athlete();
    Athlete(std::string, int, double);
    std::string name() const;             // gets the athletes name
    void name(const std::string& name);   // sets the athletes name
    int id();                             // gets the athletes id
    void id(int id);                      // sets the id
    double at(size_t index);              // gets the score
    void at(size_t index, double value);  // sets the score
    double min_score() const;             // finds the lowest score
    double max_score() const;             // finds the highest score
    double average_score() const;         // gets the average of the scores
private:
    std::string athlete_name;  // Athlete name
    int athlete_id;            // Athlete ID
    double scores[CAPACITY];   // Array of scores

};

#endif /* ATHLETE_H */
