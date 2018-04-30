#include "main_window.h"

Main_window::Main_window(Controller &controller : _controller{controller}  {

    // /////////////////
    // G U I   S E T U P
    // /////////////////

    set_default_size(600, 500);

    // Put a vertical box container as the Window contents
    Gtk::Box *vbox = Gtk::manage(new Gtk::Box(Gtk::ORIENTATION_VERTICAL, 0));
    add(*vbox);

    // ///////
    // M E N U
    // Add a menu bar as the top item in the vertical box
    Gtk::MenuBar *menubar = Gtk::manage(new Gtk::MenuBar());
    vbox->pack_start(*menubar, Gtk::PACK_SHRINK, 0);

    //     F I L E
    // Create a File menu and add to the menu bar
    Gtk::MenuItem *menuitem_file = Gtk::manage(new Gtk::MenuItem("_File", true));
    menubar->append(*menuitem_file);
    Gtk::Menu *filemenu = Gtk::manage(new Gtk::Menu());
    menuitem_file->set_submenu(*filemenu);

        //         Q U I T
    // Append Quit to the File menu
    Gtk::MenuItem *menuitem_quit = Gtk::manage(new Gtk::MenuItem("_Quit", true));
    menuitem_quit->signal_activate().connect(sigc::mem_fun(*this, &Main_window::on_quit_click));
    filemenu->append(*menuitem_quit);

  
   // Toppings
   // Create a Topping menu and add to the menu bar
     Gtk::MenuItem *menuitem_top = Gtk::manage(new Gtk::MenuItem("Toppings", true));
    menubar->append(*menuitem_top);
    Gtk::Menu *topmenu = Gtk::manage(new Gtk::Menu());
    menuitem_top->set_submenu(*topmenu);

 //  ADD Toppings
// append list to the Topping menu
Gtk::MenuItem *menuitem_addt = Gtk::manage(new Gtk::MenuItem("ADD Topping", true));
    menuitem_addt->signal_activate().connect(sigc::mem_fun(*this, &Main_window::on_list));
    topmenu->append(*menuitem_addt);


 // Container
   // Create a Container menu and add to the menu bar
     Gtk::MenuItem *menuitem_cont = Gtk::manage(new Gtk::MenuItem("Container", true));
    menubar->append(*menuitem_cont);
    Gtk::Menu *contmenu = Gtk::manage(new Gtk::Menu());
    menuitem_cont->set_submenu(*contmenu);



 //  ADD Container
// append list to the Container menu
Gtk::MenuItem *menuitem_addc = Gtk::manage(new Gtk::MenuItem("ADD Topping", true));
    menuitem_addc->signal_activate().connect(sigc::mem_fun(*this, &Main_window::on_container_click);
    contmenu->append(*menuitem_addc);



    // Flavor
   // Create a Flavor menu and add to the menu bar
     Gtk::MenuItem *menuitem_fla = Gtk::manage(new Gtk::MenuItem("Flavor", true));
    menubar->append(*menuitem_fla);
    Gtk::Menu *flamenu = Gtk::manage(new Gtk::Menu());
    menuitem_fla->set_submenu(*flamenu);



 //  ADD Flavor
// append list to the Flavor menu
Gtk::MenuItem *menuitem_addf = Gtk::manage(new Gtk::MenuItem("ADD Flavor", true));
    menuitem_addf->signal_activate().connect(sigc::mem_fun(*this, &Main_window::on_flavor_click);
    flamenu->append(*menuitem_addf);


vbox->show_all();
   
}


Main_window::~Main_window() { }
// /////////////////
// C A L L B A C K S
// /////////////////


void Main_window::on_container_click() { con.execute_cmd(1); }

void Main_window::on_flavor_click() { con.execute_cmd(2); }

void Main_window::on_quit_click() { hide(); }
