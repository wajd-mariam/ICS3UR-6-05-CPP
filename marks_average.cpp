// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Mr. Coxall
// Created on: Dec 2019
// This program calculates average of all the marks enterd.

#include <iostream>
#include <list>


float Average(std::list<int> marks) {
    // This calculates average of the marks

    // process
    int total = 0;
    float average = 0;
    int number_of_marks = 0;

    for (int number : marks) {
        total = total + number;
        number_of_marks = number_of_marks + 1;
    }

    average = total / number_of_marks;

    return average;
}


int main() {
    // This takes the user's marks and passes them to average()

    std::list<int> marks;
    int a_single_mark = 0;
    int final_avg;


    while (a_single_mark != -1) {
        // input
        std::cout << "Mark: " << std::endl;
        std::cin >> a_single_mark;
        marks.push_back(a_single_mark);
    }

    marks.pop_back();

    final_avg = Average(marks);

    std::cout << "Your average is " << final_avg << "%"
              << std::endl;
}
