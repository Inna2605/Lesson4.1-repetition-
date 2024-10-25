/*1. Написати програму, яка за вибором користувача зводить введене ним число в степінь від нульової до сьомої включно.
2. Користувач вводить з клавіатури символ. Визначити, який це символ: літера, цифра, знак пунктуації або інше.
3. Написати програму підрахунку вартості розмови для різних мобільних операторів. 
Користувач вводить вартість розмови і вибирає, з якого на який оператор він дзвонить. 
Вивести вартість на екран.
4. Вася працює програмістом та отримує 50$ за кожні 100 рядків коду. 
За кожне третє запізнення Васю штрафують на 20$. Реалізувати меню:
■ користувач вводить бажаний дохід Васі та кількість запізнень, 
порахувати, скільки рядків коду йому треба написати;
■ користувач вводить кількість рядків коду, написані Васею та бажаний обсяг зарплати. 
Порахувати, скільки разів Вася може запізнитися;
■ користувач вводить кількість рядків коду та кількість запізнень, 
визначити, скільки грошей заплатять Васі і чи заплатять взагалі.*/

#include<iostream>
#include<Windows.h>
using namespace std;
int main() {
	int n = 0, s = 0, i = 0, a = 0, x = 0, x1 = 0, x2 = 0;
	float rez = 1;
	cout << "Oberite nomer zadachi: ";
	cin >> n;

	switch (n) {
	case 1: {
		cout << "Vvedite chislo i stepin v iaky potribno vozvestu chislo: \a";
		cin >> x >> s;
		if (x > 0 && s > 0) {
			do {
				rez *= x;
				i++;
			} while (i < s);
			cout << "Risenna " << rez << endl;
		}
		else if (s == 0) {
			rez = 1;
			cout << "Risenna " << rez << endl;
		}
		else if (x == 0 && s > 0) {
			rez = 0;
			cout << "Risenna " << rez << endl;
		}
		else if (x == 0 && s < 0) {
			cout << "Risenna ne mae zmisty!";
		}
		else if (x < 0 && s > 0) {
			x *= -1;
			do {
				rez *= x;
				i++;
			} while (i < s);
			if (s % 2 == 0) {
				cout << "Risenna " << rez << endl;
			}
			else {
				cout << "Risenna " << rez * -1 << endl;
			}
		}
		else if (x > 0 && s < 0) {
			do {
				rez *= x;
				i++;
			} while (i < s);
			cout << "Risenna " << 1 / rez << endl;
		}
		else if (x < 0 && s < 0) {
			x *= -1;
			do {
				rez *= x;
				i++;
			} while (i < s);
			rez = 1 / rez;
			if (s % 2 == 0) {
				cout << "Risenna " << rez << endl;
			}
			else {
				cout << "Risenna " << rez * -1 << endl;
			}
		}
	}
	break;
	case 2: {
		char S;
		cout << "Vvedste sumvol: ";
		cin >> S;
		int D = (int)S;
		cout << D << endl;
		if (D >= 48 && D <= 57) {
			cout << "Vvedene chislo!\n";
		}
		else if (D >= 65 && D <= 90) {
			cout << "Vvedena veluka litera latunoy!\n";
		}
		else if (D >= 97 && D <= 122) {
			cout << "Vvedena mala litera latunoy!\n";
		}
		else if (D >= 192 && D <= 223) {
			cout << "Vvedena veluka litera kurulesey!\n";
		}
		else if (D >= 224 && D <= 255) {
			cout << "Vvedena mala litera kurulesey!\n";
		}
		else if (D >= 65 && D <= 90) {
			cout << "Vvedenui znak arefmetuchnoi dii!\n";
		}
		else if (D >= 60 && D <= 62) {
			cout << "Vvedenui znak porivnana!\n";
		}
		else if (D == 33 || D >= 44 && D <= 46 || D == 58 || D == 59 || D == 34 || D == 39) {
			cout << "Vvedenui znak pynktyasii!\n";
		}
		else if (D == 91 || D == 93 || D == 123 || D == 125) {
			cout << "Vvedena skobka!\n";
		}
		else {
			cout << "Vvedenui insui znak!\n";
		}
	}
		  break;
	case 3: {
		cout << "Vuberite operatora z iakogo dzvonete i operatora do iakogo dzvonete:\n"
			<< "1. Vodafone\n"
			<< "2. Kyivstar\n"
			<< "3. Life\n";
		cin >> x1 >> x2;
		cout << "Vvedite taruf dla vnytrisnogo zviazky operatora " << x1 << " i tarif dzvinka na insogo operatora: ";
		cin >> i >> a;
		cout << "Vvedite skilku hvelun truvae rozmova: ";
		cin >> s;
		if (x1 == x2) {
			cout << "Vartist rozmovu " << s * i << "kop. abo " << (s * i) / 100 << " grn\n";
		}
		else {
			cout << "Vartist rozmovu " << s * a << "kop. abo " << ((float)s * (float)a) / 100 << " grn\n";
		}
	}
		  break;
	case 4: {
		/*Вася працює програмістом та отримує 50$ за кожні 100 рядків коду.
За кожне третє запізнення Васю штрафують на 20$. Реалізувати меню:
■ користувач вводить бажаний дохід Васі та кількість запізнень,
порахувати, скільки рядків коду йому треба написати;
■ користувач вводить кількість рядків коду, написані Васею та бажаний обсяг зарплати.
Порахувати, скільки разів Вася може запізнитися;
■ користувач вводить кількість рядків коду та кількість запізнень,
визначити, скільки грошей заплатять Васі і чи заплатять взагалі.
int s = 0, i = 0, a = 0, x = 0, x1 = 0, x2 = 0;
	float rez = 1;*/

		cout << "Oberite neobhidne:\n"
			<< "1. Skilki neobhidno napusatu radkiv kody dla bazanogo dohody\n"
			<< "2. Skilki Vasa moze zapiznutusa pru danuh kilkosti radkiv ta bazanii zarplati\n"
			<< "3. Skilki zaplatat Vasi pru danuh kilkosti radkiv ta zapiznen\n";
		cin >> s;
		switch (s) {
		case 1:
		{
			cout << "Vvedite bazanui dohid ta kilkist zapiznen: ";
			cin >> x >> x2;
			x1 = ((x * 100) / 50) + ((((20 * x2) / 3) * 100) / 50);
			cout << "Vasi neobhidno napusatu " << x1 << " radkiv kody\n";
		}
		break;
		case 2:
		{
			cout << "Vvedite kilkist riadkiv kody  ta bazanui dohid: ";
			cin >> x1 >> x;
			if (x > (x1 * 50) / 100) {
				cout << "Vasa moze zapiznutusa " << 2 << " raziv\n";
			}
			else {
				i = (((x1 * 50) / 100) - x) / 20;
				x2 = i * 3;
				cout << "Vasa moze zapiznutusa " << x2 + 2 << " raziv\n";
			}
		}
		break;
		case 3:
		{
			cout << "Vvedite kilkist riadkiv kody ta kilkist zapiznen: ";
			cin >> x1 >> x2;	
			if (x2 < 3) {
				x = ((x1 * 50) / 100);
			}
			else {
				i = x2 / 3;
				x = ((x1 * 50) / 100) - (i * 20);
			}
			cout << "Vasi otrumae " << x << " dohody\n";
		}
		break;
		default:cout << "Nemae takogo varianta!";
		}
		break;
	default: cout << "Ne virno obranui nomer zadachi!";
	}
	}
}