#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <chrono>
#include <thread>
using namespace std;


void encrypt()
{

}

void decrypt()
{

}

void cipherShift()
{

}

void instructions()
{
    cout << "--------------------------------------------------------------------------" << endl;
    cout << "--------------------------------------------------------------------------" << endl;

    cout << "Hello and welcome to the Caesar cipher program./n"
         << "This program is primarily used to encrypt and decrypt messages using a\n"
         << "Caesar cipher.";

    cout << "--------------------------------------------------------------------------" << endl;

    cout << "This is all done, with user specifications in mind.\n"
         << "I will now explain how you can use this program.\n";

    cout << "--------------------------------------------------------------------------" << endl;

    cout << "You will have an option to choose whether\n"
         << "you would like to encrypt or decrypt your message.\n";

    cout << "--------------------------------------------------------------------------" << endl;

    cout << "You will type in the respective letter for that option\n"
         << "then press the enter key, to finalize your response.\n";

    cout << "--------------------------------------------------------------------------" << endl;

    cout << "Afterwords, you will be asked to specify how many shifts\n"
         << "will occur while using this cipher./n"
         << "For example, if you choose to encrypt hello,\n"
         << "you will get jgnnq if you shifted by 2 letters.\n"
         << "Or you will get fcjjk if you choose to decrypt hello by 2 letters.\n";

    cout << "--------------------------------------------------------------------------" << endl;

    cout << "Once your done with this, the program will encrypt or decrypt your message.\n"
         << "And with that being said, enjoy your caesar cipher!\n";
    
    cout << "--------------------------------------------------------------------------" << endl;
    cout << "--------------------------------------------------------------------------" << endl;

    this_thread::sleep_for(chrono::seconds(1));
}

int main()
{
    bool encrypt = false;
    bool decrypt = false;
    
    instructions();

    /*
     How to use a caesar cipher.

     1. Decide whether to encrypt or decrypt the message.
     2. Decide how many letters you should shift (encrypt is shifting to the right, decrypt is shifting to the left).
     3. Input your message.
     4. Encrypted or decrypted message shown.
    
    
    */
  
    return 0;
}
