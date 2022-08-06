#include <SDL.h>
#include <iostream>

void destroy_objects(SDL_Window* window, SDL_Surface* screen, SDL_Surface* img) {
	SDL_DestroyWindow(window);
	SDL_FreeSurface(screen);
	SDL_FreeSurface(img);
	SDL_Quit();
}

int main() {
	SDL_Window* window = nullptr;
	SDL_Surface* screen = nullptr;
	SDL_Surface* img = nullptr;

	if (SDL_Init(SDL_INIT_VIDEO) < 0) {
		std::cerr << "SDL could not be initialized: " << SDL_GetError() << std::endl;
		destroy_objects(window, screen, img);
		return 1;
	}

	window = SDL_CreateWindow("sdl2-cmake-quick-start", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 800, 600, SDL_WINDOW_SHOWN);
	if (window == NULL) {
		std::cerr << "SDL window could not be initialized: " << SDL_GetError() << std::endl;
		destroy_objects(window, screen, img);
		return 1;
	}

	screen = SDL_GetWindowSurface(window);
	if (screen == NULL) {
		std::cerr << "SDL screen could not be initialized: " << SDL_GetError() << std::endl;
		destroy_objects(window, screen, img);
		return 1;
	}

	img = SDL_LoadBMP("img.bmp");
	if (img == NULL) {
		std::cerr << "SDL img could not be initialized: " << SDL_GetError() << std::endl;
		destroy_objects(window, screen, img);
		return 1;
	}

	SDL_BlitSurface(img, NULL, screen, NULL );
	SDL_UpdateWindowSurface(window);
	SDL_Delay(1000);
	destroy_objects(window, screen, img);
	
	return 0;
}