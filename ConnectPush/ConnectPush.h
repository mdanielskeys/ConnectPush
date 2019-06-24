#pragma once

void CallSysexFunction(const HMIDIOUT& hMidiOut, MIDIHDR& midiOutHdr);

void SysExCall(const BYTE  head[9], const HMIDIOUT& hMidiOut);
