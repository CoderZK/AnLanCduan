//
//  HealthKitManage.h
//  AnLanCustomers
//
//  Created by zk on 2020/4/3.
//  Copyright © 2020 kunzhang. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <HealthKit/HealthKit.h>
//#import <HealthKitUI/HealthKitUI.h>
#define HKVersion [[[UIDevice currentDevice] systemVersion] doubleValue]
#define CustomHealthErrorDomain @"com.sdqt.healthError"
@interface HealthKitManage : NSObject
@property (nonatomic, strong) HKHealthStore *healthStore;
+(id)shareInstance;
- (void)authorizeHealthKit:(void(^)(BOOL success, NSError *error))compltion;
- (void)getDistance:(void(^)(double value, NSError *error))completion;
- (void)getStepCount:(void(^)(double value, NSError *error))completion;


@end


