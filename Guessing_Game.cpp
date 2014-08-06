#include <iostream>
#include <time.h>
#include <stdlib.h>

int main()
{
char name [20];
srand(time(NULL));
int number;
int guess;
int x=0;
number = rand() % 10 + 1;
cout << "Hello, this is a guessing game, what is your name?   ";
cin >> name;
cout << endl;
cout << "Welcome to The Guessing Game, " << name;
cout << "\n\n\nPick a number between 1 and 10:    ";
cin >> guess;
while (x < 11)
{
if (guess == number)
{cout << "YAYAYAYAYAYAYAYYAYAYAYAYAYAYAYAY You guessed the number!";
x = 20;}
else
{cout << "\n WRONG!!! Pick a number between 1 and 10:    ";
cin >> guess;}
x++;
}
return 0;
}