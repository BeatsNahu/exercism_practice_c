#ifndef DARTS_H
#define DARTS_H

#include <stdint.h>

#define OUTER_RADIUS 10.0F
#define MIDDLE_RADIUS 5.0F
#define INNER_RADIUS 1.0F
#define SCORE_OUTER 1
#define SCORE_MIDDLE 5
#define SCORE_INNER 10

typedef	struct {
	float	x;
	float	y;
} coordinate_t;

uint8_t	score(coordinate_t landing_position);

#endif
