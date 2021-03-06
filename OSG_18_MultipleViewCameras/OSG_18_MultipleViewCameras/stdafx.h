// stdafx.h : 标准系统包含文件的包含文件，
// 或是经常使用但不常更改的
// 特定于项目的包含文件
//

#pragma once

#include "targetver.h"

#include <stdio.h>
#include <tchar.h>



// TODO: 在此处引用程序需要的其他头文件
#include <osg/Node>
#include <osg/Geode>  
#include <osg/Geometry>
#include <osg/Group>

#include <osg/MatrixTransform> //移动节点的矩阵类，最常用的移动节点的类。可随动、旋转控制节点
#include <osg/PositionAttitudeTransform> //位置变换节点类，提供模型的位置变换、大小缩放、原点位置的设置、坐标系的变换
#include <osg/Camera>  //相机节点，管理OSG中的模型——视图矩阵，相机的管理主要是通过各种变换实现的

#include <osgGA/TrackballManipulator> 

#include <osgDB/ReadFile>
#include <osgDB/WriteFile>

#include <osgUtil/Optimizer>
#include <osgViewer/Viewer>
#include <osgViewer/ViewerEventHandlers> //事件监听
#include <osgViewer/CompositeViewer> //多视图的管理，负责多个视图的管理及同步工作