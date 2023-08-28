#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class strings {
private:
    string a;

    int isVowel(char c) {
        c = tolower(c);
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }

public:
    void getString() {
        cout << "Enter a string or sentence: ";
        getline(cin, a);
    }

    void removeVowelsAndPrint() {
        string modified = a;
        modified.erase(remove_if(modified.begin(), modified.end(), [this](char c) { return isVowel(c); }), modified.end());
        
        cout << "String after removing vowels: " << modified << endl;
    }
};

int main() {
    strings processor;
    processor.getString();
    processor.removeVowelsAndPrint();

    return 0;
}

