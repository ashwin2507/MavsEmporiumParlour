#ifndef MAIN_WINDOW_H
#define MAIN_WINDOW_H

#include <gtkmm.h>
#include "controller.h"

class Main_window : public Gtk::Window
{
    public:
        Main_window(Controller& controller);
        virtual ~Main_window();

    protected:
        void on_container_click();         // Add Container
        void on_flavor_click();            // Add Flavor
        void on_quit_click();            // Exit the game

    private:
    	Controller& _controller;
};
#endif 



