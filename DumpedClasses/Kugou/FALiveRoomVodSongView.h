//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FAPanGesView.h"

#import "FAVodViewControllerDelegate.h"

@class FALiveRoomInfo, FAVodViewController, NSString, UIView;

@interface FALiveRoomVodSongView : FAPanGesView <FAVodViewControllerDelegate>
{
    id <FALiveRoomVodSongViewDelegate> _delegate;
    FAVodViewController *_vodVC;
    UIView *_contentView;
    UIView *_backgroundView;
    long long _contentHeight;
    FALiveRoomInfo *_roomInfo;
}

@property(retain, nonatomic) FALiveRoomInfo *roomInfo; // @synthesize roomInfo=_roomInfo;
@property(nonatomic) long long contentHeight; // @synthesize contentHeight=_contentHeight;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) FAVodViewController *vodVC; // @synthesize vodVC=_vodVC;
@property(nonatomic) __weak id <FALiveRoomVodSongViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)backBtnClickHandler;
- (void)vodViewControllerSuccessHandler;
- (void)vodViewControllerConfirmClickHandler;
- (void)dealKeyBoardWithKeyboardHeight:(double)arg1;
- (void)changeToFullScreen;
- (void)tapTheView;
- (void)dismissVodView;
- (void)createSubViews;
- (void)setBackgroundViewAlpha:(double)arg1;
- (void)showAnimtion;
- (id)initWithFrame:(struct CGRect)arg1 withSuperView:(id)arg2 roomInfo:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

