#include<bits/stdc++.h>
#include"encryption.h"
using namespace std;

int main() {

    string filename;
    char mode;

    cout << "Enter the file name: ";
    getline(cin >> ws, filename);   // to get file name which can include wide spaces

    cout << "Encrypt (e) or Decrypt (d)?";
    cin >> mode;

    if(mode == 'e' || mode == 'E') {
        if(encryptFile(filename,true)) {
            cout << "Encryption Completed Succesfullly" << endl;
        } else {
            cerr << "Error: unabe to perform encryption." << endl;
        }
    } else if(mode == 'd' || mode == 'D') {
        if(encryptFile(filename,false)) {
            cout << "Decryption Completed Succesfullly" << endl;
        } else {
            cerr << "Error: unabe to perform Decryption." << endl;
        }
    } else {
        cerr << "Error: Invalid mode selected, Use 'e' to Encryption and 'd' to Decrytion" << endl;
    }
    return 0;
}