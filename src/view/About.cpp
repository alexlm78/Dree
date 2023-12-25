#include "About.h"
#include <iostream>
#include "AboutI.h"
using namespace std;

void About::print_help_instructions() {
    cout << "\tdree: "
         << "dree "
         << "[dep] [-f [dir|file]][-a]"
         << "\n";
    cout << "\tVisualize directories until certain depth"
         << "\n";
    cout << "\n";
    cout << "\trun dree followed by the number of levels you want to visualize"
         << "\n";
    cout << "\n";
    cout << "\tOptions:"
         << "\n";
    cout << "\t   -f   \t"
         << "search for a directory or file upto the specified depth"
         << "\n";
    cout << "\t   -a   \t"
         << "Show hidden files"
         << "\n";
}