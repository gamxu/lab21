#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect *R1, Rect *R2){
	double area;
	Rect l1,r1,l2,r2;
	l1.x = R1->x;
	r1.x = R1->x + R1->w;
	l1.y = R1->y;
	r1.y = R1->y - R1->h;

	l2.x = R2->x;
	r2.x = R2->x + R2->w;
	l2.y = R2->y;
	r2.y = R2->y - R2->h;


	double x_dist = min(r1.x, r2.x) - max(l1.x, l2.x);
    double y_dist = min(l1.y, l2.y) - max(r1.y, r2.y);
	
	if( x_dist > 0 && y_dist > 0 )
    {
        area = x_dist * y_dist;
    }else area =0;
	

	return area;

}

int main(){
			
	
	Rect R1 = {1,1,5,5};
	Rect R2 = {7,2,3,3};
	cout << overlap(&R1,&R2);

	return 0;
}
