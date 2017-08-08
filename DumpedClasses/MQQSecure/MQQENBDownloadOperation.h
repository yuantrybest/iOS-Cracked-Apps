//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MQQCPLOperation.h"

@class MQQCPLDownloadOperation, MQQCPLPhotoDownloadInfo, NSString;

@interface MQQENBDownloadOperation : MQQCPLOperation
{
    _Bool _wantsToDownloadPhoto;
    _Bool _wantsToDownloadThumbnail;
    long long _downloadPhotoSize;
    long long _downloadThumbnailSize;
    float _downloadPhotoProgress;
    float _downloadThumbnailProgress;
    MQQCPLPhotoDownloadInfo *_enbPhoto;
    NSString *_photoPath;
    NSString *_thumbnailPath;
    MQQCPLDownloadOperation *_downloadPhotoOperation;
    MQQCPLDownloadOperation *_downloadThumbnailOperation;
}

@property(retain, nonatomic) MQQCPLDownloadOperation *downloadThumbnailOperation; // @synthesize downloadThumbnailOperation=_downloadThumbnailOperation;
@property(retain, nonatomic) MQQCPLDownloadOperation *downloadPhotoOperation; // @synthesize downloadPhotoOperation=_downloadPhotoOperation;
@property(copy, nonatomic) NSString *thumbnailPath; // @synthesize thumbnailPath=_thumbnailPath;
@property(copy, nonatomic) NSString *photoPath; // @synthesize photoPath=_photoPath;
@property(retain, nonatomic) MQQCPLPhotoDownloadInfo *enbPhoto; // @synthesize enbPhoto=_enbPhoto;
- (void)downloadPhoto;
- (void)downloadThumbnail;
- (void)_isRunning;
- (void)_cancel;
- (void)_start;
- (void)dealloc;
- (id)init;

@end
