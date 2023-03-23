#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59
 */

void jack_bauer(void)

{
	int hour, minute;

	for (hour = 0; hour < 24; hour++)
	{
	// Loop through hours
	for (minute = 0; minute < 60; minute++)
	{
	// Loop through minutes
	printf("%02d:%02d\n", hour, minute);
	// Print time in format "hh:mm"
	}
	}
}
