#ifndef EPSGRAPHICS_H
#define EPSGRAPHICS_H

typedef struct {
	double width;
	double height;
	double x_coordinate;
	double y_coordinate;
}Figure;

typedef struct 
{
	int x, y;
	char name[20];
}Point2D;

typedef struct 
{
	
}Color;

typedef struct 
{
	int data;
	struct Tree* left;
	struct Tree* right;
	
}Tree;

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




#endif
