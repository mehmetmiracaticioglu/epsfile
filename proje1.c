#include "epsgraphics.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


Figure * start_figure(double width, double height){
	Figure *figure1;
	figure1=(Figure *)malloc(sizeof(Figure));

	figure1->x_coordinate=0.0;
	figure1->y_coordinate=0.0;
	figure1->width=width;
	figure1->height=height;


	return figure1;
	}

void set_thickness_resolution(Figure * fig, double thickness, double resolution){

}

void set_color(Figure * fig, Color c){

}

void draw_fx(Figure * fig, double f(double x), double start_x, double end_x){

}

void draw_polyline(Point2D * poly_line, int n){

}

void draw_circle(Point2D * center, double r){

}

void draw_ellipse(){

}

void draw_binary_tree(Tree * root){
	

}

void scale_figure(double scale_x, double scale_y){

}

void resize_figure(Point2D start_roi, Point2D end_roi){

}

void append_figures(Figure * fig1, Figure * fig2){

}

void export_eps(Figure * fig, char * file_name){

	FILE *fp;	
	fig=(Figure *)malloc(sizeof(Figure));
	
	if((fp=fopen(file_name,"w+"))==NULL){
		printf("File could not be open\n");
	}
	else{
		char yuzde = '%';
		fprintf(fp, "%c!PS-Adobe-3.0 EPSF-3.0\n",yuzde );
		fprintf(fp, "%%%%BoundingBox: ");
		fprintf(fp, "%lf %lf %lf %lf\n",fig->x_coordinate, fig->y_coordinate,
		fig->width, fig->height );
		fprintf(fp, "10 setlinewidth\n" );
		printf("oldu\n");
		}


}

void draw_koch_snowflake(Point2D * center, double thickness, int size, int num_iterations){

}

void draw_fractal_tree(double center_x, double center_y, int size, int num_iterations){

}

void draw_fractal_atree(double center_x, double center_y, int size, int num_iterations){

}
