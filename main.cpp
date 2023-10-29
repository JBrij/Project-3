#include <iostream>
#include <list>
#include "State.h"

using namespace std;

void print(list<State> theList)
{
    cout << endl;
    for (const State& state : theList)
    {
        cout << state.getName() << " would use " << state.getPercentage() << "% of its area" << endl;
    }
    cout << endl;
}

void add(list<State>& l, const State& state)
{
    list<State>::iterator it;
    list<State>::iterator previous;
    if (l.empty() || l.front().getPercentage() > state.getPercentage())
    {
        l.push_front(state);
    }
    else
    {
        previous = l.begin();
        for (auto it = l.begin(); it != l.end(); ++it)
        {
            if (it->getPercentage() > state.getPercentage())
                break;
            else
                previous = it;
        }
        l.insert(++previous, state);
    }
}

int main()
{
    list<State> states;

    State tx("Texas", 13480.8, 7487580672000);
    tx.findPercentage(13480.8, 7487580672000);
    add(states, tx);

    State ca ("California", 6922.8, 4563554688000);
    ca.findPercentage(6922.8, 4563554688000);
    add(states, ca);

    State lou ("Louisiana", 4200.4, 1445216256000);
    lou.findPercentage(4200.4, 1445216256000);
    add(states, lou);

     State fl ("Florida", 4003.1, 1805265792000);
    fl.findPercentage(4003.1, 1805265792000);
    add(states, fl);

    State il ("Illinois", 3612.9, 164549657600);
    il.findPercentage(3612.9, 164549657600);
    add(states, il);

    State Pa ("Pennsylvania", 3413.0, 1283967590400);
    Pa.findPercentage(3413.0, 1283967590400);
    add(states, Pa);

    State oh ("Ohio", 3404.5, 1249649280000);
    oh.findPercentage(3404.5, 1249649280000);
    add(states, oh);

    State ny ("New York", 3354.2, 1520933990400);
    ny.findPercentage(3354.2, 1520933990400);
    add(states, ny);

    State ga ("Georgia", 2727.6, 1656673920000);
    ga.findPercentage(2726.6, 1656673920000);
    add(states, ga);

    State mi ("Michigan", 2610.6, 2696287334400);
    mi.findPercentage(2610.6, 2696287334400);
    add(states, mi);

    print(states);

    return 0;
}

