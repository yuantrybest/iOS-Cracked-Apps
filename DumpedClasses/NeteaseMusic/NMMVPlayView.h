//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NMVideoPlayControlView.h"

#import "NMMVChangeDefinationButtonDelegate.h"
#import "NMMVSwitchQualityViewDelegate.h"
#import "NMPlayNextMVButtonDelegate.h"

@class NMMV, NMMVDownloadMenuView, NMMVNavigationBar, NMMVPlayerController, NMPlayNextMVButton, NSString;

@interface NMMVPlayView : NMVideoPlayControlView <NMMVChangeDefinationButtonDelegate, NMMVSwitchQualityViewDelegate, NMPlayNextMVButtonDelegate>
{
    _Bool _showShareMenu;
    _Bool _showDownloadMenu;
    NMMV *_mv;
    NMMVPlayerController *_mvPlayer;
    id <NMMVPlayViewDelegate> _playViewDelegate;
    NMMVNavigationBar *_navigationBar;
    NMMVDownloadMenuView *_downloadMenuView;
    NMPlayNextMVButton *_playNextMVButton;
}

+ (double)mvPlayViewHeight;
@property(nonatomic) _Bool showDownloadMenu; // @synthesize showDownloadMenu=_showDownloadMenu;
@property(nonatomic) _Bool showShareMenu; // @synthesize showShareMenu=_showShareMenu;
@property(retain, nonatomic) NMPlayNextMVButton *playNextMVButton; // @synthesize playNextMVButton=_playNextMVButton;
@property(retain, nonatomic) NMMVDownloadMenuView *downloadMenuView; // @synthesize downloadMenuView=_downloadMenuView;
@property(retain, nonatomic) NMMVNavigationBar *navigationBar; // @synthesize navigationBar=_navigationBar;
@property(nonatomic) __weak id <NMMVPlayViewDelegate> playViewDelegate; // @synthesize playViewDelegate=_playViewDelegate;
@property(retain, nonatomic) NMMVPlayerController *mvPlayer; // @synthesize mvPlayer=_mvPlayer;
@property(retain, nonatomic) NMMV *mv; // @synthesize mv=_mv;
- (void).cxx_destruct;
- (void)playNextMVButton:(id)arg1 playNextMV:(id)arg2;
- (void)playNextMVButton:(id)arg1 cancelButtonClicked:(id)arg2;
- (void)mvSwitchQualityView:(id)arg1 switchQuality:(id)arg2;
- (void)definationButtonTouched:(id)arg1;
- (void)cancelPlayNext;
- (void)resetAutoCountingDown;
- (void)preparePlayNext:(id)arg1 autoCountingDown:(_Bool)arg2;
- (void)hideReplayButtonWithAnimation:(_Bool)arg1;
- (void)showReplayButtonWithAnimation:(_Bool)arg1;
- (void)showReplay:(_Bool)arg1 canPlayNext:(_Bool)arg2;
- (void)hideControlView;
- (void)showControlView;
- (void)toggleDisplayDownloadMenu:(_Bool)arg1;
- (void)toggleDisplayShareMenu:(_Bool)arg1;
- (void)setupFirstPlayAutoHide;
- (void)switchToFullScreen:(_Bool)arg1;
- (void)layoutReplayButtons:(_Bool)arg1;
- (void)layoutInFullScreen:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
