#include "suffixtree.h"

#include <iostream>
#include <string>
#include <set>
#include <vector>


typedef std::vector<char> ctnr;

int main() {
    std::set<char> le_set = { 'm', 'i', 's', 't' };
    SuffixTree<char> stree;
    ctnr str = { 'M', 'i', 's', 's', 'i', 's', 's', 'i', 'p', 'i' };
    ctnr str2 = { 'M', 'i', 's', 's', 'o', 'u', 'r', 'i' };
    ctnr str3 = { 's', 'o', 'u', 'r', 'i', 's' };
    ctnr str4 = { 'G', 'o', 'l', 'g', 'o', 't', 'h' };
    ctnr str5 = { 'W', 'i', 's', 'i', 'g', 'o', 't', 'h' };
    ctnr suffix_test = { 'i', 'p', 'i' };
    stree.add_string(str.begin(), str.end());
    stree.add_string(str2.begin(), str2.end());
    stree.add_string(str3.begin(), str3.end());
    stree.add_string(str4.begin(), str4.end());
    stree.add_string(str5.begin(), str5.end());
    stree.add_string(le_set.rbegin(), le_set.rend());
    stree.dump_tree();
    std::cout << std::boolalpha;
    std::cout << stree.is_suffix(suffix_test.begin(), suffix_test.end()) << std::endl;
}
