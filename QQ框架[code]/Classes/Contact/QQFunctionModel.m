//  QQFunctionModel.m
//  QQ框架
//
//  Created by thomasTY on 16/12/1.
//  Copyright © 2016年 thomasTY. All rights reserved.
//

#import "QQFunctionModel.h"

@implementation QQFunctionModel

+ (instancetype) functionModelWithDict:(NSDictionary *)dict
{
    QQFunctionModel * functionModel = [QQFunctionModel new];
    [functionModel setValuesForKeysWithDictionary:dict];
    return functionModel;
}
@end
