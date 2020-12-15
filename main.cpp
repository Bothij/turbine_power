#include <iostream>


int main() {
  int turbine_counter = 1;
  int all_turbines = 25;
  int turbine_power = 2000;
  int sum_power;
  
  for (turbine_counter = 1; turbine_counter <= all_turbines; turbine_counter++) {
    if (turbine_counter <= 10) {
    sum_power += turbine_power;
    std::cout << "A(z) " << turbine_counter << ". számú szélturbina teljes fordulaton működik, " << turbine_power << " MWh-t termelve.\nA farmon termelt összenergia jelenleg " << sum_power << " MWh.\n" << std::endl;
    } else if (turbine_counter <= 20){
      turbine_power = 1000;
      sum_power += turbine_power;
    std::cout << "A(z) " << turbine_counter << ". számú szélturbina fél fordulaton működik, " << turbine_power << " MWh-t termelve.\nA farmon termelt összenergia jelenleg " << sum_power << " MWh.\n" << std::endl;
    } else {
      turbine_power = 0;
      std::cout << "A(z) " << turbine_counter << ". számú szélturbina nem működik, " << turbine_power << " MWh-t termelve.\nA farmon termelt összenergia jelenleg " << sum_power << " MWh.\n" << std::endl;
    }
  }
  
}