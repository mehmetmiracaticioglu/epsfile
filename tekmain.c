#include <stdio.h>

struct figure{
	double width;
	double height;
	double x_coordinate;
	double y_coordinate;
};

typedef struct figure Figure;

struct point2D
{
	int x, y;
	char name[20];
};

typedef struct point2D Point2D;

struct color
{
    double red;
    double green;
    double blue;
};

typedef struct color Color;

struct tree
{

};

typedef struct tree Tree;

Figure * start_figure(double width, double height);

void set_thickness_resolution(Figure * fig, double thickness, double resolution);

void set_color(Figure * fig, Color c);

void draw_fx(Figure * fig, double f(double x), double start_x, double end_x);

void draw_polyline(Point2D * poly_line, int n);

void draw_circle(Point2D * center, double r);

void draw_ellipse();

void draw_binary_tree(Tree * root);

void scale_figure(double scale_x, double scale_y);

void resize_figure(Point2D start_roi, Point2D end_roi);

void append_figures(Figure * fig1, Figure * fig2);

void export_eps(Figure * fig, char * file_name);

void draw_koch_snowflake(Point2D * center, double thickness, int size, int num_iterations);

void draw_fractal_tree(double center_x, double center_y, int size, int num_iterations);

void draw_fractal_atree(double center_x, double center_y, int size, int num_iterations);

int main(void){
	Figure *fig;

	fig=start_figure(111.0,112.0);













	return 0;
}

Figure * start_figure(double width, double height){
    char yuzde ='%';
	Figure figure1;
	figure1.x_coordinate=0.0;
	figure1.y_coordinate=0.0;
	figure1.width=100.0;
	figure1.height=102.0;
	FILE *fp;

	if((fp=fopen("proje.eps","w+"))==NULL){
		printf("File could not be open\n");
	}
	else{
		fprintf(fp, "%c!PS-Adobe-3.0 EPSF-3.0\n",yuzde );
		fprintf(fp, "%c%cBoundingBox: ",yuzde,yuzde );
		fprintf(fp, "%lf %lf %lf %lf\n",figure1.x_coordinate, figure1.y_coordinate,
		figure1.width, figure1.height );
		fprintf(fp, "10 setlinewidth\n" );
		printf("oldu");
		}

		return &figure1;
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

}

void draw_koch_snowflake(Point2D * center, double thickness, int size, int num_iterations){

}

void draw_fractal_tree(double center_x, double center_y, int size, int num_iterations){

}

void draw_fractal_atree(double center_x, double center_y, int size, int num_iterations){

}
