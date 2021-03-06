//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "FALiveAVVideoViewDelegate.h"

@class FALiveAVVideoView, FALiveMVComposeProgressView, NSString, UIButton, UIImageView, UILabel;

@interface FALiveMVComposePlayerView : UIView <FALiveAVVideoViewDelegate>
{
    id <FALiveMVComposePlayerViewDelegate> _delegate;
    NSString *_mvUrl;
    NSString *_title;
    NSString *_previewImgUrl;
    UIImageView *_headImageView;
    FALiveAVVideoView *_videoView;
    UIView *_progressBgView;
    FALiveMVComposeProgressView *_progressView;
    UILabel *_progressLab;
    UIButton *_playBtn;
}

@property(retain, nonatomic) UIButton *playBtn; // @synthesize playBtn=_playBtn;
@property(retain, nonatomic) UILabel *progressLab; // @synthesize progressLab=_progressLab;
@property(retain, nonatomic) FALiveMVComposeProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UIView *progressBgView; // @synthesize progressBgView=_progressBgView;
@property(retain, nonatomic) FALiveAVVideoView *videoView; // @synthesize videoView=_videoView;
@property(retain, nonatomic) UIImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(copy, nonatomic) NSString *previewImgUrl; // @synthesize previewImgUrl=_previewImgUrl;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *mvUrl; // @synthesize mvUrl=_mvUrl;
@property(nonatomic) __weak id <FALiveMVComposePlayerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)stopPlay;
- (void)pausePlayingMV;
- (void)liveRoomWillEnterRoom:(id)arg1;
- (void)loadHeadImage:(id)arg1;
- (void)endProgress:(_Bool)arg1;
- (void)startProgress;
- (void)restartProgress;
- (void)endProgressHandler:(_Bool)arg1;
- (void)nodeProgress:(double)arg1;
- (void)playBtnClick:(id)arg1;
- (void)configSubViews;
- (void)startPlayMV;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

