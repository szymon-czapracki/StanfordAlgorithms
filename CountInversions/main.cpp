#include <iostream>
#include <vector>
#include <set>
#include <fstream>
#include "MergeSort.h"

/* General operations */
int main() {

    int temp_input;

    std::vector<int> to_count;

    /* Reading integers from file and pushing them into vector */
    std::ifstream infile("problem_file.txt");
    while (infile >> temp_input) {
        to_count.push_back(temp_input);
    }

    std::cout << "Inversions: "  << merge_sort(to_count) << "\n";

    return 0;
}

