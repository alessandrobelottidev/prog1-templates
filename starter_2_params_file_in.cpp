#include <iostream>

/* ALLOWED LIBRARIES */
// #include <cstring>
#include <fstream>
// #include <cmath>
// #include <ctime>
/* END OF ALLOWED LIBRARIES */

using namespace std;

/* DEVELOPER DEFINED FUNCTIONS */
// Github:
// - https://github.com/MarcoAdami/implementazioni (general help)
// - https://github.com/alessandrobelottidev/prog-1-lib (data structures)
// - https://github.com/Giuliopime/programmazione-1-unitn/tree/main/src/resources (rotazione array, priority queue)
// - https://github.com/LuigiMiazzo17/unitn-programmazione1 (lista esercizi con nomi + utils)
// - https://github.com/mfranzil-unitn/unitn-prog1/blob/master/tips.txt (Tips for std functions useful for exam)

/* END OF DEVELOPER DEFINED FUNCTIONS */

int main(int argc, char** argv) {
    if (argc != 3) {
        cout << "Usage: " << argv[0] << " <param1> <param2>" << endl;  // TODO: change parameter names
        exit(1);
    }

    string param1 = argv[1]; // TODO: change type and name

    ifstream in(argv[2]);

    if (!in.is_open()) {
        cout << "Error opening file" << endl;
        in.close();
        exit(1);
    }

    /* YOUR CODE HERE */

    /* END OF YOUR CODE */

    in.close();

    return 0;
}