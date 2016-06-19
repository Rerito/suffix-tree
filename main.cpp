

#include "suffixtree.h"
#include <iostream>

typedef SuffixTree<std::string, int, '$'> regular_stree;

int main() {
  regular_stree stree;
  stree.add_string("Mississipi$");
  stree.dump_tree();
  return 0;
}
