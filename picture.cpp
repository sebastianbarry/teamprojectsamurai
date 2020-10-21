#include <string>

#include "picture.h"

using namespace std;

string picture::getName() { return m_name; }
void picture::setName(string name) { m_name = name; }
string picture::getYear() { return m_year; }
void picture::setYear(string year) { m_year = year; }
string picture::getNominations() { return m_nominations; }
void picture::setNominations(string nominations) { m_nominations = nominations; }
string picture::getRating() { return m_rating; }
void picture::setRating(string rating) { m_rating = rating; }
string picture::getDuration() { return m_duration; }
void picture::setDuration(string duration) { m_duration = duration; }
string picture::getGenre1() { return m_genre1; }
void picture::setGenre1(string genre1) { m_genre1 = genre1; }
string picture::getGenre2() { return m_genre2; }
void picture::setGenre2(string genre2) { m_genre2 = genre2; }
string picture::getRelease() { return m_release; }
void picture::setRelease(string release) { m_release = release; }
string picture::getMetacritic() { return m_metacritic; }
void picture::setMetacritic(string metacritic) { m_metacritic = metacritic; }
string picture::getSynopsis() { return m_synopsis; }
void picture::setSynopsis(string synopsis) { m_synopsis = synopsis; }

picture::picture() {
	m_name = "";
	m_year = "";
	m_nominations = "";
	m_rating = "";
	m_duration = "";
	m_genre1 = "";
	m_genre2 = "";
	m_release = "";
	m_metacritic = "";
	m_synopsis = "";
}

picture::picture(string name, string year, string nominations, string rating, string duration, string genre1, string genre2, string release, string metacritic, string synopsis) {
	m_name = name;
	m_year = year;
	m_nominations = nominations;
	m_rating = rating;
	m_duration = duration;
	m_genre1 = genre1;
	m_genre2 = genre2;
	m_release = release;
	m_metacritic = metacritic;
	m_synopsis = synopsis;
}
