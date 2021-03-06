// OSG_0_RunModel.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int main(int argc, char **argv)
{
	//实例化显示图像的类osgViewer::Viewer
	osgViewer::Viewer viewer;
	//使用osgDB::readNodeFile读取模型文件cow.osg
	//设置viewer显示的场景
	viewer.setSceneData(osgDB::readNodeFile("cow.osg"));
	//开始执行渲染操作，返回值一般为1，程序退出或出错返回0
	return viewer.run();
}

