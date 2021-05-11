#include "datum.h"

int main(int argc, char* argv[]) {

Date* test = newDate(2,9,1990);
Date* test2 = newDate(1,1,1889);
Date* test3 = newDate(29,2,1993);

int i = isMeaningful(test);
int i2 = isMeaningful(test2);
int i3 = isMeaningful(test3);

//printf( "results: %d, %d, %d\n", i, i2, i3);


return 0;

}

int isMeaningful(Date* date){
	int ret = 0;
	
	int y = getDateYear(date); //date->y;
	int m = getDateMonth(date); //date->m;
	int d = getDateDay(date);//date->d;
	

	if(y < MINYEAR){
		printf("%d.%d.%d throws error - year must be y > 1900\n", d,m,y);
		return 0;
	}
	
	if(m < 0 || m > 12){
		printf("%d.%d.%d throws error - month must be 0 < m < 13\n", d,m,y);
		return 0;
	}
	
	if (m == 2){ // schaltjahr
		if(d < MINDAY || d > MAXDAYF){
			printf("%d.%d.%d throws error - day must be 0 < d <= 29\n", d,m,y);
			return 0;
		}else{
			if(y % 4 == 0){ // schaltjahr
				if(d > 28){
					printf("%d.%d.%d throws error - day must be 0 < d <= 28\n", d,m,y);
					return 0;}
			}else{
				if (d == 29){
					printf("%d.%d.%d throws error - day must be 0 < d <= 28\n", d,m,y);
					return 0;
					}
			}
		}
			
	}else{
		if ((m % 2 == 0) && (m != 8)){
			if (d < MINDAY || d > MAXDAYE){
				printf("%d.%d.%d throws error - day must be 0 < d <= 30\n", d,m,y);
				return 0;
			}else{
				ret = 1;	
			}
		}else if (m == 8){
			if (d < MINDAY || d > MAXDAYO){
				printf("%d.%d.%d throws error - day must be 0 < d <= 31\n", d,m,y);
				return 0;
			}else{
				ret = 1;	
			}
		}else{
			if (d < MINDAY || d > MAXDAYO){
				printf("%d.%d.%d throws error - day must be 0 < d <= 31\n", d,m,y);
				return 0;
			}else{
				ret = 1;	
			}
		}
		
	}
	
	return ret;
	

}

Date* newDate(int d, int m, int y){
	Date* ret = malloc(sizeof(Date));
	assert( ret != NULL);
	
	setDateDay(ret,d);
	setDateMonth(ret, m);
	setDateYear(ret, y);
	
	return ret;
}

Date* delDate(Date* date){
	assert(date != NULL);
/*	free(date->d);
	free(date->m);
	free(date->y);*/
	free(date);
	
	return NULL;

}

void setDateDay(Date* date, int d){
	assert(date != NULL);
	date->d = d;

}
void setDateMonth(Date* date, int m){
	assert(date != NULL);
	date->m = m;

}
void setDateYear(Date* date, int y){
	assert(date != NULL);
	date->y = y;

}

int getDateDay(Date* date){
	assert(date != NULL);
	return date->d;
}
int getDateMonth(Date* date){
	assert(date != NULL);
	return date->m;
}

int getDateYear(Date* date){
	assert(date != NULL);
	return date->y;
}


//eof
