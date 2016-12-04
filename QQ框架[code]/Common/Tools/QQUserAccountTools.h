//
//  QQUserAccountTools.h
//  QQ框架
//
//  Created by thomasTY on 16/12/1.
//  Copyright © 2016年 thomasTY. All rights reserved.
//

#import <Foundation/Foundation.h>

static NSString * switchRootViewControllerNotification = @"switchRootViewControllerNotification";

@interface QQUserAccountTools : NSObject
@property(nonatomic,assign)BOOL isLogin;

+ (instancetype)sharedUserAccountTools;
@end
