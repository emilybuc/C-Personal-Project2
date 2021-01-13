#include <iostream>
using namespace std;
//repl.it repo:https://repl.it/join/vchnaxnm-emilybuck
//The Problem: converting to lowercase and reversing the input then comparing it to itself
//General approach: I will make two functions, one to reverse and one to lowercase
//Main issues: Making sure to lowercase the word before converting it

bool pallindrome(string inputWord);
string lowerCase(string word);
string reverseWord(string word);

int main() {
  string word; 
  cout << "Please enter a word: ";
  cin >> word;
  //Note that it takes the iterators to the start and end of the string as arguments 

  if (pallindrome(word) == true)
    cout <<"Yes, '" << word << "' is a palindrome" << endl;
  else 
    cout <<"Sorry, '" << word << "' is not a palindrome" << endl;

  return 0;
}

bool pallindrome(string inputWord) {
  inputWord = lowerCase(inputWord);
  //Convert to lowercase
  string backwardsWord = reverseWord(inputWord);
  //Reverse word and store to different var 

  if (backwardsWord!=inputWord)
    return false;
  else 
    return true;
  //Check if they match, if so return true if not then return false
}

string lowerCase(string input) {
  for (int i=0; i < input.length() ; i++ ){ 
        input[i] = tolower(input[i]);
        //interating through each character to convert it to lowercase
  }
  return input;
}

string reverseWord( string word ) {

  string reversedWord = word;
  //Take a copy of the word in order to save the original from being converted 

  int wordLength = word.length(); 
  //find out wordLength to use in for loop

  // Swap character starting from two 
  // corners 
  for (int i = 0; i < wordLength / 2; i++) 
      swap(reversedWord[i], reversedWord[wordLength - i - 1]); 

  return reversedWord;
}
