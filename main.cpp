#include <iostream>
#include "DonatorApp.h"

using namespace std;

int main(int argc, char *argv[]) {

    if (argc != 2) {
        cout << "Please Enter Correct Argument " << endl;
    } else {
        DonatorApp(argv[1]).run();
    }

    return 0;
}
