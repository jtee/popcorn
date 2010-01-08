#ifndef MIXAUDIO_H
#define MIXAUDIO_H

#include <SDL.h>

#include "processing/voices.h"
#include "configuration/routing.h"

void mixAudio(void *unused, Uint8 *stream, int len);

#endif
