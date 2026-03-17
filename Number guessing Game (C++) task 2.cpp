#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main (){
srand (time(0));
int number=rand()%100+1;
int guess;
cout << "Guess the number between 1 and 100\n";
while(true){
cout << "Enter your guess";
cin>>guess;
if(guess>number){
cout << "Too low! Try again.\n";
}
else{
cout << "Correct! Your guessed the number\n";
break;
}
}
return 0;
}