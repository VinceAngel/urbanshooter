#ifndef _WEAPON_MANAGER_H_
#define _WEAPON_MANAGER_H_

#include <osgViewer/Viewer>

#include <Weapon.h>



class WeaponManager
{

public:

	WeaponManager();
	~WeaponManager();


	osg::ref_ptr< Weapon > getWeapon() { return _weapon; }

	void setWeapon( Weapon * w) { _weapon = w; }

	void Tire();

private:


	osg::ref_ptr< Weapon > _weapon;

};

#endif //_WEAPON_MANAGER_H_
