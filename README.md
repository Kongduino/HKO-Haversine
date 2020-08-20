# HKO Haversine

A small demo using the Haversine formula to calculate the distance between two coordinates.

I needed for a real-use case (to get MSL Air Pressure and calibrate BMP/BME280) to get the closest HKO station. I coded it first in JS, so that I could check right then and there in the browser how things went, then recoded it (more like changed a little syntax here and there) to C++. It's C, really but since this was to be used in Arduino IDE, well, might as well make it official... ;-)

The main function is `uint8_t closestDataPoint(float lat1, float lon1)` / `function closestDataPoint(lat1, lon1)`. The utility function `float haversine(float lat1, float lon1, float lat2, float lon2)` / `function haversine(lat1, lon1, lat2, lon2)` could come in handy too.



