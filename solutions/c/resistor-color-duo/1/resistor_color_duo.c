#include "resistor_color_duo.h"

uint16_t	color_code(resistor_band_t *codes)
{
	uint16_t	value;

	value = codes[0];
	value = value * 10 + codes[1];
	return (value);
}
