//#include <iostream>
//#include <string.h>
//#include <stdlib.h>
////#define ID_LEN
////#define MAX_SPD
////#define FUEL_STEP 
////#define ACC_STEP 
////#define BRK_STEP 
//using namespace std;
//
//
////char *MakeStrAdr(int len){
////	char *str = (char*)malloc(sizeof(char)*len);
////	return str;
////}
//
////void ex1(){
////	char *str = MakeStrAdr(20);
////	strcpy(str, "I am so happy~");
////	cout<<str<<endl;
////	free(str);
////}
//
//char *MakeStrAdr(int len){
//	char *str = new char[len];
//	return str;
//}
//void ex2(){
//	char *str = MakeStrAdr(20);
//	strcpy(str, "I am so happy~");
//	cout<<str<<endl;
//	delete []str;
//}
////�����ڰ� �Ű�����
//int adder(int &refNum){
//	refNum++;
//	return refNum;
//}
//int pm(int &refNum){
//	refNum *= -1;
//	return refNum;
//}
//
//void func1(){
//	int num = 10;
//	cout<<adder(num)<<endl;
//	cout<<pm(num)<<endl;
//}
////������ ������ ����
//
//
//void func3(){
//	const int num = 12;
//	const int *ptr = &num;//������
//	const int *&pNum = ptr;//������
//
//	cout << *ptr << endl;
//	cout << *pNum << endl;
//}
////���� �Ű������� ����
//char *arrStr(int len){
//	char *str = new char[len];
//	return str;
//}
//
//void func4(){
//	char *str = arrStr(20);
//	strcpy(str, "Hello world");
//	cout<<str<<endl;
//	delete []str;
//	
//}
////����ü �Ű�����
//typedef struct {
//	int xpos;
//	int ypos;
//}Point;
//
//Point &PntAdder(const Point &ptr1, const Point &ptr2){
//	Point *temp = new Point;
//	temp->xpos = ptr1.xpos + ptr2.xpos;
//	temp->ypos = ptr1.ypos + ptr2.ypos;
//	return *temp;
//}
//
//void func5(){
//	Point *p1 = new Point;
//	p1->xpos = 1;
//	p1->ypos = 1;
//	Point *p2 = new Point;
//	p2->xpos = 3;
//	p2->ypos = 4;
//
//	Point &ref = PntAdder(*p1, *p2);
//	cout << ref.xpos << " " << ref.ypos <<endl;
//	delete p1;
//	delete p2;
//	delete &ref;
//}
////����ü�ȿ� �Լ� ���� ����
////struct Car{
////	char gamerID[ID_LEN];//������ ID
////	int fuelGauge;//���ᷮ
////	int curSpeed;//���� �ӵ�
////
////	void ShowCarState(){
////		cout<<"������ID : "<<gamerID<<endl;
////		cout<<"���ᷮ : "<<fuelGauge<<"%"<<endl;
////		cout<<"���� �ӵ� : "<<curSpeed<<"km/s"<<endl<<endl;
////	}
////	void Accel(){
////		if(fuelGauge<=0){
////			return;
////		}
////		else{
////			fuelGauge=FUEL_STEP;
////		}
////		if(curSpeed+ACC_STEP>=MAX_SPD){
////			curSpeed = MAX_SPD;
////			return;
////		}
////		curSpeed+=ACC_STEP;
////	}
////	void Break(){
////		if(curSpeed<BRK_STEP){
////			curSpeed = 0;
////			return;
////		}
////		curSpeed-=BRK_STEP;
////	}
////
////};
//
//
//namespace CAR_CONST{
//	enum{
//		ID_LEN = 20,
//		MAX_SPD =200,
//		FUEL_STEP= 2,
//		ACC_STEP =10,
//		BRK_STEP =10
//	};
//}
////struct Car{
////	char gamerID[CAR_CONST::ID_LEN];
////	int fuelGauge;
////	int curSpeed;
////
////	void ShowCarState();
////	void Accel();
////	void Break();
////};
//
//class Car{
//private:
//	char gamerID[CAR_CONST::ID_LEN];
//	int fuelGauge;
//	int curSpeed;
//public:
//	void InitMembers(const char *ID, int fuel);
//	void ShowCarState();
//	void Accel();
//	void Break();
//};
//
//void Car::ShowCarState(){
//	cout<<"������ID : "<<gamerID<<endl;
//	cout<<"���ᷮ : "<<fuelGauge<<"%"<<endl;
//	cout<<"����ӵ� : "<<curSpeed<<"km/s"<<endl<<endl;
//}
//void Car::Accel(){
//	if(fuelGauge<=0){
//		return;
//	}
//	else{
//		fuelGauge -=CAR_CONST::FUEL_STEP;
//	}
//	if((curSpeed+CAR_CONST::ACC_STEP)>=CAR_CONST::MAX_SPD){
//		curSpeed = CAR_CONST::MAX_SPD;
//		return;
//	}
//	curSpeed += CAR_CONST::ACC_STEP;
//}
//void Car::Break(){
//	if(curSpeed<CAR_CONST::BRK_STEP){
//		curSpeed=0;
//		return;
//	}
//	curSpeed-=CAR_CONST::BRK_STEP;
//}
//void Car::InitMembers(const char *ID, int fuel){
//	strcpy(gamerID,ID);
//	fuelGauge=fuel;
//	curSpeed = 0;
//		
//};
//
//
//
//
//void func6(){
//	Car run99;
//	run99.InitMembers("run99", 100);
//	run99.Accel();
//	//run99.Accel();
//	run99.ShowCarState();
//	run99.Break();
//	run99.ShowCarState();
//
//}
//
//
//
//int main(){
//	func6();
//}