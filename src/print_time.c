#include "game.h"

void print_time(t_game *container) {
    if (TTF_Init() == -1) {
        printf("Unable to initialize SDL_ttf: %s \n", TTF_GetError());
    }
    TTF_Font* my_font = NULL;
    my_font = TTF_OpenFont("./resource/AGENCYR.TTF", 31);
    SDL_Rect textLocation = { 999, 40, 90, 25 };
    SDL_Color fore_color = { 255,255,255,255 };
    if (my_font == NULL) {
        printf("Unable to load font: %s \n", TTF_GetError()); 
    }
    SDL_Surface* textSurface = NULL;
    textSurface = TTF_RenderText_Blended(my_font, mx_itoa(container->time), fore_color);
    if(textSurface == NULL) {
        printf("Unable to load textsurface: %s \n", SDL_GetError()); 
    }
    SDL_BlitSurface(textSurface, NULL, container->image, &textLocation);
    SDL_FreeSurface(textSurface);
    TTF_CloseFont(my_font); 
    TTF_Quit();
}
