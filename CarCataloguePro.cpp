#include "CarCatProHeaders.h"

//**********************************************************************************************************************

int main() {

  // First we initialize the head and tail, we do this here and then pass them around the whole program
  car* head = nullptr;
  car* tail = nullptr;

  // Then we initialize the actual catalogue
  std::vector<car*> carCatalogue;

  loadCatalogue(head, tail, carCatalogue);

  oprionsMenu(head, tail, carCatalogue);

  return 0;
}

//**********************************************************************************************************************
