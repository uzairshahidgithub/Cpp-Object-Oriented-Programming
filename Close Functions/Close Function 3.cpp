#include <fstream>
#include <iostream>
using namespace std;

int main() {
    fstream ob;
    ob.open("file.txt", ios::in);

    if (!ob) {
        cout << "file is created but not found" << endl;
    } else {
        cout << "file is created successfully" << endl;
        char x;

        while (1) {
            x = ob.get();
            if (ob.eof())
                break;
            cout << x;
        }

        ob.close(); // Move this line outside the while loop
    }

    return 0;
}
