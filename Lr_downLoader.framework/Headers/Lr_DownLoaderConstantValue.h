//
//  Lr_DownLoaderConstantValue.h
//  Lr_Download
//
//  Created by lk on 2019/6/4.
//  Copyright © 2019年 lk. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Lr_DownLoadFileUtil.h"
NS_ASSUME_NONNULL_BEGIN

//每次读取文件的大小 不要动它  每次读150k 
static const int LR_DOWNLOADER_PIECE = 1024 * 100;
//默认下载到的文件夹
static NSString * const LR_RES_DOWNLOADER = @"lr_res_downloader";
//保存信息的地址
static NSString * const LR_RES_DOWNLOADERINFO = @"info.plist";

//几个主要的目录

/*document目录*/
#define LR_DOCUMENT [Lr_DownLoadFileUtil getDocumentPath]

/*document/lr_res_downloader 目录*/
#define LR_DOWNLOADER [NSString stringWithFormat:@"%@/%@",LR_DOCUMENT,LR_RES_DOWNLOADER]

/*document/lr_res_downloader/expandName*/
#define LR_DOWNLOADEREXPAND(expandName) [NSString stringWithFormat:@"%@/%@/%@",LR_DOCUMENT,LR_RES_DOWNLOADER,expandName]

/*document/lr_res_downloader/info.plist文件*/
#define LR_DOWNLOADERINFO [NSString stringWithFormat:@"%@/%@/%@",LR_DOCUMENT,LR_RES_DOWNLOADER,LR_RES_DOWNLOADERINFO]

NS_ASSUME_NONNULL_END
