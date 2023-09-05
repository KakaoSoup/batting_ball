#ifndef __LEAGUE_H
#define __LEAGUE_H
#include "team.h"
#define PENNANT_RACE 144


class Game {
private:
	Team* home;
	Team* away;
	int score[2];
	int cnt;
public:
	init() {
		home = nullptr;
		away = nullptr;
		cnt = 0;
		memset(score, 0, sizeof(score));
	}

	Game() {
		init();
	}

	void start(Team* A, Team* B) {
		home = A;
		away = B;
	}

	void inning() {
		
	}

	bool play() {
		for(int cnt = 1; cnt <= 17; cnt++) {
			inning();
		}
		if(score[0] <=  score[1]) {
			while(cnt <= 30) {
				if(cnt % 2 == 0) {
					if(score[0] > score[1])
						return true;
				}
				cnt++;
			}
		}
		else
			return true;;
	}
};

struct Ranking {	
	Team* team;
};

class League {
private:
	Ranking* ranking[TEAM];
	int year;
public:
	void renew_rank() {
		for(int i = 0; i < TEAM; i++) {
		
		}
	}
};


#endif
