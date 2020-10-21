#include <string>

using namespace std;

class actor() {
private:
  string year, award, winner, name, film;
  
public:
  string getYear();
  void setYear(string);
  string getAward();
  void setAward(string);
  string getWinner();
  void setWinner(string);
  string getName();
  void setName(string);
  string getFilm();
  void setFilm(string);
  
  actor();
  actor(string, string, string, string, string);
}
