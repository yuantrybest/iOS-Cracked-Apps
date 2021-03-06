//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MQZCommonFeedListViewController.h"

@class MQZoneCoverHeaderView, MQZoneVideoManager, NSString, QUIActionSheet, UIView;

@interface MQZCoverFeedListViewController : MQZCommonFeedListViewController
{
    long long _uin;
    QUIActionSheet *_quiActionSheet;
    MQZoneCoverHeaderView *_headerView;
    long long _statusBarStytle;
    _Bool _isFirstLayout;
    _Bool _useFirstLayoutFeedList;
    long long _firstLayoutNum;
    _Bool _isPushVC;
    NSString *_nickname;
    UIView *_contentView;
    MQZoneVideoManager *_videoManager;
}

@property(retain, nonatomic) MQZoneVideoManager *videoManager; // @synthesize videoManager=_videoManager;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(retain, nonatomic) QUIActionSheet *quiActionSheet; // @synthesize quiActionSheet=_quiActionSheet;
@property(nonatomic) __weak MQZoneCoverHeaderView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) long long uin; // @synthesize uin=_uin;
- (void).cxx_destruct;
- (_Bool)shouldShowWidgetAI;
- (_Bool)isShowingOperationWidget;
- (void)preGetLiveInfo:(id)arg1;
- (void)prepareForReuseCell:(id)arg1 feedModel:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)openVideoRecordController:(long long)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)longPressCoverView:(id)arg1;
- (void)onFeedCell:(id)arg1 action:(unsigned long long)arg2 param:(id)arg3 feedModel:(id)arg4;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)clearModelInfo;
- (long long)onPhotoModelChangedNotify:(id)arg1;
- (long long)onMarkFaceNotify:(id)arg1;
- (void)advReportWithFeedModel:(id)arg1 requestId:(long long)arg2 position:(long long)arg3;
- (void)videoReportWithString:(id)arg1;
- (void)videoCommentReport:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)modifyStatusBarStyleIfNeed;
- (void)dealloc;
- (void)reloadMoreData;
- (void)viewWillAppear:(_Bool)arg1;
- (void)initNotificationObservers:(id)arg1;
- (id)init;

@end

