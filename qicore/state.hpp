/**
* @author Aldebaran Robotics
* Aldebaran Robotics (c) 2012 All Rights Reserved
*/

#pragma once

#ifndef STATE_H_
# define STATE_H_

# include <string>
# include <list>

# include <qicore/api.hpp>

namespace qi
{

class StatePrivate;
class Box;
class StateMachine;
class Transition;

class QICORE_API State
{
  public:
    State();
    ~State();

    void setName(std::string name);
    std::string getName() const;

    void addTransition(Transition* tr);
    void removeTransition(Transition* tr);

    std::list<Transition*>& getTransitions() const;

    void addBox(Box* b);
    void removeBox(Box* b);

    StatePrivate* _p;
};

};

#endif /* !STATE_H_ */
