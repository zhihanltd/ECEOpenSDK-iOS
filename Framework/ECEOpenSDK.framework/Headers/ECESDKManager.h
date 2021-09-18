//
//  ECESDKManager.h
//  ECEOpenSDK
//
//  Created by chun.chen on 2021/7/29.
//

/// 量表评估SDK

#import <Foundation/Foundation.h>
#import "ECEEvaluationVC.h"

NS_ASSUME_NONNULL_BEGIN

@interface ECESDKManager : NSObject

/// 根据评估id创建评估页面
+ (ECEEvaluationVC *)createPageWithEvaluationId:(NSInteger)evaluationId token:(NSString *)token;

@end

NS_ASSUME_NONNULL_END
