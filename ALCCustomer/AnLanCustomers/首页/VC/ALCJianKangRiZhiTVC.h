//
//  ALCJianKangRiZhiTVC.h
//  AnLanCustomers
//
//  Created by zk on 2020/3/26.
//  Copyright © 2020 kunzhang. All rights reserved.
//

#import "BaseTableViewController.h"

NS_ASSUME_NONNULL_BEGIN

@interface ALCJianKangRiZhiTVC : BaseTableViewController
@property(nonatomic,assign)BOOL isComeMineMY;
@property(nonatomic,strong)NSMutableArray<ALMessageModel *> *dataArray;
@end

NS_ASSUME_NONNULL_END
