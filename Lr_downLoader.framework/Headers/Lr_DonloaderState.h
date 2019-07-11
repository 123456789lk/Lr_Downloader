//
//  Lr_DonloaderState.h
//  Lr_Download
//
//  Created by lk on 2019/6/11.
//  Copyright © 2019年 lk. All rights reserved.
//

#import <Foundation/Foundation.h>

/** 回调使用
 */
typedef NS_ENUM(NSUInteger, Lr_DonloaderState) {
    Lr_DonloaderStatePrepare = -2,      //准备
    Lr_DonloaderStateFailed = -1,       //失败
    Lr_DonloaderStateUnknown = 0,       //未知状态
    Lr_DonloaderStateDownLoading = 1,   //加载中
    Lr_DonloaderStateCancel = 2,        //暂停
    Lr_DonloaderStateFinish = 3         //下载完成
};


