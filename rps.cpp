/*
Rock Paper Scissors Lizard Spock
(The Big Bang Theory)
*/

#include <iostream>
#include <stdlib.h>

int main(){

  srand(time(NULL));

  int computer = rand() % 3 + 1;
  int user = 0;

  std::cout << "=========================\n";
  std::cout << "    rock paper scissors\n";
  std::cout << "=========================\n\n";

  std::cout << "1) rock\n";
  std::cout << "2) paper\n";
  std::cout << "3) scissors\n\n";

  std::cout << "shoot! ";
  std::cin >> user;

  std::cout << "The computer choose "<< computer << "\n";
  std::cout << "You choose "<< user << "\n\n";

  if(user == computer){
    std::cout << "It is a tie!!\n"; 
  }else if(user == 1 && computer == 2){
    std::cout << "Computer wins!\n";
  }else if(user == 3 && computer ==  2){
    std::cout << "You wins!\n";
  }else if(user == 2 && computer == 1){
    std::cout << "You wins!\n";
  }else if(user == 2 && computer == 3){
    std::cout << "Computer wins!\n";
  }else if(user == 1 && computer  ==  3){
    std::cout << "You win!\n";
  }else if(user == 3 && computer == 1){
    std::cout << "Computer wins!\n";
  }else{
    std::cout << "Try again!\n";
  }




}