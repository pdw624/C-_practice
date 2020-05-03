//#include <iostream>
//using namespace std;
//
//class MyCar{
//private:
//	int dorNum;
//	char color[30];
//public:
//	MyCar(){
//		dorNum = 4;
//		strcpy(color, "white");
//	}
//	MyCar(int num, const char *str){
//		dorNum = num;
//		strcpy(color,str);
//	}
//	MyCar(const char *str){
//		dorNum = 4;
//		strcpy(color,str);
//	}
//	void showCarInfo(){
//		cout<<"문 개수 : "<<dorNum<<", 차 색깔 : "<<color<<endl;
//	}
//
//	/*void setCarInfo(int num, const char *str){
//		dorNum = num;
//		strcpy(color, str);
//	}*/
//};
//
//
//
//int main(){
//	MyCar mc1(3, "blue");
//	mc1.showCarInfo();
//	MyCar mc2("red");
//	mc2.showCarInfo();
//	MyCar mc3;
//	mc3.showCarInfo();
//}