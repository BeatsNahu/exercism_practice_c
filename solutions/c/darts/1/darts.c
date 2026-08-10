#include "darts.h"

uint8_t	score(coordinate_t landing_position)
{
	float	distance;
	float	x;
	float	y;

	x = landing_position.x;
	y = landing_position.y;
	distance = (x * x) + (y * y);
	if (distance > OUTER_RADIUS * OUTER_RADIUS)
		return (0);
	else if (distance > MIDDLE_RADIUS * MIDDLE_RADIUS)
		return (SCORE_OUTER);
	else if (distance > INNER_RADIUS * INNER_RADIUS)
		return (SCORE_MIDDLE);
	else
		return (SCORE_INNER);
}
