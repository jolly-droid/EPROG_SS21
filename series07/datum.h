#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

#define MINYEAR 1900
#define MAXDAYO 31
#define MAXDAYE 31
#define MAXDAYF 29
#define MINDAY 1

typedef struct _date_ {
	int d;
	int m;
	int y;
}Date;


int isMeaningful(Date* date);
Date* newDate(int d, int m, int y);
Date* delDate(Date* date);

void setDateDay(Date* date, int d);
void setDateMonth(Date* date, int m);
void setDateYear(Date* date, int y);
int getDateDay(Date* date);
int getDateMonth(Date* date);
int getDateYear(Date* date);
