//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel, UIVisualEffectView;

@interface MCChatPagePowerView : UIView
{
    UILabel *_speakerIcon;
    UIImageView *_powerLevelView;
    UILabel *_cancelLabel;
    UILabel *_countdownLabel;
    UILabel *_tipLabel;
    UIVisualEffectView *_visualEffectView;
}

@property(retain, nonatomic) UIVisualEffectView *visualEffectView; // @synthesize visualEffectView=_visualEffectView;
@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) UILabel *countdownLabel; // @synthesize countdownLabel=_countdownLabel;
@property(retain, nonatomic) UILabel *cancelLabel; // @synthesize cancelLabel=_cancelLabel;
@property(retain, nonatomic) UIImageView *powerLevelView; // @synthesize powerLevelView=_powerLevelView;
@property(retain, nonatomic) UILabel *speakerIcon; // @synthesize speakerIcon=_speakerIcon;
- (void).cxx_destruct;
- (id)imageWithPowerLevel:(long long)arg1;
- (void)restoreEnv;
- (void)showCancel;
- (void)updateCountdown:(long long)arg1;
- (void)updatePowerLevel:(long long)arg1;
- (id)init;

@end

