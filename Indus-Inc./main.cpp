#include <gtkmm.h>
#include "controller.h"
#include "flavor.h"
#include "container.h"
#include "topping.h"
#include "main_window.h"
#include <gtkmm.h>

int main(int argc, char *argv[]) {
  auto app = Gtk::Application::create(argc, argv, "edu.uta.cse1325.mice");
  Flavor flavor;
  Topping topping;
  Container container;
  Controller controller(container, flavor, topping);
  Main_window win(controller);
  win.set_title("Maverick's Ice-cream Emporium");
  return app->run(win);
}