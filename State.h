#include <string>
using namespace std;

#ifndef STATE_H
#define STATE_H

#include <string>

class State {
public:
    State();
    State(string, double, long long int);

    string getName() const;
    void setName(string);

    double getEnergy() const;
    void setEnergy(double);

    long long int getSize() const;
    void setSize(long long int);

    void findPercentage(double, long long int);
    double getPercentage() const;

protected:

private:
    string m_name;
    double m_energy;
    long long int m_size;
    double m_percentage;
};

#endif // STATE_H
