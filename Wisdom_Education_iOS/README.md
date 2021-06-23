智慧云课堂（PaaS 方案）是网易云信提供的在线互动课堂场景解决方案。基于在线教育的常见场景，网易云信提供智慧云课堂开源项目，为您演示 1 对 1、小班课和大班课的典型方案。您可以直接基于我们的 Demo 修改适配，也可以参考 Demo，自行集成云信 IM SDK、音视频通话 2.0 NERTC SDK 和互动白板 SDK，实现在线教育场景。

本文展示如何编译并运行 Android 平台的智慧云课堂示例项目，体验各个场景的在线课堂。

## 前提条件

在开始运行示例项目之前，请确保您已完成以下操作：

- 在云信控制台创建应用，并获取对应的 AppId 与 AppKey。
- 为此应用开通以下相关服务与抄送：
  - 产品服务：音视频通话 2.0、IM 专业版、聊天室、信令、互动白板、云端录制、点播。
  - 产品功能：
    - 音视频通话 2.0 的云端录制和抄送功能。
    - 互动白板的文档转码和云端录制功能。
  - 音视频通话 2.0 抄送：1-房间启动、2-房间结束、3-房间录制文件下载信息抄送 、4-用户进入房间、5-用户离开房间、8-房间时长抄送。


<note type="note">
<ul><li>开通相关产品与抄送，请联系<a href="https://yunxin.163.com/bizQQWPA.html">联系云信商务经理</a>。</li><li>如果仅需要本地跑通示例项目，简单体验智慧云课堂，您可以使用<a href="https://github.com/netease-kit/WisdomEducation/tree/main/Wisdom_Education_Docs">智慧云课堂体验账号</a>。体验账号已开通相关权限与抄送，课堂时长限制为 30 分钟。</li><li>体验账号仅供开发者体验与测试，请勿在线上环境中使用。</li></ul>
</note>

## 开发环境

在开始运行示例项目之前，请确保开发环境满足以下要求：


<style>
table th:first-of-type {
    width: 35%;
}
table th:nth-of-type(2) {
    width: 50%;
}
</style>

| 环境要求  | 说明                                      |
| --------- | ------------------------------------------- |
| iOS 版本  | 10.0以上                                  |
| CPU 架构 | ARM64、ARMV7                               |
| IDE       | XCode                                       |
| 其他    | 安装 CocoaPods，准备一台 iOS 9.0 及以上版本的 iOS 设备。  |

## 示例项目结构


| 文件夹/文件              | 说明                                 |
| ----------------------------- | -------------------------------------- |
| WisdomEducation/keyCenter                      | 配置AppID和AppKey |
| WisdomEducation/Enter                    | 教师\学生登陆页面                     |
| EduLogic                       | 课堂页面逻辑模块            |
| EduUI                        | 课堂页面UI模块                  |
| NEWhiteBoard                      | 白板功能模块                  |


## 运行示例源码

1. 获取示例项目。

    在 GitHub 的 [WisdomEducation](https://github.com/netease-kit/WisdomEducation) 示例项目 下载 Demo 源码工程。

2. 在 Podfile 所在文件夹中打开终端，执行命令 `pod install`。

3. 完成安装后，通过 Xcode 打开工程 `WisdomEducation.xcworkspace`。

4. 在示例项目中配置相关字段。

    如果需要基于 Demo 开发自己的应用，在 `keyCenter.m` 中将以下字段改为您的真实信息。

    | 配置项     | 说明                                      |
    | ------------- | ------------------------------------------- |
    | appId        | 应用的 AppId。可以在网易云信控制台中查看。 |
    | authorization       | 应用的 AppKey。可以在网易云信控制台中查看。 |
    
    <note type="note">如果仅需要本地跑通示例项目，您可以使用<a href="https://github.com/netease-kit/WisdomEducation/tree/main/Wisdom_Education_Docs">智慧云课堂体验账号</a>。体验账号的课堂时长限制为 30 分钟。</note>

5. 运行工程。
