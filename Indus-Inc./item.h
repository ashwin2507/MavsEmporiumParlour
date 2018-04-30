#include <string>

class Item {
  public:
    Item(std::string name, std::string description, double cost, double price);
    void restock(int quantity = 25);
    void consume(int quantity = 1);
    virtual std::string type();
    std::string name();
    std::string description();
    double cost();
    double price();
    int quantity();
  private:
    std::string _name;
    std::string _description;
    double _cost;
    double _price;
    int _quantity;
    // Gtk::Image _photo;
};