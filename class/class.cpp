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
		std::cout << "Введите имя и фамилию работника:";
		std::cin >> name;
		std::cout << "Введите стаж работника:";
		std::cin >> classification;
		std::cout << "Введите зарплату за час:";
		std::cout << salaryHour;
		std::cout << "Введите кол-во отработанных часов:";
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
			std::cout << "Стаж работы составляет:" << classification << "\n";
			std::cout << "Заработная плата в час составляет:" << workedHourZp << "\n";
			std::cout << "Работник отработал часов:" << workedHour << "\n";
			std::cout << "Зарплата составляет:" << salaryHour * workedHour << "\n";
			std::cout << "Премия" << premia << "\n";
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
 

					

		

	