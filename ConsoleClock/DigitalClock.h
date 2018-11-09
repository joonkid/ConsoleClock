#pragma once

enum {
	HOUR_LEFT,
	HOUR_RIGHT,
	DELIMITER_BETWEEN_HOUR_AND_MINUTE,
	MINUTE_LEFT,
	MINUTE_RIGHT,
	DELIMITER_BETWEEN_HOUR_AND_SECOND,
	MINUTE_LEFT,
	MINUTE_RIGHT


};

typedef struct _digitalClock
{
int year;
int month;
int dayOfMonth;
int dayOfWeek;
int hour;
int minute;
int second;
}DigitalClock;

#define ONE_SECOND 1000;
#define INTIAL_X_POSITION_FOR_TIME 2
#define INTIAL_Y_POSITION_FOR_TIME 3
#define Y_OFFSET_FOR_TIME 8
#define INTIAL_X_POSITION_FOR_DATE 22
#define INTIAL_Y_POSITION_FOR_DATE 1 

#define TRUE 1
#define FALSE 0

DigitalClock DigitalClock_GetTime();
void DigitalClock_Print(DigitalClock digitalClock);