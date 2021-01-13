#include <iostream>
using namespace std;
//repl.it repo:https://repl.it/join/sxzqjqjy-emilybuck
//The Problem: Trying to reverse a word
//General approach: strings are arrays of characters so treat them like that 
//Main issues: finding a way to start at the front of one string and the end of another 

int main() {
  string word;
  cout << "Please enter a word: ";
  cin >> word;
  string reversedWord = word;
  //Take a copy of the word in order to save the original from being converted 

  int wordLength = word.length(); 
  //find out wordLength to use in for loop

  // Swap character starting from two 
  // corners 
  for (int i = 0; i < wordLength / 2; i++) 
      swap(reversedWord[i], reversedWord[wordLength - i - 1]); 

  cout << word <<" spelt backwards is: " << reversedWord << "\n";
}
