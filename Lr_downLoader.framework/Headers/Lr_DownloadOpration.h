//
//  Lr_DownloadOpration.h
//  Lr_Download
//
//  Created by lk on 2019/6/4.
//  Copyright © 2019年 lk. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Lr_DonloaderState.h"

@class Lr_DownloadBean;

NS_ASSUME_NONNULL_BEGIN

@protocol Lr_DownloadOprationDelegate <NSObject>

@optional

//加载进度回调
-(void)lr_DownloadOpration:(Lr_DownloadBean *)bean total:(long long)total current:(long long)current;

//下载失败
-(void)lr_DownloadOpration:(Lr_DownloadBean *)bean downloadFaildWithError:(NSError *)error;

//下载状态发生变化 这里只代理  下载中 -> 等待中 (下载过程中改变最大下载数) 如果不切换下载数量，可以不使用该代理
-(void)lr_DownloadOpration:(Lr_DownloadBean *)bean downLoadStateChange:(Lr_DonloaderState)state;

//暂停
-(void)lr_DownloadOprationPuase:(Lr_DownloadBean *)bean;

//下载成功
-(void)lr_DownloadOprationDownloadSuccess:(Lr_DownloadBean *)bean;

@end

@interface Lr_DownloadOpration : NSObject

@property (nonatomic ,weak)id <Lr_DownloadOprationDelegate> delegate;

@property (nonatomic ,assign)int mxdwncnt;//最大下载数

//任务添加到等待队列
@property (nonatomic ,strong, readonly)NSMutableArray<Lr_DownloadBean *> * dataQueue;//等待队列

//下载队列
@property (nonatomic ,strong, readonly)NSMutableArray<Lr_DownloadBean *> * downloadingQueue;//下载队列

/** instance
 */
+(instancetype)opration;

//开始下载
-(void)download;

/** 暂停某个任务
 */
-(void)pauseTask:(NSString *)path;

/**添加任务
 * @param target 往列表中添加任务
 */
-(void)addTarget:(Lr_DownloadBean *)target;

/**添加任务
 * @param target 往列表中添加任务
 */
-(void)removeTarget:(Lr_DownloadBean *)target;

/** 获取某个文件的文件大小
 * @param bean 下载的基本信息
 */
-(long long)getLocalFileSize:(Lr_DownloadBean *)bean;

/** 获取某个完整文件的大小 （已下载，下载中，下载暂停，下载出错等都能拿到，等待中且未开始下载的文件拿不到大小）
 * @param bean 下载的基本信息
 */
-(long long)getTotalFileSize:(Lr_DownloadBean *)bean;

/** 获取某个下载内容的下载状态
 * 该方法只返回（等待，下载，完成）三种状态，否则返回传入bean.state。
 * @param bean 资源基本信息
 */
-(Lr_DonloaderState)downloaderState:(Lr_DownloadBean *)bean;

/** 获取下载完成后文件的地址（已完成）
 * @param bean 资源基本信息
 */
-(NSString *)getDownloadPath:(Lr_DownloadBean *)bean;

@end

NS_ASSUME_NONNULL_END
