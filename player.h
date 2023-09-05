#ifndef PLAYER_H
#define PLAYER_H
#include "header.h"
#include "team.h"
#include <ctime>
#define MAX 	100
#define P	1
#define C	2
#define 1B	3
#define 2B	4
#define 3B	5
#define SS	6
#define RF	7
#define CF	8
#define LF	9

#define H	10
#define SH	11
#define TH	12
#define HR	13
#define SO	14
#define FB	15

std::random_device rd;
std::mt19937 engine(rd());
const double std_dev = 10.0

int randnum_gen(double mean, int lower_bound, int upper_bound) {
	int rnd = std::normal_distribution<double> distribution(mean, std_dev);
	do {
	        random_number = distribution(engine);
	} while (random_number < lower_bound || random_number > upper_bound);
	return random_number;
}

class Player {
private:
	int hgt;	// height
	int wgt;	// weight
	int pac;	// pace
	int pwr;	// batting power
	int vel;	// ball speed
	int val;	// valance
	int rec;	// reaction rate
	int fit;	// fitness
	int cont;	// contact
public:
	Player() {
		hgt = randnum_gen(186, 160, 210);
		wgt = randnum_gen(hgt * 0.42, hgt * 0.3, hgt * 0.6);
	}
};

class Batter : private Player {
private:
	int position;
	
	// stats
	double avrg;
	double obp;
	double slg;

	// count
	int AB;		// at bat
	int H;		// hit
	int SH;		// 2nd base
	int TH;		// 3rd base
	int HR;		// home-run

	int SO;		// strike-out
	int FB;		// 4 ball
	int HP;		// hit-by-pitch
	int ER;		// error

public:
	void cnt_avrg() {
		this->avrg = H / AB;	
	}

	void cnt_obp() {
	
	}

	void cnt_slg() {
		
	}

	int at_bat (class* Pitcher pitcher) {
		double prob;
		hit_prob = this->avrg - ((5 - pitcher.era()) / 50) + this->cont / 1000;
		// HIT
		if(prob(hit_prob)) {
			this->H++;
			if(prob(this->slg/2)) {
				SH++;
				return SH;
			}
			else {
				if(prob(this->slg* (this->pace / MAX))) {
					TH++;
					return TH;
				}
				HR++;
				return HR;
			}

			return H;
		}
		// NOT HIT
		else {
			// on base
			if(prob(this->obp - this->avrg)) {
				if(prob(0.9)) {
					this->FB++;
					return FB;
				}
				else {
					this->HP++;
					return HP;
				}
			}	
			// out
			else {

				return SO;
			}
		}
	}
};

class Pitcher : private Player {
private:
	double era;
	int so;
	int 
public:

};


#endif
