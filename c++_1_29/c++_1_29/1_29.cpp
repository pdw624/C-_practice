//#include <iostream>
//void func1(){
//	int num = 20;
//	std::cout << "Hello World" << std::endl;
//	std::cout << "Hello" << "World" << std::endl;
//	std::cout << num  << ' ' << 'A';
//	std::cout << ' ' << 3.14 << std::endl;
//}
//void func2(){
//	int val1;
//	std::cout<<"ù ��° ���� �Է� : ";
//	std::cin>>val1;
//
//	int val2;
//	std::cout<<"�� ��° ���� �Է� : ";
//	std::cin>>val2;
//
//	int result = val1+val2;
//	std::cout<<"���� ��� ��� : "<<result<<std::endl;
//}
////�� �� �Է¹޾� �� ���� ���� �� ���ϱ�
//void func3(){
//	int val1;
//	std::cout<<"ù ��° ���� �Է� : ";
//	std::cin>>val1;
//
//	int val2;
//	std::cout<<"�� ��° ���� �Է� : ";
//	std::cin>>val2;
//
//	int temp=0;
//	int i;
//
//	if(val1<val2){
//		for(i=val1+1; i<val2; i++){
//			temp += i;
//		}
//	}else{
//		for(i=val2+1; i<val1; i++){
//			temp += i;
//		}
//	}
//	
//	std::cout<<"������ �� : "<<temp<<std::endl;
//}
//void func4(){
//	char name[100];
//	char phone[100];
//
//	std::cout<<"�̸� �Է� : ";
//	std::cin>>name;
//
//	std::cout<<"��ȭ��ȣ �Է� : ";
//	std::cin>>phone;
//
//	std::cout<<"\n���� ���\n"<<std::endl;
//	std::cout<<"�̸� : "<<name<<"\n��ȭ��ȣ : "<<phone << std::endl;
//}
////<<<<<<<�Լ��� �����ε�>>>>>>> ���� �̸��� �Լ��� �Ű������� ��ȭ�� ������ ��� ����
//void MyFunc(void){
//	std::cout<<"MyFunc(void) called"<<std::endl;
//}
//void MyFunc(char c){
//	std::cout<<"MyFunc(char c) called"<<std::endl;
//}
//void MyFunc(int a, int b){
//	std::cout<<"MyFunc(int a, int b) called"<<std::endl;
//}
//void func5(){
//	MyFunc();
//	MyFunc('A');
//	MyFunc(12,13);
//}
////
//void func6(){
//	int input;
//	int i;
//
//	std::cout<<"2���� 9 ������ ������ �Է��ϼ��� : ";
//	std::cin>>input;
//
//	if(input<10 && input > 1){
//		for(i=1; i<10; i++){
//			std::cout<<input<<"*"<<i<<"="<< input*i<<std::endl;
//		}
//	}else{
//		std::cout<<"�Է��� ���ڰ� �߸��Ǿ����ϴ�."<<std::endl;
//	}
//}
////�հ� �Լ� �����ε�
//void getSum(int a, int b){
//	int sum;
//	sum = a+b;
//	std::cout << sum << std::endl;
//}
//void getSum(double a, double b){
//	double sum;
//	sum = a+b;
//	std::cout << sum << std::endl;
//}
//void func7(){
//	getSum(3,4);
//	getSum(3.1,4.1);
//}
////���� �Լ� �����ε�
//void swap(int *a, int *b){
//	int temp;
//	temp = *a;
//	*a = *b;
//	*b = temp;
//}
//void swap(double *a, double *b){
//	double temp;
//	temp = *a;
//	*a = *b;
//	*b = temp;
//}
//void swap(char *a, char *b){
//	char temp;
//	temp = *a;
//	*a = *b;
//	*b = temp;
//}
//void func8(){
//	int iNum1=10;
//	int iNum2=20;
//	double dNum1 = 1.4;
//	double dNum2 = 2.6;
//	char ch1 = 'A';
//	char ch2 = 'B';
//
//	swap(&iNum1,&iNum2);
//	std::cout << iNum1 << ' ' <<iNum2<<std::endl;
//	swap(&dNum1, &dNum2);
//	std::cout << dNum1 << ' ' <<dNum2<<std::endl;
//	swap(&ch1, &ch2);
//	std::cout << ch1 << ' ' <<ch2<<std::endl;
//}
////�Ű������� ����Ʈ ���� ���� �Լ�
//int Adder(int num1=1 , int num2=2);
//void func9(){
//	std::cout<<Adder()<<std::endl;
//	std::cout<<Adder(5)<<std::endl;
//	std::cout<<Adder(3,5)<<std::endl;
//}
//int Adder(int num1, int num2){
//	return num1+num2;
//}
////3���� �Ű����� �� ����Ʈ ���� ���� ��
////int BoxVolume(int length, int width=1, int height=1);
////void func10(){
////	std::cout<<"[3,3,3] : "<<BoxVolume(3,3,3)<<std::endl;
////	std::cout<<"[5,5,D] : "<<BoxVolume(5,5)<<std::endl;
////	std::cout<<"[7,D,D] : "<<BoxVolume(7)<<std::endl;
////	//std::cout<<"[D,D,D] : "<<BoxVolume()<<std::endl; //����
////}
////int BoxVolume(int length, int width, int height){
////	return length*width*height;
////}
////�ζ��� �Լ�
//inline int SQUARE(int x){
//	return x*x;
//}
//void func11(){
//	std::cout<<SQUARE(5)<<std::endl;
//	std::cout<<SQUARE(12)<<std::endl;
//}
////namespace �Լ�
//namespace NameSpace1{
//	void function();
//}
//namespace NameSpace2{
//	void function();
//}
//void func12(){
//	NameSpace1::function();
//	NameSpace2::function();
//}
//void NameSpace1::function(){
//	std::cout<<"Namespace1�� function"<<std::endl;
//}
//void NameSpace2::function(){
//	std::cout<<"Namespace2�� function"<<std::endl;
//}
////namespace ��ø, ����
//namespace Parent{
//	int num=1;
//	namespace Child{
//		int num=2;
//
//		namespace GrandChild{
//			int num=3;
//		}
//	}
//}
//void func13(){
//	std::cout<<Parent::num << std::endl;
//	std::cout<<Parent::Child::num << std::endl;
//	std::cout<<Parent::Child::GrandChild::num << std::endl;
//
//	namespace Gchild = Parent::Child::GrandChild;
//	std::cout<<Gchild::num << std::endl;
//}
////std ����
//using namespace std;
//namespace NameSpace{
//	void function(){
//		cout << "NameSpace1�� fucntion"<<endl;
//	}
//}
//using namespace NameSpace;
//void func14(){
//	function();
//}
////BoxVolume �����ε�
//
//int BoxVolume(int length, int width, int height){
//	return length*width*height;
//}
//int BoxVolume(int length, int width){
//	return length*width;
//}
//int BoxVolume(int length){
//	return length;
//}
//void func15(){
//	cout << BoxVolume(3,3,3)<<endl;
//	cout << BoxVolume(5,5)<<endl;
//	cout << BoxVolume(7)<<endl;
//}
////int BoxVolume(int length, int width, int height){
////	return length*width*height;
////}
//
//
////bool �ڷ���
//bool IsPositive(int num){
//	if(num<0){
//		return false;
//	}else{
//		return true;
//	}
//}
//void func16(){
//	bool isPos;
//	int num;
//	cout<<"Input number : ";
//	cin>>num;
//
//	isPos = IsPositive(num);
//	if(isPos){
//		cout<<"Positive Number"<<endl;
//	}else{
//		cout<<"Negative Number"<<endl;
//	}
//}
////&num2 �� ���� '����', �ּ� ������ ����� ���� �ƴϴ�. C++������ ���� >> ������(Reference)
//void func17(){
//	int num1 = 1020;
//	int &num2 = num1;
//
//	num2=3047;
//	cout<<"VAL: "<<num1<<endl;
//	cout<<"REF: "<<num2<<endl;
//
//	cout<<"VAL: "<<&num1<<endl;
//	cout<<"REF: "<<&num2<<endl;
//}
////������ ����
//void SwapByRef2(int &ref1, int &ref2){
//	int temp = ref1;
//	ref1 = ref2;
//	ref2 = temp;
//}
//void func18(){
//	int val1 = 10;
//	int val2 = 20;
//	SwapByRef2(val1, val2);
//	cout<<"val1 : "<<val1<<endl;
//	cout<<"val2 : "<<val2<<endl;
//}
////������ ����2
//int &RefRetFuncOne(int &ref){
//	ref++;
//	return ref;
//}
//void func19(){
//	int num1=1;
//	int &num2=RefRetFuncOne(num1);
//
//	num1++;
//	num2++;
//	cout<<"num1 : "<<num1<<endl;
//	cout<<"num2 : "<<num2<<endl;
//
//	cout<<"num1�ּ� : "<<&num1<<endl;
//	cout<<"num2�ּ� : "<<&num2<<endl;
//}
//void func20(){
//	int num1=1;
//	int num2=RefRetFuncOne(num1);
//
//	num1++;
//	num2++;
//	cout<<"num1 : "<<num1<<endl;
//	cout<<"num2 : "<<num2<<endl;
//
//	cout<<"num1�ּ� : "<<&num1<<endl;
//	cout<<"num2�ּ� : "<<&num2<<endl;
//}
//
//
//int main(){
//	func20();
//	return 0;
//}