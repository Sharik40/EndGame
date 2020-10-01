#include "game.h"

void game_loop(t_game *container) {
    while (container->success) {
		while(SDL_PollEvent(&container->event)) {
			if (container->event.type == SDL_QUIT)
				container->success = false;
            if(Mix_PlayingMusic() == 0)
				Mix_PlayMusic(container->Music, -1);

            // if (container->event.type == SDL_MOUSEBUTTONDOWN && container->current_scene_1 == 12) //
            //     mutant(container);
            if (container->event.type == SDL_MOUSEBUTTONDOWN && container->current_scene_1 == 13.3) //duct tape -> mutant
                dt_mutant(container);
            if (container->event.type == SDL_MOUSEBUTTONDOWN && container->current_scene_1 == 12.3) //diapers->duct tape
                diapers_duct_tape(container);


            if (container->event.type == SDL_MOUSEBUTTONDOWN && container->current_scene_1 == 12) //forward
                forward(container);
            if (container->event.type == SDL_MOUSEBUTTONDOWN && container->current_scene_1 == 12) //duct tape
                duct_tape(container);
            if (container->event.type == SDL_MOUSEBUTTONDOWN && container->current_scene_1 == 12) //mutant
                mutant(container);
            if (container->event.type == SDL_MOUSEBUTTONDOWN && container->current_scene_1 == 12) //diapers
                diapers(container);


            if (container->event.type == SDL_MOUSEBUTTONDOWN && container->current_scene_1 == 11) //4 ways
                fifth_scene(container);
            if (container->event.type == SDL_MOUSEBUTTONDOWN && container->current_scene_1 == 9)
                forth_scene_3(container);
            if (container->event.type == SDL_MOUSEBUTTONDOWN && container->current_scene_1 == 10)
                forth_scene_2(container);
            if (container->event.type == SDL_MOUSEBUTTONDOWN && container->current_scene_1 == 9)
                forth_scene(container);
            if (container->event.type == SDL_MOUSEBUTTONDOWN && container->current_scene_1 == 8)
                third_scene_3(container);
            if (container->event.type == SDL_MOUSEBUTTONDOWN && container->current_scene_1 == 7)
                third_scene_2(container);
            if (container->event.type == SDL_MOUSEBUTTONDOWN && container->current_scene_1 == 6)
                third_scene(container);
            if (container->event.type == SDL_MOUSEBUTTONDOWN && container->current_scene_1 == 5)
                second_scene_3(container);
            if (container->event.type == SDL_MOUSEBUTTONDOWN && container->current_scene_1 == 4)
                second_scene_2(container);
            if (container->event.type == SDL_MOUSEBUTTONDOWN && container->current_scene_1 == 3)
                second_scene(container);
            if (container->event.type == SDL_MOUSEBUTTONDOWN && container->current_scene_1 == 2)
                first_scene_3(container);
            if (container->event.type == SDL_MOUSEBUTTONDOWN && container->current_scene_1 == 1)
                first_scene_2(container);
            if (container->event.type == SDL_MOUSEBUTTONDOWN && container->current_scene_1 == 0)
                first_scene(container);
            if (container->event.type == SDL_MOUSEBUTTONDOWN && container->current_scene_1 == 0)
                music_on_off(container);
            if (container->event.type == SDL_MOUSEBUTTONDOWN && container->current_scene_1 == 0)
                tolchek_to_exit(container);
            if (container->time <= 0)
                container->success = false;
            if (container->event.key.keysym.sym == SDLK_ESCAPE)
                container->success = false;
		}
        animation_render(container);
	}
}
