#ifndef _KP1_INCLUDE_KP1_LUMBER_H_
#define _KP1_INCLUDE_KP1_LUMBER_H_

#include <KP1/wood.h>
#include <KP1/date.h>
#include <KP1/sawing_option.h>

class Lumber
{
public:
  //Default constructor(with no parameters)
  Lumber();

  //Constructor with parameters
  Lumber(Wood wood,
         SawingOption sawing_option,
         Date delivery_date,
         int marking, int amount, int cost);

  //Copy constructor
  Lumber(const Lumber &copy);

  //Setters
  Lumber &SetWood(const Wood &wood);
  Lumber &SetSawingOption(const SawingOption sawing_option);
  Lumber &SetDeliveryDate(const Date &delivery_date);
  Lumber &SetMarking(const int marking);
  Lumber &SetAmount(const int amount);
  Lumber &SetCost(const int cost);

  //Getters
  Wood GetWood() const;
  SawingOption GetSawingOption() const;
  Date GetDeliveryDate() const;
  int GetMarking() const;
  int GetAmount() const;
  int GetCost() const;

  //Function for printing class info
  void Print();

  friend std::ostream &operator<<(std::ostream &out, const Lumber &copy);
  friend std::istream &operator>>(std::istream &in, Lumber &copy);

private:
  Wood wood_;
  SawingOption sawing_option_;
  Date delivery_date_;
  int marking_, amount_, cost_;
}; //Class (Lumber)

#endif //Header Guard