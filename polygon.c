#include <stdio.h>

#define VER_MAX 16

typedef struct{
	int x;
	int y;
}Coord;

typedef struct{
	int x;
	int y;
}Vector;

typedef struct{
	Coord vertex[VER_MAX];
	int vertex_number;
	Vector side[VER_MAX];
	double angle[VER_MAX]; 
}Polygon;

void Read_vertex(FILE *file, Polygon *p){
	int number=0,i=0;
	Coord c;

	fscanf(file,"%d", &number);
	p->vertex_number = number;

	for(i=0;i<number;i++){
		fscanf(file,"%d%d", &c.x, &c.y);
		p->vertex[i] = c;
	}
}