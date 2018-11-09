#include"pch.h"
#include<stdio.h>
#include<time.h>
#include<Windows.h>
#include"DigitalClock.h"
void DigitalClock_GetTime()
{
	time_t now = time(NULL);
	struct tm time;
	localtime_s(&time, &now);

	printf("%04d-%02d-%02d %02d:%02d:%02d\n",
		time.tm_year + 1900,
		time.tm_mon + 1,
		time.tm_mday,
		time.tm_hour,
		time.tm_min,
		time.tm_sec);
	DigitalClock dgc = { 0, };
	dgc.year = time.tm_year + 1900;
	dgc.month = time.tm_mon + 1;
	dgc.dayOfMonth = time.tm_mday;
	dgc.dayOfWeek = time.tm_wday;
	dgc.hour = 
}