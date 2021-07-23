/**
    Simulation of an ABM for COVID-19
    @file screening.cpp
    @author Pierre-Yves Boelle, Chiara Poletto
    @version 1.0 2020-04-16
    @license GPL-3.0-or-later
*/

#include <stdio.h>
#include <iostream>
#include <vector>
#include <random>
#include <algorithm>
#include <array>
#include <string>
#include <iomanip>
#include <fstream>
#include <time.h>
#include <sstream>
#include <cmath>
#include <cstdlib>
#include <set>
#include <unordered_set>
#include <tuple>
#include <map>
#include <cerrno>
#include <cstring>
#include <iostream>
#include <sys/stat.h>
#include <sys/types.h>
#include <utility>

#include "defs.h"
#include "routine_miscellanea.hpp"
#include "testing.h"


using namespace std;


void screeningStep(int real, int it, Screening & screening, Testing & testing, Population & city, Networks &contacts, Places & places,
		Compartments &upd, Params & params,
		default_random_engine & generator,SimulationFiles & simulationFiles) {

   //do nothing
   // not implemented
}

