#include "queen_attack.h"

static int	is_invalid(position_t pos)
{
	return (pos.row > 7 || pos.column > 7);
}

attack_status_t	can_attack(position_t queen_1, position_t queen_2)
{
	int	delta_row;
	int	delta_col;

	delta_row = (int)queen_1.row - (int)queen_2.row;
	delta_col = (int)queen_1.column - (int)queen_2.column;
	if (delta_row < 0)
		delta_row *= -1;
	if (delta_col < 0)
		delta_col *= -1;
	if (is_invalid(queen_1) || is_invalid(queen_2))
		return (INVALID_POSITION);
	if ((queen_1.row == queen_2.row) && (queen_1.column == queen_2.column))
		return (INVALID_POSITION);
	if (delta_row == 0 || delta_col == 0 || delta_row == delta_col)
		return (CAN_ATTACK);
	return (CAN_NOT_ATTACK);
}
