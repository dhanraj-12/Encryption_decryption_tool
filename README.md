# File Encryption and Decryption Tool

This project implements a simple file encryption and decryption tool using the **Caesar cipher** technique in **C++**. It is designed to protect your files by applying a basic ciphering technique that shifts characters by a defined number, securing the contents of the file.

## Features

- **File Encryption**: Encrypts the contents of a file using the Caesar cipher algorithm, shifting the characters by a user-defined key.
- **File Decryption**: Decrypts an encrypted file back to its original content using the same key used for encryption.
- **C++ Implementation**: Efficiently written in C++ for fast performance.
- **Lightweight and Simple**: Easy to understand and use, with minimal dependencies.

## Technologies Used

- **C++**: The core programming language used for the tool.
- **Caesar Cipher**: A classical encryption technique where each character in the text is shifted by a fixed number of positions in the alphabet.

## Getting Started

### Prerequisites

Ensure you have a C++ compiler installed on your system (e.g., GCC for Linux or MinGW for Windows).

### Installation

1. Clone the repository:
    ```bash
    git clone https://github.com/dhanraj-12/Encryption_decryption_tool.git
    ```

2. Navigate to the project directory:
    ```bash
    cd Encryption_decryption_tool
    ```

3. Compile the code:
    ```bash
    g++ encrypt_decrypt.cpp -o encrypt_decrypt
    ```

### Usage

To encrypt a file:
```bash
./encrypt_decrypt -e <file_path> <shift_key>
