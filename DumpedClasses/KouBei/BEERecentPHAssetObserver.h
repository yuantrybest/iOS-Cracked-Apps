//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BEERecentPhotoObserver-Protocol.h"
#import "PHPhotoLibraryChangeObserver-Protocol.h"

@class NSMutableArray, NSString, PHAsset, PHFetchResult;

@interface BEERecentPHAssetObserver : NSObject <PHPhotoLibraryChangeObserver, BEERecentPhotoObserver>
{
    _Bool _assetChanged;
    _Bool _isEnumeratingAssets;
    PHAsset *_recentAsset;
    NSMutableArray *_queryCompletionBlocks;
    PHFetchResult *_fetchResult;
}

@property(retain) PHFetchResult *fetchResult; // @synthesize fetchResult=_fetchResult;
@property _Bool isEnumeratingAssets; // @synthesize isEnumeratingAssets=_isEnumeratingAssets;
@property(retain) NSMutableArray *queryCompletionBlocks; // @synthesize queryCompletionBlocks=_queryCompletionBlocks;
@property _Bool assetChanged; // @synthesize assetChanged=_assetChanged;
@property(retain) PHAsset *recentAsset; // @synthesize recentAsset=_recentAsset;
- (void).cxx_destruct;
- (void)checkRecentAsset:(id)arg1;
- (void)queryComplatedWithAsset:(id)arg1;
- (void)requeryForAssetsChanged;
- (void)photoLibraryDidChange:(id)arg1;
- (void)unregistPhotoChangedNotification;
- (void)registPhotoChangedNotification;
- (void)queryRecentPhoto:(CDUnknownBlockType)arg1;
- (id)recentPhoto;
- (void)stopObserver;
- (void)startObserver;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

