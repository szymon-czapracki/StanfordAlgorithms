#ifndef MERGE_SORT_H_
#define MERGE_SORT_H_

#include <iostream>
#include <vector>

/* Merge sort with inversion counting */
long int merge_sort(std::vector<int>& to_sort);
long int sort(std::vector<int>& left, std::vector<int>& right, std::vector<int>& to_sort);

#endif

