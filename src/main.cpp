// This is a personal academic project. Dear PVS-Studio, please check it.
// PVS-Studio Static Code Analyzer for C, C++ and C#: http://www.viva64.com

#include <KP1/workshop.h>

#include <iostream>

void EditWorkshop(Workshop &workshop)
{
  int ch = -1;
  bool print_shortly = false;
  bool is_toy_avaliable_to_sell = true;
  while (ch != 0)
  {
    do
    {
      std::system("clear");
      if (is_toy_avaliable_to_sell == false)
      {
        std::cout << "[WARNING]Could not sell last toy" << std::endl
                  << std::endl;
      }
      if (print_shortly == false)
      {
        workshop.Print();
        if (workshop.GetSize() != 0)
        {
          std::cout << std::endl;
        }
        std::cout << "1) Switch to shortly output" << std::endl;
      }
      else
      {
        workshop.PrintShortly();
        std::cout << "1) Switch to full output" << std::endl;
      }
      std::cout << "2) Add lumber" << std::endl;
      std::cout << "3) Remove wood" << std::endl;
      std::cout << "0) Exit" << std::endl;
      std::cin >> ch;
    } while (ch != 0 && ch != 1 && ch != 2 && ch != 3);
    switch (ch)
    {
    case (1):
    {
      if (print_shortly == false)
      {
        print_shortly = true;
      }
      else
      {
        print_shortly = false;
      }
      break;
    }
    case (2):
    {
      Lumber lumber;
      std::cin >> lumber;
      workshop.AddLumber(lumber);
      break;
    }
    case (3):
    {
      Wood wood;
      std::cin >> wood;
      is_toy_avaliable_to_sell = workshop.RemoveWood(wood);
      break;
    }
    }
  }
}

int main()
{
  Workshop workshop;
  EditWorkshop(workshop);
  return 0;
}