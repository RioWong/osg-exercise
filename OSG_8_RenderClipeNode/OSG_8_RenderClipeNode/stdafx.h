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
#include <osg/Geometry>
#include <osg/Geode> //是个几何节点，可以说是一个几何Group节点，一般的可绘制几何体都是通过它来传向root进行渲染，是OSG几何绘制的最高管理节点
#include <osg/Group> //对节点起到组织作用，一般作为父节点或者根节点出现

#include <osg/ClipNode> //继承自osg::Group，定义场景中裁剪面的位置 (与之相似的有osg::ClipPlane，继承自osg::StateAttribute，定义一个裁剪面)
#include <osg/PolygonMode> //指定多边形的绘制模式(点/线框/填充)
#include <osg/MatrixTransform> //移动节点的矩阵类，最常用的移动节点的类。可随动、旋转控制节点
#include <osg/PositionAttitudeTransform> //位置变换节点类，提供模型的位置变换、大小缩放、原点位置的设置、坐标系的变换
#include <osg/AnimationPath> //动画类，封装了一个随时间变化的转型过程，可用于更新相机位置和模型对象的位置

#include <osgDB/ReadFile>
#include <osgDB/WriteFile>

#include <osgViewer/Viewer>

#include <osgUtil/Optimizer>