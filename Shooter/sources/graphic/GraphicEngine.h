#ifndef _GRAPHIC_ENGINE_H_
#define _GRAPHIC_ENGINE_H_

#include <manager/Engine.h>

#include <osgViewer/Viewer>
#include <osg/Group>

class GraphicEngine : public Engine
{
public:
	GraphicEngine();
	~GraphicEngine();


	void frame();

	bool isValid();

	void initialize();

private:

	osg::ref_ptr<osgViewer::Viewer> _viewer;
	osg::ref_ptr<osg::Group> _root;
};

#endif