#ifndef XBMD_H_INCLUDED
#define XBMD_H_INCLUDED

#include "WProgram.h" 

class XBMD {
  public:
    typedef void (*OnMotionCallback)(void);
  
    XBMD(uint8_t en, uint8_t out, OnMotionCallback omcb = NULL);
    
    void on(void);
    void off(void);
    
    void check(void);
    
  private:
    uint8_t m_en, m_out;
    OnMotionCallback m_omcb;
};

#endif