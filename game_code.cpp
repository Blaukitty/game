#include <iostream>
#include <string>
using namespace std;


class your_carts {
public:
	int player_id;
	int cloth_goals;
	int treasure_goals;
	int damage;
	int protection;
	int speed;
	int money;

	your_carts() {
		player_id = 0;
		cloth_goals = 0;
		treasure_goals = 0;
		damage = 1;
		protection = 1;
		speed = 1;
		money = 0;
	}

	void showStatus() { // ïîêàçûâàåì âñå äàííûå îá èãðîêå
		cout << "\n--- Player Status :<3  ---\n";
		cout << "Damage: " << damage << endl;
		cout << "Protection: " << protection << endl;
		cout << "Speed: " << speed << endl;
		cout << "Money: " << money << endl;
	}

};

class level {  // êëàññ óðîâåíü
public:
	int lev; // ïîëå êëàññà

	level() {
		lev = 1;
	}

	void level_counter(your_carts &cart1) {   //ñîçäàåì ôóíêöèþ ïîäñ÷åòà óðîâíÿ
		if (cart1.money == lev*2) {
			lev += 1;
		}
	}

	void showLevel() {
		cout << "\n--- Player Level :)  ---\n";  // ôóíêöèÿ îòîáðàæåíèÿ óðîâíÿ
		cout << "Level: " << lev << endl;
	}
};

class race {
public:
	string race;
	
	void choosing_race(your_carts &cart) {
		cout << "Choose character!\n You can be a human, a dwarf or an elf.\n";
		cout << "By the way, there are some special goals of every race.\n You will have +2 damege as a human, +2 speed as an elf or +2 protection as a dwarf";
		cin >> race;
		if (race == "human") {
			cart.damage += 2; // óâåëè÷èâàåì óðîí ÷åëîâåêà
		}
		else if (race == "elf") {
			cart.speed += 2; // óâåëè÷èâàåì ñêîðîñòü ýëüôà
		}
		else if (race == "dwarf") {
			cart.protection += 2; // óâåëè÷èâàåì çàùèòó ãíîìà
		}
		else {
			cout << "Incorrect race selected!\n";
		}
	}

};

class cl_ass {
public:
	string cl_ass;

	void choosing_class(your_carts& cart0) {
		cout << "Now it's time to choose your class!\n You can be a hunter, a traveler or a knight.\n";
		cout << "There are also some special goals of every class.\n You will have +2 damege as a hunter, +2 speed as a traveler or +2 protection as a knight";
		cin >> cl_ass;
		if (cl_ass == "hunter") {
			cart0.damage += 2; // óâåëè÷èâàåì óðîí îõîòíèêà
		}
		else if (cl_ass == "traveler") {
			cart0.speed += 2; // óâåëè÷èâàåì ñêîðîñòü ïóòåøåñòâåííèêà
		}
		else if (cl_ass == "knight") {
			cart0.protection += 2; // óâåëè÷èâàåì çàùèòó ðûöàðÿ
		}
		else {
			cout << "Incorrect class selected!\n";
		}
	}
	
};

int main() {
	your_carts playerCart;  //ñîçäàåì îáúåêòû êàæäîãî êëàññà
	race playerRace;
	cl_ass playerClass;
	level playerLevel;

	playerRace.choosing_race(playerCart);
	playerClass.choosing_class(playerCart);
	playerLevel.showLevel();
	playerLevel.level_counter(playerCart);
	playerCart.showStatus();

	return 0;
}
