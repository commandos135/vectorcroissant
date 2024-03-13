#include <algorithm>
#include <iostream>
#include <list>
#include <vector>

using namespace std;

void merge_unique(vector<int>& vec, list<int>& lst, list<int>& out) {
    list<int> vec_list(vec.begin(), vec.end());

    vec_list.merge(lst);

    vec_list.unique();

    out = vec_list;
}

int main() {
    vector<int> vec = { 1, 3, 5, 7, 9 };
    list<int> lst = { 2, 4, 6, 8, 10 };
    list<int> out;

    merge_unique(vec, lst, out);

    for (int i : out) {
        cout << i << " ";
    }

    cout << endl;

    return 0;
}
