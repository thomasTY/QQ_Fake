//
//  QQSelectFunctionController.h
//  QQ框架
//
//  Created by thomasTY on 16/12/1.
//  Copyright © 2016年 thomasTY. All rights reserved.
//

#import "QQBaseController.h"
#import "QQFunctionModel.h"
#import "UIColor+Addition.h"

@interface QQSelectFunctionController : QQBaseController <UITableViewDataSource,UITableViewDelegate>
/**
 *  获取选中cell对应数据模型
 */
@property(nonatomic,strong)QQFunctionModel * selModle;
/**
 *  让view和tableView是同一对象
 */
@property(nonatomic,strong)UITableView * tableView;

//给子类提供加载数据的方法
- (void)loadDataWithPlistName:(NSString *)plistName;

@end
