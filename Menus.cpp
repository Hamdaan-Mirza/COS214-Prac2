#include "Menus.h"

void Menus::addObserver(Observer *observer)
{
  observers.push_back(observer);
  std::cout << "Observer Added Successfully." << std::endl;
}
void Menus::removeObserver(Observer *observer)
{
  bool found = false;
  std::vector<Observer *>::iterator it = observers.begin();
  while ((it != observers.end()) && (!found))
  {
    if (*it == observer)
    {
      found = true;
      observers.erase(it);
    }
    ++it;
  }
  if (found)
  {
    std::cout << "Observer Removed Successfully." << std::endl;
  }
  else
  {
    std::cout << "Observer is not on the list." << std::endl;
  }
}
void PizzaMenu::addPizza(Pizza *pizza)
{
  pizzas.push_back(pizza);
  std::cout << "Pizza Added Successfully." << std::endl;
  std::string m = "Exciting News! We've added a delicious new " + pizza->getName() + " pizza to our regular menu! Try it today at Romeo's Pizza! #NewPizza #RomeosPizza";
  this->notifyObservers(m);
}
void PizzaMenu::removePizza(Pizza *pizza)
{
  bool found = false;
  std::vector<Pizza *>::iterator it = pizzas.begin();
  while ((it != pizzas.end()) && (!found))
  {
    if (*it == pizza)
    {
      found = true;
      pizzas.erase(it);
    }
    ++it;
  }
  if (found)
  {
    std::cout << "Pizza Removed Successfully." << std::endl;
    std::string m = "Heads up! We've said goodbye to " + pizza->getName() + " on our regular menu. Try our other tasty pizzas at Romeo's Pizza! #MenuUpdate";
    this->notifyObservers(m);
  }
  else
  {
    std::cout << "Pizza is not on the menu." << std::endl;
  }
}
std::vector<Pizza *> PizzaMenu::getPizzas(){
  return pizzas;
}
void PizzaMenu::notifyObservers(std::string message)
{
  std::vector<Observer *>::iterator it = observers.begin();
  for (it = observers.begin(); it != observers.end(); ++it)
  {
    (*it)->update(message);
  }
}
void SpecialsMenu::addSpecial(std::string special)
{
  specials.push_back(special);
  std::cout << "Special Added Successfully." << std::endl;
  std::string m = "Spice up your week with our latest special! ***" + special + "***Check out the Specials Menu at Romeo's Pizza! #LimitedTimeOffer";
  this->notifyObservers(m);
}
std::vector<std::string> SpecialsMenu::getSpecials(){
  return specials;
}
void SpecialsMenu::notifyObservers(std::string message)
{
  std::vector<Observer *>::iterator it = observers.begin();
  for (it = observers.begin(); it != observers.end(); ++it)
  {
    (*it)->update(message);
  }
}