# ECEOpenSDK
量表评估SDK

## 导入
### 使用Cocoapods导入
Podfile增加

	pod 'ECEOpenSDK-iOS', '1.0.0'
	
然后

	pod install
	
如果没有找到最新版本，可执行

	pod install --repo-update		
	
### 手动导入
下载[此仓库](https://github.com/zhihanltd/ECEOpenSDK-iOS/archive/refs/heads/master.zip)，然后解压，将 `ECEOpenSDK.framework` 和 `ECEOpenSDK.bundle` 拖入主项目，在Build Phases -> Copy Bundle Resources 内添加 `ECEOpenSDK.bundle`，Podfile 增加 `AFNetworking` 和 `Masonry`，然后执行 `pod install`

## 使用

也可查看[Demo](https://github.com/zhihanltd/ECEOpenSDK-iOSDemo.git)

### OC代码

导入头文件

	#import <ECEOpenSDK/ECEOpenSDK.h>

调起评测页面

	/// 评测id，请求自有服务器获取
    NSInteger evaluationId = 1;
    /// token，请求自有服务器获取
    NSString *token = @"";
    
    ECEEvaluationVC *vc = [ECESDKManager createPageWithEvaluationId:evaluationId token:token];
    UINavigationController *nav = [[UINavigationController alloc]initWithRootViewController:vc];
    nav.modalPresentationStyle = UIModalPresentationFullScreen;
    [self presentViewController:nav animated:YES completion:nil];	


### swift代码

导入头文件

	import ECEOpenSDK

调起评测页面

    /// 评测id，请求自有服务器获取
    let evaluationId:Int = 1
    /// token，请求自有服务器获取
    let token:String = ""
        
    let vc = ECESDKManager.createPage(withEvaluationId: evaluationId, token: token)
    let nav = UINavigationController(rootViewController: vc)
    nav.modalPresentationStyle = .fullScreen
    self.present(nav, animated: true, completion: nil)	
### 颜色
可通过 `ECEConfigure.config` 来配置页面颜色

	ECEConfigure.config.themeColor = UIColor.redColor;
	
支持配置的颜色有

```
/// 主题颜色，默认#FB834D
@property (nonatomic, strong) UIColor *themeColor;
/// 导航栏颜色，默认#FFFFFF
@property (nonatomic, strong) UIColor *navBgColor;
/// 导航栏标题字体，默认Bold 17
@property (nonatomic, strong) UIFont *navTitleFont;
/// 导航栏标题颜色，默认#333333
@property (nonatomic, strong) UIColor *navTitleColor;
/// 黑色，默认#333333
@property (nonatomic, strong) UIColor *blackColor;
/// 浅黑色，默认#666666
@property (nonatomic, strong) UIColor *lightBlackColor;
/// 灰色，默认#999999
@property (nonatomic, strong) UIColor *grayColor;
/// 按钮背景颜色，默认=themeColor
@property (nonatomic, strong) UIColor *buttonBgColor;
/// 按钮字体颜色，默认#FFFFFF
@property (nonatomic, strong) UIColor *buttonTitleColor;
```
	
### 图片
可以在主项目内放入同名文件来替换，如果使用的是手动导入的方式，可以直接替换 `ECEOpenSDK.bundle` 内的图片，SDK使用的图片有

```
ece_pre_question 上一题  
ece_pre_question_disable 上一题不可点击  
ece_next_question 下一题  
ece_next_question_disable 下一题不可点击  
ece_number_bg 题号背景图片 
ece_alert_close 答题卡窗口关闭按钮   
ece_answer_sheet 答题卡按钮图标  
ece_nav_back 导航条关闭按钮   
```

