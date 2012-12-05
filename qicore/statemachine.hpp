/**
* @author Aldebaran Robotics
* Aldebaran Robotics (c) 2012 All Rights Reserved
*/

#pragma once

#ifndef STATE_MACHINE_H_
# define STATE_MACHINE_H_

# include <string>

# include <qicore/api.hpp>

namespace qi
{

class StateMachinePrivate;
class Transition;
class Box;

class QICORE_API StateMachine
{
  public:
    StateMachine();
    ~StateMachine();

    void setName(std::string name);
    std::string getName() const;

    bool addState(Box* state);
    bool removeState(Box* state);

    bool setInitialState(Box* initial);
    bool setFinalState(Box* final);
    bool removeFinalState(Box* final);

    bool isOnFinalState() const;

    void run();
    void pause();
    void stop();

    bool goToState(Box* state);
    bool executeTransition(Transition* tr);
    Box* getCurrentState() const;

    void waitUntilStop();

  private:
    StateMachinePrivate        *_p;
};

};

#endif /* !STATE_MACHINE_H_ */
