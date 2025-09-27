# Computer-Condition-Display

## 项目介绍
Computer-Condition-Display 是一个基于 ROS 2 的计算机状态监控与显示系统，能够实时采集并展示计算机的 CPU 使用率、内存信息、网络流量等系统状态数据，为有需要实时查询自己计算机内存占用等情况的ROS2学习人士或开发者提供便利

该项目包含三个主要功能模块：
- `status_interfaces`：自定义 ROS 2 消息接口，定义系统状态数据的格式
- `status_publisher`：系统状态发布器，采集计算机状态数据并通过 ROS 2 话题发布
- `status_display`：状态显示器，订阅系统状态话题并通过 Qt 界面实时展示

## 功能特点
- 实时监控 CPU 使用率
- 监控内存使用率、总内存大小及可用内存
- 统计网络发送和接收数据量
- 显示系统状态更新时间和主机名
- 基于 Qt 的图形化界面展示

## 环境依赖
- ROS 2 (Foxy 及以上版本)
- Qt 5
- Python 3
- 以下 Python 库：
  - `psutil` (用于系统信息采集)

## 安装步骤

1. 克隆仓库到 ROS 2 工作空间的 `src` 目录下，并把其中的功能包移动到自己的工作空间的src目录：
   ```bash
   cd <your_ros2_workspace>/src
   git clone https://github.com/phostau628/Computer-Condition-Display.git
   #移动包
   mv Computer_Condition_Display/src/* ./
   # （可选）移动完成后可删除空的仓库目录（避免后续干扰）
   rm -rf Computer_Condition_Display
   ```

2. 安装依赖：
   ```bash
   # 安装 Python 依赖
   pip install psutil
   
   # 确保已安装 Qt 5
   # Ubuntu 系统可使用如下命令安装
   sudo apt-get install qt5-default
   ```

3. 编译项目：
   ```bash
   cd <your_ros2_workspace>
   colcon build
   ```

4. 刷新环境变量：
   ```bash
   source install/setup.bash
   ```

## 使用方法

1. 启动 ROS 2 节点管理器（可选）：
   ```bash
   ros2 run demo_nodes_cpp talker
   ```

2.直接启动launch文件
   ```bash
   ros2 launch status_display ccd_launch.py
   ```

3. 此时将看到一个 Qt 窗口，实时显示计算机的系统状态信息。

## 项目结构
```
Computer-Condition-Display/
├── src/
│   ├── status_display/        # 状态显示模块
│   │   ├── src/
│   │   │   └── status_display.cpp、ccd_launch # 显示界面及订阅逻辑实现
│   │   ├── CMakeLists.txt     # 编译配置
│   │   └── package.xml        # 包信息
│   ├── status_interfaces/     # 消息接口模块
│   │   ├── msg/
│   │   │   └── SystemStatus.msg  # 系统状态消息定义
│   │   ├── CMakeLists.txt     # 编译配置
│   │   └── package.xml        # 包信息
│   └── status_publisher/      # 状态发布模块
│       ├── status_publisher/
│       │   └── sys_status_pub.py  # 状态采集及发布逻辑实现
│       ├── setup.py           # Python 包配置
│       └── package.xml        # 包信息
├── .gitignore                 # Git 忽略文件配置
└── README.md                  # 项目说明文档
```

## 许可证
本项目采用 Apache License 2.0 许可证，详情请参见各模块下的 `LICENSE` 文件。
