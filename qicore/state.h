/**
* @author Aldebaran Robotics
* Aldebaran Robotics (c) 2012 All Rights Reserved
*/

#pragma once

#ifndef STATE_H_
# define STATE_H_

# include <list>

# include <qicore/api.h>

class StatePrivate;
class Diagram;
class StateMachine;
class Transition;

class QICORE_API State
{
  public:
    State();
    ~State();

    void onEnter();
    void onExit();
    void addTransition(Transition* tr);
    void removeTransition(Transition* tr);

    std::list<Transition*>& getTransitions();

    void setDiagram(Diagram* d);
    Diagram* getDiagram();

  private:
    StatePrivate* _p;
};

#endif /* !STATE_H_ */
