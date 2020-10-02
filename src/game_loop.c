#include "game.h"

static void check_to_escape(t_game *container) {
    if (container->time <= 0) {
        first_game_over(container);
        // container->success = false;
    }
    switch (container->event.type) {
        case SDL_KEYDOWN:
        if (container->event.key.keysym.sym == SDLK_ESCAPE)
            container->success = false;
        break;
    }
    if (container->event.type == SDL_QUIT)
		container->success = false;
}

static void play_music(t_game *container) {
    if(Mix_PlayingMusic() == 0)
		Mix_PlayMusic(container->Music, -1);
}

void game_loop(t_game *container) {
    while (container->success) {
		while(SDL_PollEvent(&container->event)) {
            play_music(container);
            main_4_scene(container);
            main_3_scene(container);
            main_2_scene(container);
            main_1_scene(container);
            intro(container);
            check_to_escape(container);
		}
        animation_render(container);
	}
}
