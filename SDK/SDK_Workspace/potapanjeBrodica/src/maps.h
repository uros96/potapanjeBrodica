#ifndef MAPS_H_INCLUDED
#define MAPS_H_INCLUDED

#include <stdio.h>
#include <string.h>


char mask[100] = {
	'#','#','#','#','#','#','#','#','#','#',
	'#','#','#','#','#','#','#','#','#','#',
	'#','#','#','#','#','#','#','#','#','#',
	'#','#','#','#','#','#','#','#','#','#',
	'#','#','#','#','#','#','#','#','#','#',
	'#','#','#','#','#','#','#','#','#','#',
	'#','#','#','#','#','#','#','#','#','#',
	'#','#','#','#','#','#','#','#','#','#',
	'#','#','#','#','#','#','#','#','#','#',
	'#','#','#','#','#','#','#','#','#','#'
};

char c[100] = {
    '0','0','0','0','0','0','0','0','0','0',
    '0','0','0','0','0','0','0','0','0','0',
    '0','0','0','0','0','0','0','0','0','0',
    '0','0','0','0','0','0','0','0','0','0',
    '0','0','0','0','0','0','0','0','0','0',
    '0','0','0','0','0','0','0','0','0','0',
    '0','0','0','0','0','0','0','0','0','0',
    '0','0','0','0','0','0','0','0','0','0',
    '0','0','0','0','0','0','0','0','0','0',
    '0','0','0','0','0','0','0','0','0','0'
};

char map0[100] = {
	'0','0','0','1','1','1','0','0','0','0',
	'0','0','0','0','0','0','0','0','0','0',
	'0','1','0','0','0','1','1','0','0','1',
	'0','1','0','1','0','0','0','0','0','1',
	'0','1','0','0','0','0','0','0','0','0',
	'0','0','0','1','0','0','0','0','0','0',
	'0','0','0','0','0','0','0','0','0','0',
	'0','0','0','1','0','0','0','0','0','0',
	'1','0','0','0','0','1','1','1','1','0',
	'1','0','0','1','0','0','0','0','0','0'
};

char map1[100] = {
	'0','0','0','0','1','0','0','0','0','1',
	'0','0','0','0','1','0','1','0','0','0',
	'1','1','0','0','0','0','1','0','0','1',
	'0','0','0','0','0','0','1','0','0','0',
	'0','1','0','0','0','0','1','0','0','0',
	'0','0','0','0','0','0','0','0','0','0',
	'0','0','0','0','0','0','0','1','0','0',
	'0','0','1','1','1','0','0','0','0','0',
	'0','0','0','0','0','0','0','0','0','0',
	'1','1','0','0','0','1','1','1','0','0'
};

char map2[100] = {
	'0','0','0','0','1','0','1','1','0','1',
	'0','1','0','0','0','0','0','0','0','0',
	'0','1','0','0','0','1','1','1','1','0',
	'0','1','0','0','0','0','0','0','0','0',
	'0','0','0','0','0','0','0','1','1','1',
	'0','0','0','0','0','0','0','0','0','0',
	'0','0','0','0','1','0','0','0','0','0',
	'0','0','0','0','0','0','0','0','0','0',
	'0','0','0','1','0','0','0','0','0','0',
	'1','1','0','0','0','0','0','1','1','0'
};

char map3[100] = {
	'0','0','0','0','0','1','1','0','0','0',
	'0','0','0','0','0','0','0','0','1','1',
	'0','1','0','0','1','0','0','0','0','0',
	'0','1','0','0','0','0','0','0','1','0',
	'0','0','0','0','1','1','1','0','0','0',
	'0','0','1','0','0','0','0','0','0','0',
	'1','0','1','0','0','0','0','0','0','0',
	'0','0','1','0','1','1','1','0','0','0',
	'0','0','1','0','0','0','0','0','0','0',
	'0','0','0','0','0','0','0','0','1','0'
};

char map4[100] = {
	'0','0','1','0','0','0','0','0','0','1',
	'0','0','1','0','0','0','0','0','0','0',
	'0','0','0','0','0','0','1','1','0','0',
	'0','0','0','0','0','0','0','0','0','1',
	'1','0','0','0','0','0','0','0','0','0',
	'0','0','0','0','1','0','0','0','0','1',
	'1','1','0','0','1','0','0','0','0','1',
	'0','0','0','0','1','0','0','0','0','1',
	'0','0','0','0','0','0','1','0','0','1',
	'1','1','1','0','0','0','0','0','0','0'
};

char map5[100] = {
	'0','0','1','0','0','0','1','0','0','0',
	'0','0','1','0','0','0','0','0','0','0',
	'0','0','1','0','1','0','0','0','0','0',
	'0','0','0','0','0','0','1','0','0','0',
	'1','1','0','1','1','0','1','0','0','0',
	'0','0','0','0','0','0','1','0','0','1',
	'0','1','0','0','0','0','0','0','0','1',
	'0','0','0','0','0','0','0','0','0','1',
	'0','1','0','0','1','0','0','0','0','1',
	'0','0','0','0','1','0','0','0','0','0'
};

char map6[100] = {
	'1','0','1','0','0','0','0','0','0','0',
	'0','0','0','0','0','0','1','1','1','0',
	'0','0','0','0','0','0','0','0','0','0',
	'1','1','0','0','0','0','0','0','0','1',
	'0','0','0','0','0','1','1','0','0','1',
	'0','0','0','0','0','0','0','0','0','1',
	'0','0','1','1','1','1','0','0','0','0',
	'0','0','0','0','0','0','0','0','0','0',
	'0','0','1','0','0','0','0','0','1','0',
	'0','0','0','0','1','0','0','0','1','0'
};

char map7[100] = {
	'0','0','0','0','1','0','0','0','0','0',
	'1','0','0','0','1','0','0','0','0','0',
	'1','0','1','0','0','0','1','0','0','1',
	'0','0','0','0','0','0','0','0','0','1',
	'0','0','0','0','0','0','0','0','0','1',
	'0','0','0','0','0','0','0','0','0','1',
	'0','1','1','1','0','0','0','1','0','0',
	'0','0','0','0','0','0','0','0','0','0',
	'0','0','0','1','1','1','0','0','1','0',
	'1','0','0','0','0','0','0','0','1','0'
};

char map8[100] = {
	'0','1','0','0','0','0','0','0','0','0',
	'0','0','0','1','0','0','0','1','0','0',
	'0','1','0','1','0','0','0','1','0','0',
	'0','0','0','0','0','0','0','1','0','1',
	'0','0','0','0','0','0','0','0','0','1',
	'0','1','0','0','0','0','0','0','0','0',
	'0','1','0','0','0','1','1','1','1','0',
	'0','0','0','0','0','0','0','0','0','0',
	'0','0','1','1','1','0','1','0','1','0',
	'0','0','0','0','0','0','0','0','0','0'
};

char map9[100] = {
	'0','0','0','1','0','0','0','0','0','0',
	'0','0','0','0','0','0','0','0','0','1',
	'0','0','0','0','0','0','0','1','0','1',
	'0','1','0','1','1','0','0','0','0','1',
	'0','1','0','0','0','0','0','1','0','0',
	'0','0','0','0','0','0','0','0','0','0',
	'0','1','0','0','0','0','0','1','1','0',
	'0','1','0','1','0','0','0','0','0','0',
	'0','1','0','0','0','0','0','0','0','0',
	'0','0','0','1','1','1','1','0','0','0'
};

char* map() {

	int random = rand() % 10;

    switch(random) {
		case 0:
			return map0;
		case 1:
			return map1;
		case 2:
			return map2;
		case 3:
			return map3;
		case 4:
			return map4;
		case 5:
			return map5;
		case 6:
			return map6;
		case 7:
			return map7;
		case 8:
			return map8;
		case 9:
			return map9;
		default:
			return c;
	}
};

#endif // MAPS_H_INCLUDED
