

#include "suffixtree.h"
#include <iostream>
#include <string>
#include <vector>


typedef std::vector<char> ctnr;

int main() {
    SuffixTree<ctnr::iterator> stree;
    std::string t("Missouri$");
    ctnr str = { 'M', 'i', 's', 's', 'i', 's', 's', 'i', 'p', 'i' };
    ctnr str2 = { 'M', 'i', 's', 's', 'o', 'u', 'r', 'i' };
    ctnr str3 = { 's', 'o', 'u', 'r', 'i', 's' };
    stree.add_string(str.begin(), str.end());
    stree.add_string(str2.begin(), str2.end());
    stree.add_string(str3.begin(), str3.end());
    stree.dump_tree();
    std::cout << stree.add_string(str.begin(), str.end()) << std::endl;
    return 0;
}
