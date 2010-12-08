#ifndef _MY_HANDLER_H_
#define _MY_HANDLER_H_


#include <osgGA/GUIEventHandler>
#include <hud2/HudManager.h>

class MyHandler : public osgGA::GUIEventHandler 
{
public:

	MyHandler(){}
	~MyHandler(){}

	bool handle(const osgGA::GUIEventAdapter& ea, osgGA::GUIActionAdapter& aa)
	{
		if(ea.getEventType() == osgGA::GUIEventAdapter::KEYDOWN)
			switch(ea.getKey())
			{

				case(osgGA::GUIEventAdapter::KEY_F1):
				{
					HudManager::getInstance()->pushText(std::string("F1"));
					break;
				}

				case(osgGA::GUIEventAdapter::KEY_F2):
				{
					HudManager::getInstance()->pushText(std::string("F2"));
					break;
				}

			default:
				break;

			}

		return false;
	
	}


};

#endif //_MY_HANDLER_H_
