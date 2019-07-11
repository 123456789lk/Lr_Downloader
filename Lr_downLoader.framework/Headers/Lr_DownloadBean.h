//
//  Lr_DownloadBean.h
//  Lr_Download
//
//  Created by lk on 2019/6/4.
//  Copyright © 2019年 lk. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Lr_DonloaderState.h"

NS_ASSUME_NONNULL_BEGIN

@interface Lr_DownloadBean : NSObject

@property (nonatomic ,assign) long long current;

@property (nonatomic ,assign) long long total;

@property (nonatomic ,assign)Lr_DonloaderState state;

@property (nonatomic ,strong)NSString * path;

@property (nonatomic ,strong)NSString * resName;

@property (nonatomic ,strong)NSString * expandName;



@end

NS_ASSUME_NONNULL_END
