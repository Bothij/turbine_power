#include <iostream>


int main() {
  int a[25] {2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 2000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 0, 0, 0, 0, 0};

  int sum_power;

  for (int i = 0; i < 25; i++) {
    
    if (a[i] == 2000) {
      sum_power = sum_power + a[i];
      std::cout << "A(z) " << i + 1 << ". számú szélturbina teljes fordulaton működik, " << a[i] << " MWh-t termelve.\nA farmon termelt összenergia jelenleg " << sum_power << " MWh.\n" << std::endl;
    } else if  (a[i] == 1000) {
      sum_power = sum_power + a[i];
      std::cout << "A(z) " << i + 1 << ". számú szélturbina fél fordulaton működik, " << a[i] << " MWh-t termelve.\nA farmon termelt összenergia jelenleg " << sum_power << " MWh.\n" << std::endl;
    } else if  (a[i] == 0) {
      sum_power = sum_power + a[i];
      std::cout << "A(z) " << i + 1 << ". számú szélturbina nem működik, " << a[i] << " MWh-t termelve.\nA farmon termelt összenergia jelenleg " << sum_power << " MWh.\n" << std::endl;
    }
  }
  
}