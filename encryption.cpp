#include<bits/stdc++.h>
#include"encryption.h"
using namespace std;

bool performCaesarCipher(string& content, bool encrypt) {
    int shift = encrypt ? 3: -3;
    for(char &ch: content) {
        if (isalpha(ch)) {
            char base = isupper(ch) ? 'A' : 'a';
            ch = static_cast<char>((ch - base + shift + 26)%26+base);

        }
    }

    return true;
}

bool encryptFile(const string& filename, bool encrypt) {
    // open the file
    ifstream inFile(filename);
    if(!inFile) {
        return false;
    }

    // Reaf the content
    string content((istreambuf_iterator<char>(inFile)), {});
    inFile.close();

    if(performCaesarCipher(content,encrypt)) {
        // Create the output file and writting the modified content
        ofstream outFile(filename, ios::trunc);
        if (!outFile) {
            cerr << "Error: Unable to open file for writing." << endl;
            return false;
        }

        // Write the modified content back to the same file
        outFile << content;
        outFile.close();
        return true;
    }

      // Return false if the cipher operation failed
    cerr << "Error: Cipher operation failed." << endl;
    return false;
}