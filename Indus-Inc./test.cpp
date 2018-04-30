#include "test_item.h"
#include "test_container.h"
#include "test_scoop.h"
#include "test_topping.h"
#include <iostream>

int main() {
  if (!(test_item() &&
        test_container() &&
        test_scoop() &&
        test_topping()))
    std::cerr << "fail" << std::endl;
} 
