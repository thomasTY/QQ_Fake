//
//  QQChat.h
//  QQ框架
//
//  Created by thomasTY on 16/12/1.
//  Copyright © 2016年 thomasTY. All rights reserved.
//

#import <Foundation/Foundation.h>


typedef enum
{
    QQChatTypeOther,
    QQChatTypeMe
} QQChatType;

@interface QQChat : NSObject

@property (nonatomic, copy) NSString *time;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, assign) QQChatType type;

@end
