#include<iostream>
#include<string>


class worker
{
private:
	char name[100];
	int classification;
	int workedHour;
	int salaryHour;
	int workedHourZp;
public:
	void Enter()
	{
		std::cout << "������� ��� � ������� ���������:";
		std::cin >> name;
		std::cout << "������� ���� ���������:";
		std::cin >> classification;
		std::cout << "������� �������� �� ���:";
		std::cout << salaryHour;
		std::cout << "������� ���-�� ������������ �����:";
		std::cin >> workedHour;
		std::cout << "\n";
	}

	void Print()
	{
		double premia = 0;
		if (classification < 1)
		{
			premia = salaryHour * workedHour / 100 * 0;
			std::cin >> premia;
		}

		else if (classification > 1 || workedHour < 3)
		{
			premia = salaryHour * workedHourZp / 100 * 5;
			std::cin >> premia;
		}
		if (classification > 3 || classification < 5)
		{
			premia = salaryHour * workedHourZp / 100 * 8;
			std::cin >> premia;
		}
		 else if (classification > 5)
		{
			premia = salaryHour * workedHourZp / 100 * 15;
			std::cout << name << "\n";
			std::cout << "���� ������ ����������:" << classification << "\n";
			std::cout << "���������� ����� � ��� ����������:" << workedHourZp << "\n";
			std::cout << "�������� ��������� �����:" << workedHour << "\n";
			std::cout << "�������� ����������:" << salaryHour * workedHour << "\n";
			std::cout << "������" << premia << "\n";
		}
	}
				
			
		
	
};
int main()
{
	setlocale(LC_ALL, "Ru");
	worker vyvod;
	vyvod.Enter();
	vyvod.Print();

	return 0;
}
 

					

		

	