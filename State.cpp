#include "State.h"
#include <string>
#include <cmath>

using namespace std;

State::State() {
    // Default constructor
}

State::State(string name, double energy, long long int stateSize) {
    m_name = name;
    m_energy = energy;
    m_size = stateSize;
    m_percentage = 0;
}

void State::setName(string name) {
    m_name = name;
}

string State::getName() const {
    return m_name;
}

void State::setEnergy(double energy) {
    m_energy = energy;
}

double State::getEnergy() const {
    return m_energy;
}

void State::setSize(long long int stateSize) {
    m_size = stateSize;
}

long long int State::getSize() const {
    return m_size;
}

double State::getPercentage() const {
    return m_percentage;
}

void State::findPercentage(double energy, long long int stateSize) {
    energy = energy * 100000000000;
    double panelsNeeded = ceil(energy / 51);
    double panelArea = panelsNeeded * 18 * 100000;
    m_percentage = ceil((panelArea / stateSize) * 100);
}
