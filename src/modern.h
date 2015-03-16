#pragma once

#include "pebble.h"

const GPathInfo MINUTE_HAND_POINTS = {
  4,
  (GPoint []) {
    {-4, 15},
    {4, 15},
    {4, -65},
    {-4, -65},
  }
};

const GPathInfo HOUR_HAND_POINTS = {
  4,
  (GPoint []) {
    {-4, 15},
    {4, 15},
    {4, -50},
    {-4, -50},
  }
};

// Lunar from 2015 to 2025
const int years[11] = {2015,2016,2017,2018,2019,2020,2021,2022,2023,2024,2025};

const int al[11][12][5] = {
  {
    {11,11,20,12,31},
    {13,11,19,1,28},
    {11,11,20,2,31},
    {13,11,19,3,30},
    {13,11,18,4,31},
    {15,11,16,5,30},
    {16,11,16,6,31},
    {17,11,14,7,31},
    {19,11,13,8,30},
    {19,11,13,9,31},
    {20,11,12,10,30},
    {20,11,11,11,31}
  },
  {
    {22,11,10,12,31},
    {23,11,8,1,29},
    {23,11,9,2,31},
    {24,11,7,3,30},
    {25,11,7,4,31},
    {26,11,5,5,30},
    {27,11,4,6,31},
    {29,11,3,7,31},
    {1,11,1,8,30},
    {1,11,1,9,31},
    {2,11,29,11,30},
    {3,11,29,12,31}
  },
  {
    {4,12,28,1,31},
    {5,12,26,2,28},
    {4,12,28,3,31},
    {5,12,26,4,30},
    {6,12,26,5,31},
    {7,12,24,6,30},
    {8,12,23,6,31},
    {10,12,22,7,31},
    {11,12,20,8,30},
    {12,12,20,9,31},
    {13,12,18,10,30},
    {14,12,18,11,31}
  },
  {
    {15,11,17,12,31},
    {16,11,16,1,28},
    {14,11,17,2,31},
    {16,11,16,3,30},
    {16,11,15,4,31},
    {18,11,14,5,30},
    {18,11,13,6,31},
    {20,11,11,7,31},
    {22,11,10,8,30},
    {22,11,9,9,31},
    {24,11,7,10,30},
    {25,11,7,11,31}
  },
  {
    {26,11,6,12,31},
    {27,11,5,1,28},
    {25,11,6,2,31},
    {27,11,5,3,30},
    {27,11,5,4,31},
    {28,11,3,5,30},
    {29,11,3,6,31},
    {1,11,1,7,31},
    {3,11,29,9,30},
    {3,11,28,10,31},
    {5,11,26,11,30},
    {6,11,26,12,31}
  },
  {
    {7,12,25,1,31},
    {8,12,23,2,29},
    {8,12,24,3,31},
    {9,12,23,4,30},
    {9,12,23,4,31},
    {10,12,21,5,30},
    {11,12,21,6,31},
    {12,12,19,7,31},
    {14,12,17,8,30},
    {15,12,17,9,31},
    {16,12,15,10,30},
    {17,12,14,11,31}
  },
  {
    {19,11,13,12,31},
    {20,11,12,1,28},
    {18,11,13,2,31},
    {20,11,12,3,30},
    {20,11,12,4,31},
    {21,11,10,5,30},
    {22,11,10,6,31},
    {23,11,8,7,31},
    {25,11,7,8,30},
    {25,11,6,9,31},
    {27,11,5,10,30},
    {27,11,4,11,31}
  },
  {
    {29,11,3,12,31},
    {1,11,1,1,28},
    {29,11,3,2,31},
    {1,11,1,3,30},
    {1,11,1,4,31},
    {3,11,29,6,30},
    {3,11,29,7,31},
    {4,11,27,8,31},
    {6,11,26,9,30},
    {6,11,25,10,31},
    {8,11,24,11,30},
    {8,11,23,12,31}
  },
  {
    {10,12,22,1,31},
    {11,12,20,2,28},
    {10,12,22,2,31},
    {11,12,20,3,30},
    {12,12,19,4,31},
    {14,12,18,5,30},
    {14,12,18,6,31},
    {15,12,16,7,31},
    {17,12,15,8,30},
    {17,12,15,9,31},
    {18,12,13,10,30},
    {19,12,13,11,31}
  },
  {
    {20,11,11,12,31},
    {22,11,10,1,29},
    {21,11,10,2,31},
    {23,11,9,3,30},
    {23,11,8,4,31},
    {25,11,6,5,30},
    {26,11,6,6,31},
    {27,11,4,7,31},
    {29,11,3,8,30},
    {29,11,3,9,31},
    {1,11,1,10,30},
    {1,11,1,11,31}
  },
  {
    {2,12,29,1,31},
    {4,12,28,2,28},
    {2,12,29,3,31},
    {4,12,28,4,30},
    {4,12,27,5,31},
    {6,12,25,6,30},
    {7,12,25,6,31},
    {8,12,23,7,31},
    {10,12,22,8,30},
    {10,12,21,9,31},
    {12,12,20,10,30},
    {12,12,20,11,31}
  },
}; 



