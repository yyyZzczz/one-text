//#include<iostream>
//using namespace std;
////ѧ����
//class study{
//	//����Ȩ��
//public:
//	
//	//����
//	string Name;//����
//	string Num;//ѧ��
//	//��Ϊ
//	//��ӡ������ѧ��
//	void student(){
//		cout << "ѧ������Ϊ:" << Name<<endl;
//		cout << "ѧ��ѧ��Ϊ:" << Num << endl;
//	}
//	//��������ֵ
//	void setname(string name) {
//		Name = name;
//	}
//	//��ѧ�Ÿ�ֵ
//	void setnum(string num) {
//		Num = num;
//	}
//};
//int main(){
//	study n1;
//	n1.setname("����");
//	n1.setnum("012131231");
//	n1.student();
//	system("pause");
//	return 0;
//}
// 
// ������
//#include<iostream>
//#include<string>
//using namespace std;
////��������
//class Cube {
//public:
//	//���ó�
//	void setL(int l){
//		L = l;
//	}
//	//��ȡ��
//	int getL() {
//		return L;
//	}
//	//���ÿ�
//	void setK(int k) {
//		K = k;
//	}
//	//��ȡ��
//	int getK() {
//		return K;
//	}
//	//���ø�
//	void setH(int h) {
//		H = h;
//	}
//	//��ȡ��
//	int getH() {
//		return H;
//	}
//	//��ȡ���
//	int S() {
//		return 2 * L * K + 2 * K * H + 2 * L * H;
//	}
//	//��ȡ���
//	int V(){
//		return L * H * K;
//	}
//	//��Ա����ʵ���ж�
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
//	int L;//��
//	int K;//��
//	int H;//��
//};
////ȫ�ֺ���ʵ���ж�
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
//	cout<<"c1�����:"<<c1.S()<<endl;
//	cout << "c1�����:" << c1.V()<<endl;
//
//	Cube c2;
//	c2.setL(10);
//	c2.setK(10);
//	c2.setH(10);
//	
//	int ret=ISS(c1, c2);
//	if (ret) {
//		cout << "������������ͬ" << endl;
//	}
//	else {
//		cout << "���������岻ͬ" << endl;
//	}
//	int re = c1.IS(c2);
//	if (re) {
//		cout << "��Ա������������ͬ" << endl;
//	}
//	else {
//		cout << "��Ա���������岻ͬ" << endl;
//	}
//
//	system("pause");
//	return 0;
//}
// 
// ����Բ�Ĺ�ϵ
//#include<iostream>
//using namespace std;
////����
//class point {
//public:
//	//����x
//	void setm_x(int X) {
//		m_x = X;
//	}
//	//��ȡx
//	int getm_x() {
//		return m_x;
//	}
//	//����y
//	void setm_y(int Y) {
//		m_y = Y;
//	}
//	//��ȡy
//	int getm_y() {
//		return m_y;
//	}
//
//private:
//	int m_x;
//	int m_y;
//
//};
////Բ��
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
//	int m_R;//�뾶
//	point  m_D;//Բ��
//
//};
////�жϵ��Բ�Ĺ�ϵ
//void ISS(circle &c,point &p) {
//	//�������������ƽ��
//	int n1=(c.getD().getm_x() - p.getm_x())* (c.getD().getm_x() - p.getm_x()) + (c.getD().getm_y() - p.getm_y()) * (c.getD().getm_y() - p.getm_y());
//	//����뾶ƽ��
//	int n2=c.getR()* c.getR();
//	if (n1 == n2) {
//		cout << "����Բ��" << endl;
//	}
//	else if (n1 > n2) {
//		cout << "����Բ��" << endl;
//	}
//	else {
//		cout << "����Բ��" << endl;
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
//���еĳ�Ա����һ����
//#include<iostream>
//using namespace std;
//#include<string>
//class phone {
//public:
//	phone(string name) {
//		cout << "phone�������" << endl;
//		PName = name;
//	}
//	~phone() {
//		cout << "phone����";
//	}
//	string PName;
//	
//};
//
//
//class people {
//public:
//	people(string name, string pname) :Name(name), Pname(pname) {
//		cout << "people�������" << endl;
//	}
//	~people() {
//		cout << "people����";
//	}
//	string Name;
//	phone Pname;
//};
//
//void text01() {
//	people p("����","ƻ��");
//	cout << p.Name << "��" << p.Pname.PName << "�ֻ�" << endl;
//}
//
//int main() {
//	text01();
//	system("pause");
//	return 0;
//}
//�����ǳ����
#include<iostream>
#include<string>
using namespace std;
class people {
public:
	//�������캯��
	people(int age, int height) {
		cout << "�вι��캯��"<<endl;
		m_age = age;
		//new ��height���ݴ���ڶ�����*ָ��ָ��õ�ַ
		//���������ɳ���Ա�Լ�����
		m_height = new int (height);
	}
	~people() {
		cout << "������������" << endl;
		if (m_height != NULL) {
			delete m_height;
			m_height = NULL;
		}
		//�������ٴ��������,����ԭ��Ϊ�вι���Ϳ������춼����ö������ݵ�һ�����ݵ�����Ͼͻ�����������һ��������û��Ȩ��ȥ�����Ѿ�������ϵĶ�������
		//����취Ϊ�������Ҳ�����ڶ������¿��ٵ�ַ������캯��ָ���µ�ַ���������캯��ָ���ַ��ͬ������ͬ,�����Ͳ�����ж�������
	}
	people(const people& p) {
		//�������캯��
		cout << "�������캯���ĵ���" << endl;
		m_age = p.m_age;
		//�������
		//���¿���һ�������ռ佫p.m_height����*�����ô�����¿ռ�,���Լ���m_heightָ��ָ��ÿռ�.
		m_height = new int(*p.m_height);
	}
	int m_age;
	int *m_height;//ָ��m_height
};

void text01() {
	people p(10,160);
	people p2(p); 
	cout << "p����:" << p.m_age<<"���:"<<*p.m_height << endl;
	cout << "p2����:" << p2.m_age << "���:" << *p2.m_height << endl;
}
int main() {
	text01();
	system("pause");
	return 0;
}