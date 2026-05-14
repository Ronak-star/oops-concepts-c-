#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file;
    string word;
    int count = 0;

    file.open("data.txt");

    while (file >> word) {
        count++;
    }

    file.close();

    cout << "Number of words in the file: " << count << endl;

    return 0;
}
