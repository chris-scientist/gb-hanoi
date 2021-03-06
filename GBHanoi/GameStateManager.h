// author: chris-scientist
// created at: 03/10/2018
// updated at: 04/10/2018

#ifndef GAMESTATEMANAGER
#define GAMESTATEMANAGER

class GameStateManager {
  public:
    static const int MENU_STATE = 10;
    static const int SET_START_STATE = 20;
    static const int SET_END_STATE = 30;
    static const int GAME_STATE = 40;
    static const int PAUSE_STATE = 50;
    static const int FINISH_STATE = 60;
    static const int HIGH_SCORE_STATE = 70;
    static const int INIT_RANDOM_MODE_STATE = 80;
    static const int ABOUT_STATE = 90;
    
    GameStateManager();
    void nextState();
    void setState(const int aState);
    bool isMenuState() const;
    bool isSetStartState() const;
    bool isSetEndState() const;
    bool isGameState() const;
    bool isPauseState() const;
    bool isFinishState() const;
    bool isHighScoreState() const;
    bool isInitRandomMode() const;
    bool isAboutState() const;
  private:
    static const int NB_STATE = 9;
  
    int indexOfState;
    const int states[NB_STATE] = { MENU_STATE, SET_START_STATE, SET_END_STATE, GAME_STATE, PAUSE_STATE, FINISH_STATE, HIGH_SCORE_STATE, INIT_RANDOM_MODE_STATE, ABOUT_STATE };
};

#endif

