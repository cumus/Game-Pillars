#include "Minimap.h"
#include "j1App.h"
#include "j1Gui.h"
#include "j1GameLayer.h"
#include "j1EntityManager.h"
#include "j1Window.h"
#include "j1Map.h"
#include "Entity.h"
#include "UI_Image.h"
#include "Player.h"
#include "j1Render.h"
#include "p2Point.h"

Minimap::Minimap() : base(nullptr)
{}

Minimap::~Minimap()
{}

UI_Image* Minimap::Load(pugi::xml_node& conf)
{
	/*TODO 2: Load the minimap's resources:
	First, load a new UI_Image* base using: App->gui->Add_element(UI_TYPE TYPE, j1Module* element_module)
	Let the type be IMAGE and its listener App->game, although any module will work

	Then, set the markers' values. It's best to load from the xml we are given,
	but for practical reasons use these values for now:
	greenMark = { 169, 519, 3, 3 };
	redMark   = { 173, 519, 3, 3 };


	Then, set the background image (UI_Image* base):

	Use UI_Image::Set_Image_Texture(SDL_Rect tex) to set the background's atlas section
	and UI_element::Set_Interactive_Box(SDL_Rect new_rect) to set the screen section to print.

	Use the following values:
	SDL_Rect mapImgTex = { 0, 533, 193, 132 };
	int scale = App->win->GetScale();
	SDL_Rect mapIntBox = { (552 * scale) - (190 * scale), (448 * scale) - (132 * scale), 193 * scale,132 * scale };
	
	Finally, block base by changing the UI_element::draggable value to NO_SCROLL.*/

	return base;
}

void Minimap::Update()
{
	iPoint mousePos;
	App->input->GetMouseSceenPos(mousePos.x, mousePos.y);

	/* TODO 6: check if the mouse is inside the minimap
	Use UI_element::Mouse_is_in(const iPoint& mouse_pos) to check*/

	/* TODO 7: Check if the mouse button is pressed: KEY_DOWN || KEY_REPEAT
	Use App->input->GetMouseButtonDown(SDL_BUTTON_LEFT) to get the mouse state
	*/

	/* TODO 8: Once the player is clicking the minimap, move the camera
	We'll use the same method as for printing markers but backguards.
	
	horizontal relPos = (mouse x position - minimap x as a float) / (minimap width)

	Find the relative position as a decimal < 1.
	By multiplying the map's width (map width * tile width) by the value we'll know where in the map the camera must be.
	Because the camera follows the player, for practical reasons we'll just move the player*/
}

void Minimap::Draw()
{
	SDL_Texture* atlas = App->gui->GetAtlas();

	/* TODO 4: print player in minimap
	Use Player* player = App->game->em->player; to get our player.
	The player's position is stored in its iPoint currentPos. We'll need the player's relative position in the map.
	For that, we'll use an fPoint to store the values. Example for the horizontal vaue:

	horizontal relPos = (horizontal position as a float) / (map width * tile width)

	This will give us a decimal value < 1.
	By multiplying the minimap's width by the value will know where in the minimap it we'll have to be printed.
	Now we just need to add the minimap's x value to find the screen position.

	Once we have both, we are ready to print. Use App->render->Blit(atlas, x, y, mark) to print.
	Set the mark to one of the previously loaded ones.*/


	/* TODO 5: print enemies in minimap
	Use the same method as before, but this time iterate through an Entity list.
	App->game->em->GetEntities() will return the enemies in the scene.
	Use a different mark for the enemies.*/
}