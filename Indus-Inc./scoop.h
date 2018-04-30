#include "item.h"

class Scoop : public Item {
  public:
    Scoop(std::string name, std::string description, double cost, double price);
    std::string type() override;
};