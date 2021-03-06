//
//  ALCChartMessageCell.h
//  AnLanCustomers
//
//  Created by zk on 2020/5/7.
//  Copyright © 2020 kunzhang. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface ALCChartMessageCell : UITableViewCell
@property(nonatomic,strong)UIButton *headBt;
@property(nonatomic,strong)UILabel *nameLB;
@property(nonatomic,strong)UILabel *contentLB;
@property(nonatomic,strong)UIImageView *imagV;
@property(nonatomic,strong)UIView *backV;

@property(nonatomic,strong)UILabel *timeLB;
@property(nonatomic,strong)NSString *timeStr;

@property(nonatomic,strong)ALMessageModel *model;
@end

NS_ASSUME_NONNULL_END
