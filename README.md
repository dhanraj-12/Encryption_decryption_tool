File Encryption and Decryption Tool
This project implements a simple file encryption and decryption tool using the Caesar cipher technique in C++. It is designed to protect your files by applying a basic ciphering technique that shifts characters by a defined number, securing the contents of the file.

Features
File Encryption: Encrypts the contents of a file using the Caesar cipher algorithm, shifting the characters by a user-defined key.
File Decryption: Decrypts an encrypted file back to its original content using the same key used for encryption.
C++ Implementation: Efficiently written in C++ for fast performance.
Lightweight and Simple: Easy to understand and use, with minimal dependencies.
Technologies Used
C++: The core programming language used for the tool.
Caesar Cipher: A classical encryption technique where each character in the text is shifted by a fixed number of positions in the alphabet.
Getting Started
Prerequisites
Ensure you have a C++ compiler installed on your system (e.g., GCC for Linux or MinGW for Windows).

Installation
Clone the repository:

bash
Copy code
git clone https://github.com/dhanraj-12/Encryption_decryption_tool.git
Navigate to the project directory:

bash
Copy code
cd Encryption_decryption_tool
Compile the code:

bash
Copy code
g++ encrypt_decrypt.cpp -o encrypt_decrypt
Usage
To encrypt a file:

bash
Copy code
./encrypt_decrypt -e <file_path> <shift_key>
To decrypt a file:

bash
Copy code
./encrypt_decrypt -d <encrypted_file_path> <shift_key>
-e stands for encryption.
-d stands for decryption.
<shift_key> is the number of positions to shift the characters by during encryption/decryption.
Example
Encrypting a file:

bash
Copy code
./encrypt_decrypt -e example.txt 4
Decrypting a file:

bash
Copy code
./encrypt_decrypt -d encrypted_example.txt 4
Make sure to remember the shift key, as it is necessary for both encryption and decryption processes.

How It Works
The Caesar cipher shifts each character in the file by a certain number of positions (key) in the alphabet. For example, with a shift key of 3:

'A' becomes 'D'
'B' becomes 'E'
'Z' wraps around to 'C'
The same key is required to reverse this operation during decryption.

Contribution
Contributions to enhance this project are welcome! Feel free to open issues, suggest features, or create pull requests.