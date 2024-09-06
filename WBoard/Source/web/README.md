# 网络模块

存放所有与Web有关的类，处理浏览器的请求

### 1 `WBWebController.h` 和 `WBWebController.cpp` 网络控制器模块

程序执行初期在`WBApplication::exec(const QString& pFileToImport)` 中创建实例，各种与网络相关的操作都要经过此模块转接

#### 1 点击`Web`按钮时，调用堆栈如下

![网络模块](https://moyi-image.oss-cn-guangzhou.aliyuncs.com/img02/202409061549243.png)

