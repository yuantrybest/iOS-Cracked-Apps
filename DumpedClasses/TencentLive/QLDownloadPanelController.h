//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "QLRequestModelDelegate.h"

@class KKMediaRootViewController, NSMutableArray, NSString, QLDownloadPanelView, QLJCECacheListModel, QLMainMovieControlView, QLMovieItem;

@interface QLDownloadPanelController : UIViewController <QLRequestModelDelegate>
{
    QLJCECacheListModel *_listModel;
    _Bool applyDownloadWhenWillDisappear;
    _Bool _dataLoaded;
    _Bool ignoreFreeSpaceNotice;
    _Bool isLoadMore;
    QLMovieItem *mainItem;
    NSMutableArray *shortMovieItems;
    NSMutableArray *_cacheItems;
    long long _videoType;
    NSString *_lid;
    NSString *_cid;
    NSString *_vid;
    KKMediaRootViewController *_mediaRootViewController;
    QLMainMovieControlView *_movieMask;
    QLDownloadPanelView *_panelView;
    CDUnknownBlockType _downloadResultBlock;
}

+ (_Bool)isSingleVideoFromKK:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType downloadResultBlock; // @synthesize downloadResultBlock=_downloadResultBlock;
@property(retain, nonatomic) QLDownloadPanelView *panelView; // @synthesize panelView=_panelView;
@property(nonatomic) __weak QLMainMovieControlView *movieMask; // @synthesize movieMask=_movieMask;
@property(nonatomic) __weak KKMediaRootViewController *mediaRootViewController; // @synthesize mediaRootViewController=_mediaRootViewController;
@property(copy, nonatomic) NSString *vid; // @synthesize vid=_vid;
@property(copy, nonatomic) NSString *cid; // @synthesize cid=_cid;
@property(copy, nonatomic) NSString *lid; // @synthesize lid=_lid;
@property(nonatomic) long long videoType; // @synthesize videoType=_videoType;
@property(retain, nonatomic) NSMutableArray *cacheItems; // @synthesize cacheItems=_cacheItems;
@property(retain, nonatomic) NSMutableArray *shortMovieItems; // @synthesize shortMovieItems;
@property(retain, nonatomic) QLMovieItem *mainItem; // @synthesize mainItem;
- (void).cxx_destruct;
- (void)clearResourse;
- (void)didSizeModelRequestFinished:(id)arg1;
- (_Bool)objectIsNotNilAndIsString:(id)arg1;
- (_Bool)hasFootterDragRefresh;
- (_Bool)hasHeaderDragRefresh;
- (_Bool)check3gDownloadAndPromptWithState:(int)arg1;
- (void)setIgnoreFreeSpaceNotice;
- (_Bool)checkDiskSpaceForDownload;
- (void)applyDownload;
- (void)backgroundApplyDownload;
- (void)downloadAllViewTouched:(id)arg1;
- (void)goFreeSpace;
- (_Bool)removeMovieItem:(id)arg1;
- (_Bool)shouldDisableForMovieItem:(id)arg1;
- (_Bool)shouldSelectForMovieItem:(id)arg1;
- (void)requestModel:(id)arg1 didFailedLoadWithError:(id)arg2;
- (void)openDownloadController;
- (void)requestModelDidFinishLoad:(id)arg1;
- (_Bool)shouldStopPlay;
- (_Bool)isShowingDownloadPannel;
- (void)retry;
- (void)tryToDownloadModel;
- (long long)movieItemIndexOfMovieItemsToDownload:(id)arg1;
- (void)updateMovieItemsToDownload;
- (void)refreshUI;
- (void)loadUI;
- (_Bool)isSingleVideo;
- (id)tryGetCacheDataKey;
- (int)uiStyle;
- (_Bool)hasNextPage;
- (void)loadMore;
- (void)loadDataWithBlock:(CDUnknownBlockType)arg1;
- (void)registerNotifications;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (id)pageDescription;
- (id)initWithLid:(id)arg1 cid:(id)arg2 vid:(id)arg3 videoType:(long long)arg4;
- (id)initWithLid:(id)arg1 cid:(id)arg2 vid:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
