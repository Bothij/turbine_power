#include <iostream>


int main() {
  int b = 2;

  int a[26] {0, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 0, 0, 0, 0, 0};
  do {
  int sum_power;
  int i = 0;

  for (int i = 1; i <= 25; i++) {
    
    if (a[i] == 2000) {
      sum_power = sum_power + a[i];
      std::cout << "A(z) " << i << ". számú szélturbina teljes fordulaton működik, " << a[i] << " MWh-t termelve.\nA farmon termelt összenergia jelenleg " << sum_power << " MWh.\n" << std::endl;
    } else if  (a[i] == 1000) {
      sum_power = sum_power + a[i];
      std::cout << "A(z) " << i << ". számú szélturbina fél fordulaton működik, " << a[i] << " MWh-t termelve.\nA farmon termelt összenergia jelenleg " << sum_power << " MWh.\n" << std::endl;
    } else if  (a[i] == 0) {
      sum_power = sum_power + a[i];
      std::cout << "A(z) " << i << ". számú szélturbina nem működik, " << a[i] << " MWh-t termelve.\nA farmon termelt összenergia jelenleg " << sum_power << " MWh.\n" << std::endl;
    } 
  }
  std::cout << "Add meg a megváltozott teljesítményű turbina számát (1-25): " << std::endl;
  std::cin >> i;
  std::cout << "Add meg a turbina új teljesítményét MWh-ban (0 vagy 1000 vagy 2000): " << std::endl;
  std::cin >> a[i];
  std::cout << std::endl;
  sum_power = 0;
  
  }while(b == 2);
  

}