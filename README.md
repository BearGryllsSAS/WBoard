# 1 `WBoard`
`WBoard`是一款在`Windows`平台基于`VS + Qt`开发的一款开放源码的白板教学软件，主要用于学校和大学的交互式电子白板。 它既可以与交互式白板一起使用，也可以在双屏幕场景中通过笔、平板显示器和光束进行使用。 主要有演示板、网页、文档和桌面四大界面。

## 1.1 编译环境

### 1.1.1 编译器安装
安装`Visual Studio: VS2017`及以上 和 `Qt: Qt5`
1. `Visual Studio`官网下载地址：[Visual Studio](https://visualstudio.microsoft.com/zh-hans/downloads/ "Visual Studio")
2. `Qt5.15.2`下载地址：[Qt5.15.2](https://download.qt.io/official_releases/online_installers/ "Qt5.15.2")
3. `VS2022 + QT`开发环境搭建：[VS2022 + QT](https://blog.csdn.net/MelyLenient/article/details/123854069/ "VS2022 + QT")

### 1.1.2 配置项目


# 2 项目模块解读
## 2.1 图形管理模块
### 2.1.1 图形动作管理
### 2.1.2 图形场景管理
### 2.1.3 图形形状管理
### 2.1.4 图形操作委托

## 2.2 窗口管理模块
### 2.2.1 窗口面板
### 2.2.2 浮动调色板
### 2.2.3 编辑控件

## 2.3 文档管理模块
### 2.3.1 文档导出
### 2.3.2 文档加载

## 2.4 动作相应管理
### 2.4.1 撤回操作
### 2.4.2 键盘操作

## 2.5 偏好设置与文档操作接口

## 2.6 网络模块

# 3 项目流程
## 3.1 程序运行流程
## 3.2 程序主控制器及数据模型

# 4 程序执行流程

### 1. main 函数
1. 创建`WBApplication`实例`app`，通过`WBApplication`实例对象初始化主程序的相关环境
2. `app`通过调用`exec()`进行事件主循环
3. 在`exec()`中
   1. 创建和初始化主窗口`WBMainWindow`进行子窗口布局
   2. 创建和初始化各个控制器
   3. 创建和初始化其他资源
   4. 连接各种信号和槽函数





















































# 5 各个功能的代码实现

1. 点开网页`Web`功能的时候，网页控制器`WBWebController`会发挥作用，`WBWebController`类中的`webBrowserInstance()`会创建浏览器实例。具体的调用堆栈为：
![image-20240904183100772](https://moyi-image.oss-cn-guangzhou.aliyuncs.com/img02/202409041831962.png)

![image-20240904183125053](https://moyi-image.oss-cn-guangzhou.aliyuncs.com/img02/202409041831187.png)

![image-20240904183153129](https://moyi-image.oss-cn-guangzhou.aliyuncs.com/img02/202409041831258.png)

![image-20240904183205584](https://moyi-image.oss-cn-guangzhou.aliyuncs.com/img02/202409041832724.png)

![image-20240904183220224](https://moyi-image.oss-cn-guangzhou.aliyuncs.com/img02/202409041832363.png)

![image-20240904183229223](https://moyi-image.oss-cn-guangzhou.aliyuncs.com/img02/202409041832355.png)

![image-20240904183246498](https://moyi-image.oss-cn-guangzhou.aliyuncs.com/img02/202409041832630.png)

![image-20240904185225096](https://moyi-image.oss-cn-guangzhou.aliyuncs.com/img02/202409041852214.png)

`WBApplication`中对应的信号和槽函数

![image-20240904184106840](https://moyi-image.oss-cn-guangzhou.aliyuncs.com/img02/202409041841974.png)

`WBApplicationController::showInternet()`中`emit mainModeChanged(Internet)`

![image-20240904185834638](https://moyi-image.oss-cn-guangzhou.aliyuncs.com/img02/202409041858764.png)

`WBApplicationController`类中信号`void mainModeChanged(WBApplicationController::MainMode pMode)`的定义

![image-20240904190054727](https://moyi-image.oss-cn-guangzhou.aliyuncs.com/img02/202409041900863.png)

`mainModeChanged`信号和槽的连接时间

![image-20240904190435432](https://moyi-image.oss-cn-guangzhou.aliyuncs.com/img02/202409041904559.png)

实际上，`WBBoardPaletteManager::slot_changeMainMode(WBApplicationController::MainMode mainMode)`和`WBBoardController::appMainModeChanged(WBApplicationController::MainMode md)`都会先后被调用

![image-20240904191832710](https://moyi-image.oss-cn-guangzhou.aliyuncs.com/img02/202409041918854.png)

![image-20240904191555625](https://moyi-image.oss-cn-guangzhou.aliyuncs.com/img02/202409041915757.png)

2. `WBHttpGet`主要用于处理 HTTP 的 GET 请求，并提供了相关的功能和信号来处理请求过程中的各种事件和状态。调试的时候发现代码没有进入其任何成员函数中，于是全局搜索找到了所有与之相关联的文件
![image-20240905172729319](https://moyi-image.oss-cn-guangzhou.aliyuncs.com/img02/202409051727431.png)

![image-20240905172734517](https://moyi-image.oss-cn-guangzhou.aliyuncs.com/img02/202409051727594.png)
