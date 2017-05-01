/*
** test.c for test in /home/clement/Piscine/CPool_Day13
** 
** Made by clement girard
** Login   <clement@epitech.net>
** 
** Started on  Wed Oct 19 11:29:47 2016 clement girard
** Last update Wed Oct 19 19:07:11 2016 clement girard
*/

#include <SFML/Graphics/RenderWindow.h>
#include <SFML/Graphics/Sprite.h>
#include <SFML/Graphics/Texture.h>

#include <unistd.h>
#include <stdlib.h>

#define SCREEN_WIDTH 500
#define SCREEN_HEIGHT 500

sfRenderWindow*	create_window(char *name, int width, int height)
{
  sfRenderWindow*	window;
  sfVideoMode		mode;

  mode.width = width;
  mode.height = height;
  mode.bitsPerPixel = 32;
  window = sfRenderWindow_create(mode, name, sfResize | sfClose, NULL);
  if (window == NULL)
      exit(EXIT_FAILURE);
  return (window);
}

void    draw_square(sfUint8* pixels)
{
  int   x;
  int   y;

  x = 50;
  while (x < 100)
    {
      y = 50;
      while (y < 100)
	{
	  pixels[(SCREEN_WIDTH * y + x) * 4] = sfYellow.r;
	  pixels[(SCREEN_WIDTH * y + x) * 4 + 1] = sfYellow.g;
	  pixels[(SCREEN_WIDTH * y + x) * 4 + 2] = sfYellow.b;
	  pixels[(SCREEN_WIDTH * y + x) * 4 + 3] = sfYellow.a;
	  y = y + 1;
	}
      x = x + 1;
    }
}

void    draw_square2(sfUint8* pixels)
{
  int   x;
  int   y;

  x = 100;
  while (x < 200)
    {
      y = 100;
      while (y < 200)
	{
	  pixels[(SCREEN_WIDTH * y + x) * 4] = sfGreen.r;
	  pixels[(SCREEN_WIDTH * y + x) * 4 + 1] = sfGreen.g;
	  pixels[(SCREEN_WIDTH * y + x) * 4 + 2] = sfGreen.b;
	  pixels[(SCREEN_WIDTH * y + x) * 4 + 3] = sfGreen.a;
	  y = y + 1;
	}
      x = x + 1;
    }
}

void    draw_square3(sfUint8* pixels)
{
  int   x;
  int   y;

  x = 200;
  while (x < 250)
    {
      y = 50;
      while (y < 100)
	{
	  pixels[(SCREEN_WIDTH * y + x) * 4] = sfYellow.r;
	  pixels[(SCREEN_WIDTH * y + x) * 4 + 1] = sfYellow.g;
	  pixels[(SCREEN_WIDTH * y + x) * 4 + 2] = sfYellow.b;
	  pixels[(SCREEN_WIDTH * y + x) * 4 + 3] = sfYellow.a;
	  y = y + 1;
	}
      x = x + 1;
    }
}

sfUint8*	create_pixel_buffer(int width, int height)
{
  int		i;
  sfUint8*	pixels;

  pixels = malloc(width * height * 4 * sizeof(*pixels));
  if (pixels == NULL)
      exit(EXIT_FAILURE);
  i = 0;
  while (i < width * height * 4)
    {
      pixels[i] = 0;
      i = i + 1;
    }
  return pixels;
}

int	main()
{
  sfRenderWindow*	window;
  sfTexture*		texture;
  sfSprite*		sprite;
  sfUint8*		pixels;

  window = create_window("SFML Window", SCREEN_WIDTH, SCREEN_HEIGHT);
  sprite = sfSprite_create();
  texture = sfTexture_create(SCREEN_WIDTH, SCREEN_HEIGHT);
  pixels = create_pixel_buffer(SCREEN_WIDTH, SCREEN_HEIGHT);
  sfSprite_setTexture(sprite, texture, sfTrue);
  draw_square(pixels);
  draw_square2(pixels);
  draw_square3(pixels);
  sfTexture_updateFromPixels(texture, pixels, SCREEN_WIDTH, SCREEN_HEIGHT, 0, 0);
  while (sfRenderWindow_isOpen(window))
    {
      sfRenderWindow_clear(window, sfWhite);
      sfRenderWindow_drawSprite(window, sprite, NULL);
      sfRenderWindow_display(window);
    }
  sfRenderWindow_destroy(window);
  return (EXIT_SUCCESS);
}
