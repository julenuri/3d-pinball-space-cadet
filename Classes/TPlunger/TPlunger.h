//
// Created by neo on 2019-08-15.
//

#include "../../pinball.h"

#ifndef PINBALL_TPLUNGER_H
#define PINBALL_TPLUNGER_H

/* 118 */
struct TPlunger;

void TPlunger::BallFeedTimer(int, void*); // idb
void TPlunger::PullbackTimer(int, void*); // idb
void TPlunger::PlungerReleasedTimer(int, void*); // idb
int __thiscall TPlunger::Message(TPlunger* this, int, float); // idb
void __thiscall TPlunger::Collision(TPlunger* this, struct TBall*, struct vector_type*, struct vector_type*, float, struct TEdgeSegment*); // idb
TPlunger* __thiscall TPlunger::TPlunger(TPlunger* this, struct TPinballTable* a2, int a3);

void* TPlunger::vftable = &TPlunger::Message; // weak

#endif //PINBALL_TPLUNGER_H
