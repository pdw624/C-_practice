#include <iostream>
using namespace std;

class Point{
private:
	int x;
	int y;
public:
	Point(int xNum, int yNum){
		x = xNum;
		y = yNum;
	}
	Point(){

	}

	int getX(){
		return x;
	}
	int getY(){
		return y;
	}
	//설정
	void setX(int xNum){
		x = xNum;
	}
	void setY(int yNum){
		y = yNum;
	}
	//
	void showInfo(){
		cout<<"x 값 : "<<getX()<<", y값 : "<<getY()<<endl;
	}
	//
	/*void Init(int a, int b){
		x=a;
		y=b;
	}*/
};



int main(){
	/*Point p1;
	p1.setX(5);
	p1.setY(4);
	p1.Init(1,2);
	p1.showInfo();*/
	Point p1(3,4);
}