//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "FMComponentCellProtocol.h"
#import "FishVideoPlayerViewDelegate.h"

@class FMComponent, FishVideoPlayerView, MSWeakTimer, NSString, UIActivityIndicatorView, UIButton, UIImageView, UILabel, UIProgressView, UIView;

@interface FMFunDetailVideoContainerView : UITableViewCell <FishVideoPlayerViewDelegate, FMComponentCellProtocol>
{
    _Bool _interactPaused;
    _Bool _loadVideoSuccess;
    UIImageView *_bgView;
    UIImageView *_topMask;
    UIImageView *_bottomMask;
    UIImageView *_videoCoverView;
    UIView *_loadingView;
    UILabel *_loadingLabel;
    UIActivityIndicatorView *_loadingIndicator;
    UIView *_movieView;
    UIProgressView *_progressView;
    FishVideoPlayerView *_videoPlayer;
    UIButton *_playButton;
    long long _curState;
    MSWeakTimer *_loadingTimer;
    NSString *_videoURLString;
    FMComponent *_componentBeforeReuse;
}

+ (double)rowHeightForComponent:(id)arg1;
@property(retain, nonatomic) FMComponent *componentBeforeReuse; // @synthesize componentBeforeReuse=_componentBeforeReuse;
@property(copy, nonatomic) NSString *videoURLString; // @synthesize videoURLString=_videoURLString;
@property(retain, nonatomic) MSWeakTimer *loadingTimer; // @synthesize loadingTimer=_loadingTimer;
@property(nonatomic) _Bool loadVideoSuccess; // @synthesize loadVideoSuccess=_loadVideoSuccess;
@property(nonatomic) long long curState; // @synthesize curState=_curState;
@property(nonatomic) _Bool interactPaused; // @synthesize interactPaused=_interactPaused;
@property(retain, nonatomic) UIButton *playButton; // @synthesize playButton=_playButton;
@property(retain, nonatomic) FishVideoPlayerView *videoPlayer; // @synthesize videoPlayer=_videoPlayer;
@property(retain, nonatomic) UIProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UIView *movieView; // @synthesize movieView=_movieView;
@property(retain, nonatomic) UIActivityIndicatorView *loadingIndicator; // @synthesize loadingIndicator=_loadingIndicator;
@property(retain, nonatomic) UILabel *loadingLabel; // @synthesize loadingLabel=_loadingLabel;
@property(retain, nonatomic) UIView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UIImageView *videoCoverView; // @synthesize videoCoverView=_videoCoverView;
@property(retain, nonatomic) UIImageView *bottomMask; // @synthesize bottomMask=_bottomMask;
@property(retain, nonatomic) UIImageView *topMask; // @synthesize topMask=_topMask;
@property(retain, nonatomic) UIImageView *bgView; // @synthesize bgView=_bgView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)clearVideoPlayer;
- (void)onStarted;
- (void)onTimerProgress:(double)arg1;
- (void)onEnded;
- (void)onPrepared;
- (void)initFishPlayer;
- (void)stopPlaying;
- (void)startPlaying;
- (void)resumePlaying;
- (_Bool)shouldAutoPlay;
- (void)requestVideoFile:(id)arg1;
- (void)didTouchPlayButton:(id)arg1;
- (void)showPauseUI:(_Bool)arg1;
- (void)tryPlayVideoAtUrl:(id)arg1;
- (void)didEndDisplayingForRowAtIndexPath:(id)arg1;
- (void)willDisplayForRowAtIndexPath:(id)arg1;
- (void)bindComponent:(id)arg1;
- (void)hideLoading;
- (void)showLoading;
- (void)loadingTimeup;
- (void)prepareForReuse;
- (void)setupGuidePullup;
- (void)setupSubviews;
- (void)onOne2OneVideoReq;
- (void)appDidBecomeActive;
- (void)appWillResignActive;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

