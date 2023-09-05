#ifndef __TEAM_H
#define __TEAM_H
#include "player.h"
#define BUF_LEN 20
#define TEAM	10
#define ENTRY	25

class Team {
private :
	Player batter;
	Player pitcher;
	char name[BUF_LEN];
	int win;
	int lose;
	int draw;
public:
	init() {
		memset(name, '\0', sizeof(name);
		win = 0;
		lose = 0;
		draw = 0;
	}

	Team() {
		init();
	}

	float winningPercentage() {
		return win / (win + lose + draw);	
	}

	char* rtn_name() {
		return name;
	}

	int rtn_win() {
		return this->win;
	}

	int rtn_lose() {
		return this->lose;
	}

	int rtn_draw() {
		return this->draw;
	}

	void win() {
		this->win++;
	}

	void lose() {
		this->lose++;
	}

	void draw() {
		this->draw++;
	}
};


#endif
