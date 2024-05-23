#include "main.h"

void print_time(int hour, int minute);

/**
 * print_time - prints a formatted time in HH:MM format
 * @hour: the current hour
 * @minute: the current minute
 */

void print_time(int hour, int minute)
{
_putchar((hour / 10) + '0');
_putchar((hour % 10) + '0');
_putchar(':');
_putchar((minute / 10) + '0');
_putchar((minute % 10) + '0');
_putchar('\n');
}

/**
 * jack_bauer - prints every minute of the day from 8-24hrs
 */

void jack_bauer(void)
{
int hour;
int minute;

for (hour = 0; hour < 24; hour++)
{
for (minute = 0; minute < 60; minute++)
{
print_time(hour, minute);
}
}
}
