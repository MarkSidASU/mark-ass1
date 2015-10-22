#include <iostream>
#include <string>
using namespace std;

class Move
{
private:
	double x;
	double y;
public:
	Move(double a = 0, double b = 0) {			// sets x, y to a,b
		x = a;
		y = b;
	}
		void showmove() const{			// shows current x, y values
			cout << endl;
			cout << x;
			cout << endl;
			cout << y;
			cout << endl;
		} 
		Move add(const Move & m) const{
			double new_x = m.x + x;
			double new_y = m.y + y;
			Move item(new_x, new_y);
			return item;
		}
	
		void reset(double a=0 , double b=0){
			x = a;
			y = b;
		}
};
void main(){
	Move point1(10,10);
	Move point2(5, 5);
	Move point3;
	cout << "point1 is "; 
	point1.showmove();
	cout << "point2 is ";
	point2.showmove();
	cout << "point1+point2 is";
	point3= point1.add(point2);
	point3.showmove();
	system("Pause");
}