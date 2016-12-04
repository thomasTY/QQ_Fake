//
//  QQSideBarFunctionCell.h
//  QQ框架
//
//  Created by thomasTY on 16/12/1.
//  Copyright © 2016年 thomasTY. All rights reserved.
//

#import <UIKit/UIKit.h>
@class QQFunctionModel;
@interface QQSideBarFunctionCell : UITableViewCell
///绑定数据模型
@property(nonatomic,strong)QQFunctionModel * sideBarFunction;
@end
