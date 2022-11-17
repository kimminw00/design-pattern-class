#include <iostream>
// ��� 3. ������ �Ѱ��� ��ü�� ���� �����ϴ� ��

class Cursor
{
private:
	Cursor() { std::cout << "Cursor()" << std::endl; }

	Cursor(const Cursor&) = delete;
	Cursor operator=(const Cursor&) = delete;

	static Cursor* pinstance;
public:
	static Cursor& getInstance()
	{
		if (pinstance == nullptr)
			pinstance = new Cursor;
		return instance;
	}
};
Cursor* Cursor::pinstance = nullptr;


int main()
{
	Cursor& c1 = Cursor::getInstance();
	Cursor& c2 = Cursor::getInstance();

}

