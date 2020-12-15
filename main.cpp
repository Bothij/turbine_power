#include <iostream>

int main() {
  int turbine_counter;
  int all_turbines;
  
  for (turbine_counter = 1; turbine_counter <= 25; turbine_counter++) {
    if (turbine_counter <= 10) {
    std::cout << "A(z) " << turbine_counter << ". számú szélturbina teljes fordulaton működik, 2000 MWh-t termelve.\n A farmon termelt összenergia jelenleg Y MWh.\n";
    } else if (turbine_counter <= 20){
    std::cout << "A(z) " << turbine_counter << ". számú szélturbina fél fordulaton működik, 1000 MWh-t termelve.\n A farmon termelt összenergia jelenleg Y MWh.\n";
    } else {
      std::cout << "A(z) " << turbine_counter << ". számú szélturbina nem működik, 0 MWh-t termelve.\n A farmon termelt összenergia jelenleg Y MWh.\n";
    }
  }
  
}