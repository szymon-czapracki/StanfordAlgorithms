#include "MergeSort.h"

long int sort(std::vector<int>& left, std::vector<int>& right,
        std::vector<int>& to_sort) {

    long int inv_count = 0;
    long int r_iter = 0;
    long int l_iter = 0;
    long int main_iter = 0;

    while (l_iter < (int)left.size() && r_iter < (int)right.size()) {
        if (left.at(l_iter) < right.at(r_iter)) {
            to_sort.at(main_iter) = left.at(l_iter);
            l_iter++;
        } else {
            to_sort.at(main_iter) = right.at(r_iter);
            r_iter++;
            inv_count += ((int)left.size() - l_iter);
        }
        main_iter++;
    }

    while (l_iter < (int)left.size()) {
        to_sort.at(main_iter) = left.at(l_iter);
        l_iter++;
        main_iter++;
    }

    while (r_iter < (int)right.size()) {
        to_sort.at(main_iter) = right.at(r_iter);
        r_iter++;
        main_iter++;
    }

    return inv_count;
}

long int merge_sort(std::vector<int>& to_sort) {

    if (to_sort.size() <= 1) {
        return 0;
    }

    long int mid = to_sort.size() / 2;
    long int inv_count = 0;

    std::vector<int> left_vector;
    std::vector<int> right_vector;

    std::copy(std::begin(to_sort), std::begin(to_sort) + mid,
            std::back_inserter(left_vector));

    std::copy(std::begin(to_sort) + mid, std::end(to_sort),
            std::back_inserter(right_vector));

    inv_count += merge_sort(left_vector);
    inv_count += merge_sort(right_vector);
    inv_count += sort(left_vector, right_vector, to_sort);

    return inv_count;
}

