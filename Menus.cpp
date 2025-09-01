#include "Menus.h"

void Menus::addObserver(Observer* observer){
    observers.pushback(observer);
    cout << "Observer Added Successfully." << endl;
}
void removeObserver(Observer* observer){
  bool found = false;
  vector<Observer*>::iterator it = observers.begin();
  while ((it != observers.end()) && (! found)) {
    if (*it == observer) {
      found = true;
      observers.erase(it);
    }
    ++it;
  }
  if(found){
    cout << "Observer is not on the list." << endl;
  }
  else{
    cout << "Observer Removed Successfully." << endl;
  }
}
void Menus::addPizza(Pizza pizza){
}
void Menus::removePizza(Pizza pizza){
}
void PizzaMenu::notifyObservers(String message){
}
void SpecialsMenu::notifyObservers(String message){
}