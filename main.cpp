#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <chrono>
#include <thread>
using namespace std;

//I think for now, I will only accept lowercase letters for both functions encryptMessage and decryptMessage.

void encryptMessage(int shift)
{
     char message[100];

     cout << "Please enter the message you wish to encrypt or decrypt.\n"
          << "It is important that you type each letter individually, then press enter.\n"
          << "Once you are done, please input 0 as the last value in your message.\n";


     for(int i = 0; i < 101; i++)
     {
          cin >> message[i];

          if(i == 100)
          {
               cout << "Message limit reached. Encrypted message finalizing.\n";
          }
          else if(message[i] == '0')
          {
               cout << "Message finalizing...\n";
               break;
          }
     }

     this_thread::sleep_for(chrono::seconds(5));

     char encryptedMessage[100];
     int aschiiValue;
                                        //The aschiiValue primarily relates to the characters used in this program.
                                        // 'a' = 97, while z = '122'.
     //char lowerCaseLetters[25] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

     int j = 0;

     int code[26];

     while(j < 26)
     {
          aschiiValue = 97 + j;
          code[j] = aschiiValue - 96;
          j++;
     }

     
     int shiftedChar = 0;


     for(j = 0; j < 101; j++)
     {
          if(message[j] == '0')
          {
               break;
          }


          //I'm currently trying to do aschii to allow my cipher to properly work, but I may decide to go back to the cipher program, once I have a firm understanding of both subjects.
          //For now, I'm at least glad that I managed to 
          if((message[j] - 'A' + shift) % 26 <= 1)
          {
               aschiiValue = 96 + (message[j] - 'A' + shift) % 26;
               encryptedMessage[j] = aschiiValue;
          }
          else
          {
               encryptedMessage[j] = message[j] + shift;
          }
          


          this_thread::sleep_for(chrono::milliseconds(3));
          cout << encryptedMessage[j];
     }

     this_thread::sleep_for(chrono::seconds(5));
}

// I first have to figure out how characters are defined in the program when it comes to it's respective number value. I assume that it has something to do with integers. 
// Then I will add that program to both decrypt and encrypt functions.
void decryptMessage(int shift)
{
     char message[100];

     
     cout << "Please enter the message you wish to encrypt or decrypt.\n"
          << "It is important that you type each letter individually, then press enter.\n"
          << "Once you are done, please input 0 as the last value in your message.\n";


     for(int i = 0; i < 101; i++)
     {
          cin >> message[i];

          if(i == 100)
          {
               cout << "Message limit reached. Encrypted message finalizing.\n";
          }
          else if(message[i] == '0')
          {
               cout << "Message finalizing...\n";
               break;
          }
     }

     this_thread::sleep_for(chrono::seconds(5));

     for(int j = 0; j < 101; j++)
     {
          if(message[j] == '0')
          {
               break;
          }

          this_thread::sleep_for(chrono::milliseconds(3));
          cout << message[j];
     }

     this_thread::sleep_for(chrono::seconds(5));
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

     char firstOption;         //Choose to encrypt or decrypt
     int secondOption = 0;     //Choose how many letters are shifted.

     while(encrypt != true && decrypt != true)
     {
          cout << "Would you rather Encrypt [A] or Decrypt [B] your message: ";
          cin >> firstOption;

          
          if(firstOption == 'a' || firstOption == 'A')
          {
               cout << "Encryption set\n";
               encrypt = true;
          }
          else if(firstOption == 'b' || firstOption == 'B')
          {
               cout << "Decryption set\n";
               decrypt = true;
          }
          else
          {
               cout << "Invalid input, try again\n";
          }
          
     }

     int shift = 0;

     
     while(shift <= 0 || shift > 25)
     {
          cout << "How many letters would you like to shift by?: ";
          cin >> secondOption;

          
          if(secondOption > 0 && secondOption <= 25)
          {
               cout << "Shift confirmed\n";
               shift = secondOption;
          }
          else
          {
               cout << "Shift option choosen outside specified limit. Please input a value between 1-25, thank you! \n";
          }
     }

     
     if(encrypt == true)
     {
          encryptMessage(shift);
     }
     else if(decrypt == true)
     {
          decryptMessage(shift);
     }

}

int main()
{
     
// Working on the cipherOptions function currently... Then encrypt function... Then decrypt function. (Make sure to delete one of these functions onces you think your done.)
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
