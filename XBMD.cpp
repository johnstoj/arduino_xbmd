#include "XBMD.h"

XBMD::XBMD(uint8_t en, uint8_t out, XBMD::OnMotionCallback omcb) : m_en(en), m_out(out), m_omcb(omcb) {
  pinMode(m_en, OUTPUT);
  pinMode(m_out, INPUT);
}

void XBMD::on(void) {
  digitalWrite(m_en, HIGH);
}

void XBMD::off(void) {
  digitalWrite(m_en, LOW);
}

void XBMD::check(void) {
  if (m_omcb != NULL) {
    if (digitalRead(m_out) == HIGH) {
      m_omcb();
    }
  }
}
