#pragma once
#include <vector>
#include "Cars.h"

// Function for saving current catalogue to file

void saveCatalogue(car*& head);

// Function for checking for previous catalogues saved
// If it exists it takes the catalogue save file 
// & loads it into this instance of carcatalogue

void loadCatalogue(car*& head, car*& tail, std::vector<car*>& carCatalogue);
