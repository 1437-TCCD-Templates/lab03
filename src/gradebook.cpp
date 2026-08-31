/**
 * @mainpage Gradebook
 *
 * @section overview Project Overview
 * Welcome to the project documentation.
 *
 * - Click here to view the source file documentation: @ref gradebook.cpp
 */

/**
 * @file gradebook.cpp
 * @author Michael Nutt
 * @date 2026-08-31
 * @brief Functions for the gradebook project
 *
 * This file is the implementation of all the gradebook functions for this project.
 * */

#include <iostream>
#include <string>

/**
 * @brief Calculates the selected students average
 *
 * This function takes the scores 2d array and calculates the student's average.
 *
 * @param[in] scores The array of student/assignment scores
 * @param[in] studentIndex Index of the row of student data
 * @param[in] assignmentCount Number of assignments to iterate through
 * @return The average of the student grades
 */
double studentAverage(double** scores, int studentIndex, int assignmentCount);

/**
 * @brief Determines the average of selected assignment
 *
 * This function loops through the student scores of the specified assignment and calculates the average
 * of the scores stored.
 *
 * @param[in] scores The array of student/assignment scores
 * @param[in] assignmentIndex The index of the assignment to generate the average for
 * @param[in] studentCount The number of students to iterate through
 * @return The average grade of the assignment
 */
double assignmentAverage(double** scores, int assignmentIndex, int studentCount);

/**
 * @brief Finds the highest and lowest grades for a given student
 *
 * Iterates through all assignments and finds the highest and lowest assignment grades for a given
 * student.
 *
 * @param[in] scores The array of student/assignment scores
 * @param[in] studentIndex The index of the student to find the grades for
 * @param[in] assignmentCount The number of assignments in the scores array
 * @param[out] lowest Variable passed by reference to contain the lowest score
 * @param[out] highest Variable passed by reference to contain the highest score
 */
void findExtremes(double** scores, int studentIndex, int assignmentCount, double &lowest, double &highest);

/**
 * @brief Returns the letter grade from the numeric average
 *
 * This function returns the character letter grade based on the numeric average passed in.
 *
 * @param[in] average The numeric average passed in
 * @return The character letter grade received
 */
char letterGrade(double average);

/**
 * @brief Returns the numeric gradepoints for the letter grade
 *
 * @param[in] letter The character letter grade the student received
 * @return The numeric grade point average received
 */
double gradePoints(char letter);

/**
 * @brief 
 */
int countGrade(double** scores, int studentCount, int assignmentCount, double target);

double classAverage(double** scores, int studentCount, int assignmentCount);

bool hasPerfectScore(double** scores, int studentIndex, int assignmentCount);

bool isAtRisk(double** scores, int studentIndex, int assignmentCount);

std::string initialsOf(std::string fullName);

std::string padName(std::string fullName, int width);

void printHeader(int assignmentCount);

void printStudentRow(std::string* names, double** scores, int studentIndex, int assignmentCount);

void printHistogram(double** scores, std::string* names, int studentCount, int assignmentCount);

void printAssignmentSummary(double** scores, int studentCount, int assignmentCount);

void printRoster(std::string names, int studentCount);

constexpr int STUDENT_COUNT = 6;
constexpr int ASSIGNMENT_COUNT = 5;
constexpr int NAME_WIDTH = 14;

int main(int argc, char** argv) {

    std::string* names = [
        "Ada Lovelace", "Grace Hopper", "Alan Turing", "Katherine Johnson", "Linus Torvalds", "Barbara Liskov"
    ];

    return 0;
}
