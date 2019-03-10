

## Generalized Suffix Trees ##

# Quick annoucement #

This repository is deprecated and not maintained. For an up to date
implementation of *Generalized Suffix Trees*, please have a look at https://github.com/Rerito/suffix-tree-v2

# Description #

Here is a C++ implementation for *Generalized Suffix Trees* based on [Ukkonen's
algorithm](https://www.cs.helsinki.fi/u/ukkonen/SuffixT1withFigs.pdf).

A *Suffix Tree* is a special data structure that holds the suffixes of an input
string S<sub>1</sub> and allow to perform the following queries in linear time:

  - Test if a string S<sub>2</sub> is a substring of S<sub>1</sub>
  - Find palindrome substrings
  - ... (@TODO complete this list)

However, some problems needs an extension of this data structure to maintain a
tree of the suffixes of each string in a set of strings. For example, finding
the largest common substring of a set of strings is equivalent to finding the
deepest internal node in a *Generalized Suffix Tree* that has children leaves of
every input string.

## How does it work ##

The basic algorithm remains valid to build a *Generalized Suffix Tree*. Some
little tweaks are required nonetheless:

  -  Input strings are stored in a hashmap. Each input string has thus a unique
     integer key.
  -  Transitions from a node to another are stored in a hashmap. Since there is
     at most one transition starting with a given character, a transision's key
     is its first character.
  -  A transition can be viewed as a directed edge, labeled by a substring. Such
     a substring is originally represented using two pointers (left, righ).
     Here, since we can have multiple reference strings, we add a third
     parameter: the ID of the reference string (same as in the string set hashmap).
     Thus, the substring `cao` of the string `cacao` at index 1 is represented
     by the triple:

     > (1, 2, 4)

We thus add some fetching steps (O(1) complexity if the hashmap performs well).

More at this [SO
Question](http://stackoverflow.com/questions/28278802/ukkonens-algorithm-for-generalized-suffix-trees)...

## Improvements ##

The @TODO list for this little project is not cleared yet:

  -  Handle leaves (reference the strings in the set that has a suffix on a
     leaf)
  -  Allow a `remove_string` procedure to remove the suffixes, nodes and
     transitions brought by the given string. This will be online in the same
     way as the insertion routine.
  -  Program some tests (using Google Test API)
