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

     cout << "Hello and welcome to the Caesar cipher program.\n"
          << "This program is primarily used to encrypt and decrypt messages using a\n"
          << "Caesar cipher.\n";

     this_thread::sleep_for(chrono::seconds(1));

     cout << "--------------------------------------------------------------------------" << endl;

     cout << "This is all done, with user specifications in mind.\n"
          << "I will now explain how you can use this program.\n";

     this_thread::sleep_for(chrono::seconds(1));

     cout << "--------------------------------------------------------------------------" << endl;

     cout << "You will have an option to choose whether\n"
          << "you would like to encrypt or decrypt your message.\n";

     this_thread::sleep_for(chrono::seconds(1));

     cout << "--------------------------------------------------------------------------" << endl;

     cout << "You will type in the respective letter for that option\n"
          << "then press the enter key, to finalize your response.\n";
    
     this_thread::sleep_for(chrono::seconds(1));

     cout << "--------------------------------------------------------------------------" << endl;

     cout << "Afterwords, you will be asked to specify how many shifts\n"
          << "will occur while using this cipher.\n"
          << "For example, if you choose to encrypt hello,\n"
          << "you will get jgnnq if you shifted by 2 letters.\n"
          << "Or you will get fcjjk if you choose to decrypt hello by 2 letters.\n";

     this_thread::sleep_for(chrono::seconds(1));

     cout << "--------------------------------------------------------------------------" << endl;

     cout << "Once your done with this, the program will encrypt or decrypt your message.\n"
          << "And with that being said, enjoy your caesar cipher!\n";
    
     this_thread::sleep_for(chrono::seconds(1));

     cout << "--------------------------------------------------------------------------" << endl;
     cout << "--------------------------------------------------------------------------" << endl;

     this_thread::sleep_for(chrono::seconds(1));
}

void cipherOptions()
{
     bool encrypt = false;
     bool decrypt = false;

     char firstOption;

     while(encrypt != true || decrypt != true)
     {
          cout << "Would you rather Encrypt [A] or Decrypt [B] your message: ";
          cin >> firstOption;

          // The logic in the if else logic does run with any input that isn't A or B, but at the same time, it also runs the message even if it's A or B.
          // Chances are, you would have to update the logic in order to fix the output of this program, so it properly exits the current while loop.

          if((firstOption != 'a' || firstOption != 'A') || (firstOption != 'b' || firstOption != 'B'))
          {
               cout << "This input doesn't work, try again.";
          }
          else
          {
               encrypt = true;
               break;
          }
          // (not a and not A) or (not b and not B). What is the simplified version of this logic?
     }

}

int main()
{
/*
     How to use a caesar cipher.

     1. Decide whether to encrypt or decrypt the message.
     2. Decide how many letters you should shift (encrypt is shifting to the right, decrypt is shifting to the left).
     3. Input your message.
     4. Encrypted or decrypted message shown.
    
     This program will likely use modolar arithmetic
    
*/
     //instructions();
     cipherOptions();
    
     return 0;
}
