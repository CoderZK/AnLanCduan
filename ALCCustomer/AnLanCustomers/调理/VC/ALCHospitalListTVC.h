//
//  ALCHospitalListTVC.h
//  AnLanCustomers
//
//  Created by zk on 2020/4/30.
//  Copyright © 2020 kunzhang. All rights reserved.
//

#import "BaseTableViewController.h"

NS_ASSUME_NONNULL_BEGIN

@interface ALCHospitalListTVC : BaseTableViewController
@property(nonatomic,strong)NSMutableArray<ALMessageModel*> *dataArray;
@end

NS_ASSUME_NONNULL_END
