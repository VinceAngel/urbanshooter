#ifndef _DISPLAYGEOMETRY_H
#define _DISPLAYGEOMETRY_H


class DisplayGeometry {
	public:
    //Devra cr�er la geometry de fond, sans la transparence, dans une geode. devra retourner une geode
    virtual osg::Geode * createBackground();

};
#endif
