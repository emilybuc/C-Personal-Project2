#include <iostream>
using namespace std;
#include <string> 
//repl.it repo:https://repl.it/join/aiyvxqgr-emilybuck
//The Problem:Converting a string to lowercase
//General approach: use a for loop to iterate through a string and convert it character by character
//Main issues:figuring out a way to use tolower as you have to convert each character

int main() {
  string lowerCaseWord, input;
  cout << "Please enter a word: ";
  getline (cin,input);
  //Input
  lowerCaseWord = input;
  //Taking a copy of the input to be converted
  for (int i=0; i < lowerCaseWord.length() ; i++ ){ 
        lowerCaseWord[i] = tolower(lowerCaseWord[i]);
        //interating through each character to convert it to lowercase
  }
  cout << input <<" converted to lower case is: "<<lowerCaseWord<< endl;
  return 0;
}
