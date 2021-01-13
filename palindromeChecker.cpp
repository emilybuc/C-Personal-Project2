#include <iostream>
#include<bits/stdc++.h>
using namespace std;
//repl.it repo:https://repl.it/join/vchnaxnm-emilybuck
//The Problem: converting to lowercase and reversing the input then comparing it to itself
//General approach: I will make two functions, one to reverse and one to lowercase
//Main issues: Making sure that I take a copy of the word before reversing it

bool pallindrome(string word);
string lowerCase(string word);

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
  string backwardsWord = inputWord;
  //Take a copy of the input word to be reversed
  reverse(backwardsWord.begin(),backwardsWord.end());
  //Reverse word

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

