//
//  ECEConfigure.h
//  ECEOpenSDK
//
//  Created by chun.chen on 2021/7/29.
//

// 配置文件

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface ECEConfigure : NSObject

/// 单例
+ (instancetype)config;

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

@end

NS_ASSUME_NONNULL_END
