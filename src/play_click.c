#include "game.h"

void play_click(t_game *container) {
    // if ()
    Mix_VolumeChunk(container->Click, 30);
	if(Mix_PlayChannel(-1, container->Click, 1) == -1) {
            printf("Mix_PlayChannel: %s\n", Mix_GetError());
    }
}
