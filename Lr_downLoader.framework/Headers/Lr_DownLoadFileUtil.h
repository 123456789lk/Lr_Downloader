//
//  Lr_DownLoadFileUtil.h
//  Lr_Download
//
//  Created by lk on 2019/6/4.
//  Copyright © 2019年 lk. All rights reserved.
//

#import <Foundation/Foundation.h>
@class Lr_DownloadBean;

NS_ASSUME_NONNULL_BEGIN

@interface Lr_DownLoadFileUtil : NSObject
+(BOOL)createFileAtPath:(NSString *)path;
+(BOOL)fileEixtedAtPath:(NSString *)path;

+(NSString *)getDocumentPath;
+(NSString *)getLibraryPath;
+(NSString *)getTempletePath;

/** 获取临时暂存的文件
 *  注 ： 临时文件是下载过程中的文件
 *  @parmas info 下载的基本信息
 *  @return 临时暂存的文件地址
 */
+(NSString *)getTempSizePath:(Lr_DownloadBean *)info;

/** 移除某个文件
 *  @parma path 下载的基本信息
 *  @return 是否成功
 */
+(BOOL)removeFileAtPath:(NSString *)path;

/** 获取临时暂存的文件
 *  注 ： 临时文件是下载过程中的文件
 *  @parmas info 下载的基本信息
 *  @return 临时暂存的文件地址
 */
+(NSString *)getTempSavePath:(Lr_DownloadBean *)info;

/** 获取下载完成后的文件
 *  @parmas info 下载的基本信息
 *  @return 下载完成后的文件地址
 */
+(NSString *)getCachePath:(Lr_DownloadBean *)info;

/** 处理下载好的文件
 * @params path 文件的地址
 * @return 是否处理完成
 */
+(BOOL)modifyTempPathWtihPath:(NSString *)path;

@end

NS_ASSUME_NONNULL_END
