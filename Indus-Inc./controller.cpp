#include "controller.h"
#include "view.h"
#include "dialogs.h"
#include <iostream>
#include <string>

using namespace std;

void Controller::cli() {
  int cmd = -1;
  while (cmd != 0) {
    cmd = view.select_from_menu();
    execute_cmd(cmd);
  }
}

void Controller::execute_cmd(int cmd) {

  if (cmd == 1) {
    // Add container

    string input_container = "";
    int num_scoops;
    bool cancel = false;

    Gtk::Dialog *dialog = new Gtk::Dialog();
    dialog->set_title("Create Container");

    // Container
    Gtk::HBox b_container;
    
    Gtk::Label l_container{"Container:"};
    l_container.set_width_chars(15);
    b_container.pack_start(l_container, Gtk::PACK_SHRINK);

    Gtk::Entry e_container;
    e_container.set_max_length(50);
    b_container.pack_start(e_container, Gtk::PACK_SHRINK);
    dialog->get_vbox()->pack_start(b_container, Gtk::PACK_SHRINK);

    // Show dialog
    dialog->add_button("Cancel", 0);
    dialog->add_button("OK", 1);
    dialog->show_all();
    int result = dialog->run();

    dialog->close();
    while (Gtk::Main::events_pending())  Gtk::Main::iteration();

    input_container = e_container.get_text();

    if (result == 1){
      container.add_container(input_container);

    // Add number of scoops for the respective container

    Gtk::Dialog *dialog = new Gtk::Dialog();
    dialog->set_title("Number of scoops");

    // Scoops
    Gtk::HBox b_scoops;
    
    Gtk::Label l_scoops{"Scoops:"};
    l_scoops.set_width_chars(15);
    b_scoops.pack_start(l_scoops, Gtk::PACK_SHRINK);

    Gtk::Entry e_scoops;
    e_scoops.set_max_length(50);
    b_scoops.pack_start(e_scoops, Gtk::PACK_SHRINK);
    dialog->get_vbox()->pack_start(b_scoops, Gtk::PACK_SHRINK);

    // Show dialog
    dialog->add_button("Cancel", 0);
    dialog->add_button("OK", 1);
    dialog->show_all();
    int result_scoops = dialog->run();

    dialog->close();
    while (Gtk::Main::events_pending())  Gtk::Main::iteration();

    num_scoops = e_scoops.get_text();

    if (result_scoops == 1) {
        container.add_scoops(num_scoops);
    }}

 } else if (cmd == 2) { // Add flavor

    string flav;

    Gtk::Dialog *dialog = new Gtk::Dialog();
    dialog->set_title("Create new Icecream falvor");

    // Container
    Gtk::HBox b_flavor;
    
    Gtk::Label l_falvor{"Flavor:"};
    l_flavor.set_width_chars(15);
    b_flavor.pack_start(l_container, Gtk::PACK_SHRINK);

    Gtk::Entry e_flavor;
    e_flavor.set_max_length(50);
    b_flavor.pack_start(e_flavor, Gtk::PACK_SHRINK);
    dialog->get_vbox()->pack_start(b_flavor, Gtk::PACK_SHRINK);

    // Show dialog
    dialog->add_button("Cancel", 0);
    dialog->add_button("OK", 1);
    dialog->show_all();
    int result_falvor = dialog->run();

    dialog->close();
    while (Gtk::Main::events_pending())  Gtk::Main::iteration();

    flav = e_flavor.get_text();

    if (result_falvor == 1){
      flavor.add_flavor(flav);
}
}