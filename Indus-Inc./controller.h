#ifndef __CONTROLLER_H
#define __CONTROLLER_H 201609
 
#include "container.h"
#include "topping.h"
#include "flavor.h"

class Controller {
  public:
    Controller (Container &cont) : container(cont),
    		   (Flavor &flav) : flavor(flav),
    		   (Topping &top) : topping(top),
    		   { }
    void cli();
    void execute_cmd(int cmd);
  private:
    Container container;
    Flavor flavor;
    Topping topping;
};
#endif
