#include "app-window.h"
#include <iostream>

int main(int argc, char **argv) {
  auto ui = AppWindow::create();

  const auto global_1 = &ui->global<Global_1>();
  const auto global_2 = &ui->global<Global_2>();

  std::cout << "Global_1 address: " << global_1 << std::endl;
  std::cout << "Global_2 address: " << global_2 << std::endl;

  ui->run();
  return 0;
}
