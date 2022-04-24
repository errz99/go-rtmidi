#if defined(GO_COVERAGE_TEST)
#undef __MACOSX_CORE__
#undef __LINUX_ALSA__
#undef __UNIX_JACK__
#undef __WINDOWS_MM__
#undef __WEB_MIDI_API__
#define __RTMIDI_DUMMY__
#endif

#include "rtmidi/RtMidi.h"

#define RTMIDI_SOURCE_INCLUDED
#include "rtmidi/RtMidi.cpp"
#include "rtmidi/rtmidi_c.cpp"
