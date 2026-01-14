#include "CarCatProHeaders.h"

//**********************************************************************************************************************

int main() {

  // First we initialize the head and tail, we do this here and then pass them around the whole program
  car* head = nullptr;
  car* tail = nullptr;

  // Then we initialize the actual catalogue, regardless of whether we have one saved or not, we will need this to hold our cars
  std::vector<car*> carCatalogue;

  // The actually checking for previously saved catalogues is handled in another file, but the function call is loadCatalogue()
  loadCatalogue(head, tail, carCatalogue);

  // Now that everything is setup, we can proceed to actually using the program to do whatever it is we want/need to do
  oprionsMenu(head, tail, carCatalogue);

  return 0;
}

//**********************************************************************************************************************
