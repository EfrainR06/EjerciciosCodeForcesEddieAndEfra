#include <iostream>

int main(){
  int rounds;
  std::cin >> rounds;
  for (int i = 0; i < rounds; i++){
    int players, yellow, red;
    std::cin >> players >> yellow >> red;
    int suspended = 0;
    suspended += red;
    suspended += yellow / 2;
    if (suspended > players) std::cout << players << std::endl;
    else std::cout << suspended << std::endl;
  }
  return 0;
}