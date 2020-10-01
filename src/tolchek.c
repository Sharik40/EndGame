#include "game.h"

void tolchek_to_exit(t_game *container) {
    if (on_click(SDL_BUTTON_LEFT, 76, 211, 1018, 1080))
        container->success = false;
}
