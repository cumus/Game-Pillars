#ifndef _MINIMAP_H_
#define _MINIMAP_H_

#include "PugiXml\src\pugixml.hpp"
#include "SDL\include\SDL_rect.h"

class UI_Image;

class Minimap
{
public:

	Minimap();
	~Minimap();

	UI_Image* Load(pugi::xml_node& conf);
	void Update();
	void Draw();

private:

	UI_Image* base = nullptr;
	SDL_Rect greenMark;
	SDL_Rect redMark;
};


#endif // !_MINIMAP_H_


