#include <stdlib.h>
#include <stdint.h>
#include "rtmidi/rtmidi_c.h"

extern void goMIDIInCallback(double ts, unsigned char *msg, size_t msgsz, void *arg);

static inline void midiInCallback(double ts, const unsigned char *msg, size_t msgsz, void *arg) {
        goMIDIInCallback(ts, (unsigned char*) msg, msgsz, arg);
}

static inline void cgoSetCallback(RtMidiPtr in, int cb_id) {
        rtmidi_in_set_callback(in, midiInCallback, (void*)(uintptr_t) cb_id);
}
