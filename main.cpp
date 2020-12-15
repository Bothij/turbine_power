#include <iostream>


int main() {
  int turbine_counter = 1;
  int all_turbines;
  int turbine_power = 2000;
  int sum_power;
  
  for (turbine_counter = 1; turbine_counter <= 25; turbine_counter++) {
    sum_power = turbine_power * turbine_counter;
    if (turbine_counter <= 10) {
    std::cout << "A(z) " << turbine_counter << ". számú szélturbina teljes fordulaton működik, " << turbine_power << " MWh-t termelve. A farmon termelt összenergia jelenleg " << sum_power << " MWh.\n" << std::endl;
    } else if (turbine_counter <= 20){
    std::cout << "A(z) " << turbine_counter << ". számú szélturbina fél fordulaton működik, " << turbine_power / 2 << " MWh-t termelve.\n A farmon termelt összenergia jelenleg " << turbine_power * turbine_counter << " MWh.\n" << std::endl;
    } else {
      std::cout << "A(z) " << turbine_counter << ". számú szélturbina nem működik, " << turbine_power * 0 << " MWh-t termelve.\n A farmon termelt összenergia jelenleg Y MWh.\n" << std::endl;
    }
  }
  
}