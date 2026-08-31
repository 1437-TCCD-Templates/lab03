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
#include <array>
#include <string>

/**
 * @brief Calculates the selected students average
 *
 * This function takes the& scores 2d array and calculates the student's average.
 *
 * @param[in]& scores The array of student/assignment& scores
 * @param[in] studentIndex Index of the row of student data
 * @param[in] assignmentCount Number of assignments to iterate through
 * @return The average of the student grades
 */
double studentAverage(const std::array<std::array<double, ASSIGNMENT_COUNT>, STUDENT_COUNT>& scores, int studentIndex, int assignmentCount);

/**
 * @brief Determines the average of selected assignment
 *
 * This function loops through the student& scores of the specified assignment and calculates the average
 * of the& scores stored.
 *
 * @param[in]& scores The array of student/assignment& scores
 * @param[in] assignmentIndex The index of the assignment to generate the average for
 * @param[in] studentCount The number of students to iterate through
 * @return The average grade of the assignment
 */
double assignmentAverage(const std::array<std::array<double, ASSIGNMENT_COUNT>, STUDENT_COUNT>& scores, int assignmentIndex, int studentCount);

/**
 * @brief Finds the highest and lowest grades for a given student
 *
 * Iterates through all assignments and finds the highest and lowest assignment grades for a given
 * student.
 *
 * @param[in]& scores The array of student/assignment& scores
 * @param[in] studentIndex The index of the student to find the grades for
 * @param[in] assignmentCount The number of assignments in the& scores array
 * @param[out] lowest Variable passed by reference to contain the lowest score
 * @param[out] highest Variable passed by reference to contain the highest score
 */
void findExtremes(const std::array<std::array<double, ASSIGNMENT_COUNT>, STUDENT_COUNT>& scores, int studentIndex, int assignmentCount, double &lowest, double &highest);

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
 * @brief Returns how many students earned target letter grade
 *
 * @param[in] scores The array of student/assignment& scores
 * @param[in] studentCount The number of students to iterate through
 * @param[in] assignmentCount The number of assignments to iterate through
 * @param[in] target The letter grade to look for
 */
int countGrade(const std::array<std::array<double, ASSIGNMENT_COUNT>, STUDENT_COUNT>& scores, int studentCount, int assignmentCount, char target);

/**
 * @brief Returns the class average across all
 */
double classAverage(const std::array<std::array<double, ASSIGNMENT_COUNT>, STUDENT_COUNT>& scores, int studentCount, int assignmentCount);

bool hasPerfectScore(const std::array<std::array<double, ASSIGNMENT_COUNT>, STUDENT_COUNT>& scores, int studentIndex, int assignmentCount);

bool isAtRisk(const std::array<std::array<double, ASSIGNMENT_COUNT>, STUDENT_COUNT>& scores, int studentIndex, int assignmentCount);

std::string initialsOf(std::string fullName);

std::string padName(std::string fullName, int width);

void printHeader(int assignmentCount);

void printStudentRow(const std::array<std::string, STUDENT_COUNT>&names, const std::array<std::array<double, ASSIGNMENT_COUNT>, STUDENT_COUNT>& scores, int studentIndex, int assignmentCount);

void printHistogram(const std::array<std::array<double, ASSIGNMENT_COUNT>, STUDENT_COUNT>& scores, const std::array<std::string, STUDENT_COUNT>&names, int studentCount, int assignmentCount);

void printAssignmentSummary(const std::array<std::array<double, ASSIGNMENT_COUNT>, STUDENT_COUNT>& scores, int studentCount, int assignmentCount);

void printRoster(std::string names, int studentCount);

constexpr int STUDENT_COUNT = 6;
constexpr int ASSIGNMENT_COUNT = 5;
constexpr int NAME_WIDTH = 14;

int main(int argc, char** argv) {

    std::array<std::string, STUDENT_COUNT> names = {
        "Ada Lovelace", "Grace Hopper", "Alan Turing", "Katherine Johnson", "Linus Torvalds", "Bill Gates"
    };

    std::array<std::array<double, ASSIGNMENT_COUNT>, STUDENT_COUNT>& scores = {{
        {  95.0, 88.5, 92.0, 78.0, 100.0 },
        {  72.5, 80.0, 68.0, 91.0,  85.5 },
        {  55.0, 62.5, 48.0, 70.0,  59.0 },
        { 100.0, 98.0, 95.5, 99.0,  97.0 },
        {  83.0, 79.5, 88.0, 84.0,  91.5 },
        {  45.0, 52.0, 61.0, 38.5,  55.0 }
    }};
    
    return 0;
}
