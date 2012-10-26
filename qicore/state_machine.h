/**
* @author Aldebaran Robotics
* Aldebaran Robotics (c) 2012 All Rights Reserved
*/

#pragma once

#ifndef STATE_MACHINE_H_
# define STATE_MACHINE_H_

class StateMachinePrivate;
class Transition;
class State;

class StateMachine
{
  public:
    StateMachine();
    ~StateMachine();

    bool addState(State* state);
    bool removeState(State* state);

    bool setInitialState(State* initial);
    bool setFinalState(State* final);
    bool removeFinalState(State* final);

    bool isOnFinalState() const;

    void run();
    void stop();

    bool goToState(State* state);
    bool executeTransition(Transition* tr);

  private:
    StateMachinePrivate        *_p;
};

#endif /* !STATE_MACHINE_H_ */
