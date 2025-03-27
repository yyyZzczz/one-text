//#include<iostream>
//using namespace std;
////学生类
//class study{
//	//公共权限
//public:
//	
//	//属性
//	string Name;//姓名
//	string Num;//学号
//	//行为
//	//打印姓名和学号
//	void student(){
//		cout << "学生姓名为:" << Name<<endl;
//		cout << "学生学号为:" << Num << endl;
//	}
//	//给姓名赋值
//	void setname(string name) {
//		Name = name;
//	}
//	//给学号赋值
//	void setnum(string num) {
//		Num = num;
//	}
//};
//int main(){
//	study n1;
//	n1.setname("李四");
//	n1.setnum("012131231");
//	n1.student();
//	system("pause");
//	return 0;
//}
// 
// 立方体
//#include<iostream>
//#include<string>
//using namespace std;
////立方体类
//class Cube {
//public:
//	//设置长
//	void setL(int l){
//		L = l;
//	}
//	//读取长
//	int getL() {
//		return L;
//	}
//	//设置宽
//	void setK(int k) {
//		K = k;
//	}
//	//读取宽
//	int getK() {
//		return K;
//	}
//	//设置高
//	void setH(int h) {
//		H = h;
//	}
//	//读取高
//	int getH() {
//		return H;
//	}
//	//获取面积
//	int S() {
//		return 2 * L * K + 2 * K * H + 2 * L * H;
//	}
//	//获取体积
//	int V(){
//		return L * H * K;
//	}
//	//成员函数实现判断
//	bool IS(Cube &c) {
//		if (L == c.getL() && K == c.getK() && H == c.getH())
//		{
//			return true;
//		}
//		else {
//			return 0;
//		}
//	}
//private:
//	int L;//长
//	int K;//宽
//	int H;//高
//};
////全局函数实现判断
//bool ISS(Cube &c1,Cube &c2) {
//	if (c1.getL() == c2.getL() && c1.getK() == c2.getK() && c1.getH() == c2.getH())
//	{
//		return true;
//	}
//	else {
//		return 0;
//	}
//}
//
//int main(){
//	Cube c1;
//	c1.setL(10);
//	c1.setK(10);
//	c1.setH(10);
//	cout<<"c1的面积:"<<c1.S()<<endl;
//	cout << "c1的体积:" << c1.V()<<endl;
//
//	Cube c2;
//	c2.setL(10);
//	c2.setK(10);
//	c2.setH(10);
//	
//	int ret=ISS(c1, c2);
//	if (ret) {
//		cout << "两个立方体相同" << endl;
//	}
//	else {
//		cout << "两个立方体不同" << endl;
//	}
//	int re = c1.IS(c2);
//	if (re) {
//		cout << "成员两个立方体相同" << endl;
//	}
//	else {
//		cout << "成员两个立方体不同" << endl;
//	}
//
//	system("pause");
//	return 0;
//}
// 
// 点与圆的关系
//#include<iostream>
//using namespace std;
////点类
//class point {
//public:
//	//设置x
//	void setm_x(int X) {
//		m_x = X;
//	}
//	//读取x
//	int getm_x() {
//		return m_x;
//	}
//	//设置y
//	void setm_y(int Y) {
//		m_y = Y;
//	}
//	//读取y
//	int getm_y() {
//		return m_y;
//	}
//
//private:
//	int m_x;
//	int m_y;
//
//};
////圆类
//class circle {
//public:
//	void setR(int R){
//		m_R = R;
//	}
//	int getR() {
//		return m_R;
//	}
//	void setD(point D) {
//		m_D = D;
//	}
//	point getD() {
//		return m_D;
//	}
//private:
//	int m_R;//半径
//	point  m_D;//圆心
//
//};
////判断点和圆心关系
//void ISS(circle &c,point &p) {
//	//计算两点间距离的平方
//	int n1=(c.getD().getm_x() - p.getm_x())* (c.getD().getm_x() - p.getm_x()) + (c.getD().getm_y() - p.getm_y()) * (c.getD().getm_y() - p.getm_y());
//	//计算半径平方
//	int n2=c.getR()* c.getR();
//	if (n1 == n2) {
//		cout << "点在圆上" << endl;
//	}
//	else if (n1 > n2) {
//		cout << "点在圆外" << endl;
//	}
//	else {
//		cout << "点在圆内" << endl;
//	}
//}
//
//int main() {
//	circle c;
//	c.setR(10);
//	point W;
//	W.setm_x(10);
//	W.setm_y(0);
//	c.setD(W);
//	point p;
//	p.setm_x(10);
//	p.setm_y(9);
//	ISS(c, p);
//
//	system("pause");
//	return 0;
//}
//类中的成员是另一个类
//#include<iostream>
//using namespace std;
//#include<string>
//class phone {
//public:
//	phone(string name) {
//		cout << "phone构造调用" << endl;
//		PName = name;
//	}
//	~phone() {
//		cout << "phone西沟";
//	}
//	string PName;
//	
//};
//
//
//class people {
//public:
//	people(string name, string pname) :Name(name), Pname(pname) {
//		cout << "people构造调用" << endl;
//	}
//	~people() {
//		cout << "people西沟";
//	}
//	string Name;
//	phone Pname;
//};
//
//void text01() {
//	people p("张三","苹果");
//	cout << p.Name << "用" << p.Pname.PName << "手机" << endl;
//}
//
//int main() {
//	text01();
//	system("pause");
//	return 0;
//}
//深拷贝和浅拷贝
#include<iostream>
#include<string>
using namespace std;
class people {
public:
	//拷贝构造函数
	people(int age, int height) {
		cout << "有参构造函数"<<endl;
		m_age = age;
		//new 将height数据存放在堆区用*指针指向该地址
		//堆区数据由程序员自己销毁
		m_height = new int (height);
	}
	~people() {
		cout << "析构函数调用" << endl;
		if (m_height != NULL) {
			delete m_height;
			m_height = NULL;
		}
		//加入销毁代码后会出错,错误原因为有参构造和拷贝构造都会调用堆区数据当一个数据调用完毕就会立即销毁另一个函数就没有权限去访问已经销毁完毕的堆区数据
		//解决办法为进行深拷贝也就是在堆区重新开辟地址令拷贝构造函数指向新地址即两个构造函数指向地址不同数据相同,这样就不会进行二次销毁
	}
	people(const people& p) {
		//拷贝构造函数
		cout << "拷贝构造函数的调用" << endl;
		m_age = p.m_age;
		//深拷贝操作
		//重新开辟一个堆区空间将p.m_height数据*解引用存放在新空间,令自己的m_height指针指向该空间.
		m_height = new int(*p.m_height);
	}
	int m_age;
	int *m_height;//指针m_height
};

void text01() {
	people p(10,160);
	people p2(p); 
	cout << "p年龄:" << p.m_age<<"身高:"<<*p.m_height << endl;
	cout << "p2年龄:" << p2.m_age << "身高:" << *p2.m_height << endl;
}
int main() {
	text01();
	system("pause");
	return 0;
}