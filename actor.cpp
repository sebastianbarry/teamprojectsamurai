#include <string>

#include "actor.h"

using namespace std;

string actor::getYear() { return m_year; }
void actor::setYear(string year) { m_year = year; }
string actor::getAward() { return m_award; }
void actor::setAward(string award) { m_award = award; }
string actor::getWinner() { return m_winner; }
void actor::setWinner(string winner) { m_winner = winner; }
string actor::getName() { return m_name; }
void actor::setName(string name) { m_name = name; }
string actor::getFilm() { return m_film; }
void actor::setFilm(string film) { m_film = film; }


actor::actor() {
	m_year = "";
	m_award = "";
	m_winner = "";
	m_name = "";
	m_film = "";
}

actor::actor(string year, string award, string winner, string name, string film) {
	m_year = year;
	m_award = award;
	m_winner = winner;
	m_name = name;
	m_film = film;
}
