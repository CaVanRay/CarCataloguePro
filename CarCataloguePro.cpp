#include "CarCatProHeaders.h"

//**********************************************************************************************************************

int main() {

  car* head = nullptr;
  car* tail = nullptr;

  std::vector<car*> carCatalogue;

  loadCatalogue(head, tail, carCatalogue);

  oprionsMenu(head, tail, carCatalogue);
  
}

//**********************************************************************************************************************
