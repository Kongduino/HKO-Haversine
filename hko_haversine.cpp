#include "hko_haversine.h"

int main() {
  char buffer[256];
  printf("Enter lat: ");
  fgets(buffer, 256, stdin);
  float lat1 = atof(buffer);
  printf("Enter lon: ");
  fgets(buffer, 256, stdin);
  float lon1 = atof(buffer);
  uint8_t x= closestDataPoint(lat1, lon1);
  
  printf ("Closest Data Point = %s, %f,%f distance: %2.2f km.\n", hkoName[x], hkoLat[x], hkoLon[x], dl);
  return 0;
}
