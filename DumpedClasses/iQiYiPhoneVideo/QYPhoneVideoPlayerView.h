//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "QYBaselineFullScreenControllerDelegate-Protocol.h"
#import "QYCustomizePlayerViewControllerDelegate-Protocol.h"
#import "QYUPlayerViewProtocol-Protocol.h"

@class NSString, QYBaselineFullScreenController, QYCustomizePlayerViewController, QYPhoneSwitchScreenTransitioning, QYPlayerLoadingView, QYUPlayerAdView, QYUPlayerAdViewModel, QYUPlayerDataModel, QYUPlayerGlobalShareVideoContext, QYUPlayerProgressView, QYUPlayerTitleView, QYUPlayerTitleViewModel;
@protocol QYUPlayerViewDelegate, QYUPlayerViewMessageDelegate;

@interface QYPhoneVideoPlayerView : UIView <QYCustomizePlayerViewControllerDelegate, QYBaselineFullScreenControllerDelegate, QYUPlayerViewProtocol>
{
    QYUPlayerProgressView *progressView;
    QYUPlayerTitleView *titleView;
    QYBaselineFullScreenController *fullScreenController;
    UIView *playerControlView;
    QYUPlayerAdView *playerAdView;
    UIView *playFinishView;
    UIView *unlikeView;
    _Bool isShouldSyncPlayTime;
    unsigned long long _screenMode;
    QYPhoneSwitchScreenTransitioning *switchScreenTransitioning;
    QYUPlayerDataModel *_currentPlayerDataModel;
    id <QYUPlayerViewDelegate> _delegate;
    QYUPlayerGlobalShareVideoContext *_globalShareVideoContext;
    QYUPlayerTitleViewModel *_titleViewModel;
    id <QYUPlayerViewMessageDelegate> _messageDelegate;
    QYUPlayerAdViewModel *_adViewModel;
    QYPlayerLoadingView *_loadingView;
    QYUPlayerDataModel *_playerDataModel;
}

@property(retain, nonatomic) QYUPlayerDataModel *playerDataModel; // @synthesize playerDataModel=_playerDataModel;
@property(retain, nonatomic) QYPlayerLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) QYUPlayerAdViewModel *adViewModel; // @synthesize adViewModel=_adViewModel;
@property(nonatomic) __weak id <QYUPlayerViewMessageDelegate> messageDelegate; // @synthesize messageDelegate=_messageDelegate;
@property(retain, nonatomic) QYUPlayerTitleViewModel *titleViewModel; // @synthesize titleViewModel=_titleViewModel;
@property(retain, nonatomic) QYUPlayerGlobalShareVideoContext *globalShareVideoContext; // @synthesize globalShareVideoContext=_globalShareVideoContext;
@property(nonatomic) __weak id <QYUPlayerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) QYUPlayerDataModel *currentPlayerDataModel; // @synthesize currentPlayerDataModel=_currentPlayerDataModel;
- (void).cxx_destruct;
- (unsigned long long)transformViewPlayTypeToDataPlayType:(unsigned long long)arg1;
- (void)fullScreenAnimationEnd;
- (void)adViewClicked;
- (_Bool)currentIsCupidAd;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)updatePlayControlView;
- (void)checkAndChangePlayControlView;
- (void)removeUnlikeView;
- (void)hideUnlikeView;
- (void)showUnlikeView;
- (void)removePlayFinishView;
- (void)hidePlayFinishView;
- (void)showPlayFinishView;
- (id)createPlayFinishView;
- (void)removeAdView;
- (void)hideAdView;
- (void)showAdViewAccessoryViewShow:(_Bool)arg1;
- (void)hideTitleView;
- (void)showTitleView;
- (void)checkAndDecideHideTitleView;
- (void)networkStatusChanged;
- (_Bool)is3GforcePlay:(id)arg1;
- (void)backFromWebVC;
- (id)getCurrentVideoSize;
- (id)getPlayerCoverImage;
- (id)hotPageBlockId;
- (id)getShareRegisterInfo;
- (void)playerNetworkChanged:(id)arg1;
- (id)getShareTypeFrom;
- (void)orientationDidChange;
- (void)playbackFinishedShouldStopWhenMiniScreen:(_Bool)arg1;
- (void)playbackFinishedShouldStopWhenMiniScreen:(_Bool)arg1 realPlayTime:(long long)arg2;
- (id)getExpandPingBackParameter;
- (_Bool)shouldShowNextTip;
- (id)updateNextPlayInfo:(id)arg1;
- (id)getNextVideoInfo:(id)arg1;
- (void)playerStateChanged:(id)arg1;
- (void)showPlayerMessageViewByType:(int)arg1;
- (void)forceChangeFromFullPlayer:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)forceChangeFromFullPlayer:(id)arg1;
- (void)changePlayScreenMode:(int)arg1;
- (void)userSwitchPlay:(_Bool)arg1 player:(id)arg2;
- (void)hidePlayerAccessoryViews;
- (void)showPlayerAccessoryViews;
- (void)startShowPlayer;
- (void)noTestVipPlayForPaopao:(id)arg1;
- (void)onPlayerError:(id)arg1;
- (void)onAdStartPlay:(id)arg1;
- (void)onContentStartPlay:(id)arg1;
- (void)playbackTimeChanged:(id)arg1;
- (void)playbackFinshed:(id)arg1;
- (_Bool)isiOS7;
- (_Bool)isiOS8;
- (void)setView:(id)arg1 hidden:(_Bool)arg2 viewHideOption:(unsigned long long)arg3;
@property(nonatomic) _Bool playerControlViewHidden;
@property(nonatomic) _Bool progressViewHidden;
@property(nonatomic) _Bool titleViewHidden;
@property(readonly, nonatomic) _Bool isInErrorStatus;
@property(readonly, nonatomic) _Bool enableAutoSwitchScreenMode;
@property(readonly, nonatomic) unsigned long long playFinishViewType;
@property(readonly, nonatomic) unsigned long long screenMode;
@property(readonly, nonatomic) _Bool isWifi;
@property(readonly, nonatomic) QYCustomizePlayerViewController *playerController;
- (void)applicationDidEnterBackground;
- (void)didSwitchToMiniScreen;
- (void)autoSwitchToMiniScreen;
- (void)switchToMiniScreenWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)switchToMiniScreenShouldShowPlayFinishView:(_Bool)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)switchToMiniScreen;
- (void)switchToFullScreenWithDeviceOrientation:(long long)arg1;
- (void)switchToFullScreen;
- (void)savePlayTime;
- (void)syncPlayTime;
- (void)changeViewToUnPlayStatus;
- (void)validateAndAdjustPlayerView;
@property(readonly, nonatomic) _Bool isSeekLoading;
@property(readonly, nonatomic) _Bool isPreContentLoading;
@property(readonly, nonatomic) _Bool isLoadCurrentData;
@property(readonly, nonatomic) _Bool isPaused;
@property(readonly, nonatomic) _Bool isLoading;
@property(readonly, nonatomic) _Bool isPlaying;
- (void)updateView;
- (void)playerViewPreparePlay:(id)arg1;
- (void)pauseOrStopVideo;
- (void)stopVideo;
- (void)pauseVideo;
- (void)playVideoWithPlayType:(unsigned long long)arg1;
- (void)playVideo;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

