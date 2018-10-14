#include <iostream>
#include <Windows.h>

#include "Engine.cs"

using namespace std;

void getLogin()
{
  string username = "admin";
  string userInput;
  string password = "GH17612109";
  string passInput;
  int guessCount = 0;
  int guessLimit = 3;
  bool outOfGuesses = false;
  while (username != userInput && !outOfGuesses)
  {
    if (guessCount < guessLimit) 
    {
      cout << "Username: ";
      getline(cin, userInput);
      guessCount++;
    } 
    else
    {
      outOfGuesses = true;
    }
    if (outOfGuesses)
    {
      system("color 4");
      cout << "Error! Failed to login!" << endl;
      return 0;
  }
  cout << "Welcome, " << userInput << "!" << endl;
  guessCount = 0;
  guessLimit = 0;
  outOfGuesses = false;
    
  while (password != passInput && !outOfGuesses) 
  {
    if (guessCount < guessLimit)
    {
      cout << "Password: ";
      getline(cin, passInput);
      guessCount++;
    }
    else
    { 
      outOfGuesses = true;
    }
    if (outOfGuesses)
    {
      system("color 4");
      cout << "Error! Failed to sync password with username!" << endl;
      return 0;
    }
}

int main()
{
  HWND hwnd = findWindow("GameHaxr.exe");
  if (hwnd != "GameHaxr.exe)
      {
        system("color 4");
        cout << "Error_404: Failed to locate 'GameHaxr'! Ensure it's running." << endl;
        Sleep(4000);
        return 0;
      }
  else 
      {
        system("color a");
        cout << "Success! Located 'GameHaxr' properly." << endl;
        Sleep(2000);
      }
      getLogin();
      if (!getLogin)
      {
        system("color 4");
        cout << "Error_774: Failed to login!" << endl;
        Sleep(3000);
        return 0;
      }
  return 0; 
}
