#include <game/GameEngine.h>


#include <game/WeaponManager.h>
#include <game/Sniper.h>

GameEngine::GameEngine()
{
	_weaponManager = new WeaponManager();

}


GameEngine::~GameEngine()
{
	delete _weaponManager;
}

void GameEngine::frame()
{
}

bool GameEngine::isValid()
{
	return true;
}

void GameEngine::initialize()
{
	// add a default weapon
	_weaponManager->setActiveWeapon( new Sniper());

}

void GameEngine::onLeftClic()
{
	_weaponManager->Fire();
}