#include <iostream>
#include <cstdlib>

int main(){
  
  srand(time(NULL));
  std::cout << "Magic 8-Ball: \n";
  int answer = std::rand() % 10;
  std::cout << answer << "\n";

  if(answer==0){
    std::cout << "It is certain.\n";
  }
  else if(answer==1){
    std::cout << "It is decidedly so.\n";
  }
  else if(answer==2){
    std::cout << "Don't count on it. \n";
  }
  else if(answer==3){
    std::cout << "Outlook good. \n";
  }
  else if(answer==4){
    std::cout << "As I see it, yes. \n";
  }
  else if(answer==5){
    std::cout << "Ask again later. \n";
  }
  else if(answer==6){
    std::cout << "Outlook not so good. \n";
  }
  else if(answer==7){
    std::cout << "Cannot predict now. \n";
  }
  else if(answer==8){
    std::cout << "Reply hazy, try again. \n";
  }
  else if(answer=9){
    std::cout << "Better not tell you now. \n";
  }
  else {
    std::cout << "Very doubtful.\n";
  }
}