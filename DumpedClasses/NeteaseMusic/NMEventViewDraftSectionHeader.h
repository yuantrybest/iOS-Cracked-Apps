//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UIImageView, UILabel;

@interface NMEventViewDraftSectionHeader : UIView
{
    UIButton *_button;
    UIImageView *_failedIcon;
    UILabel *_failedInfoLabel;
    UIImageView *_closureView;
    UIView *_cellSplitter;
    id <NMEventViewDraftSectionHeaderDelegate> _delegate;
}

@property(nonatomic) __weak id <NMEventViewDraftSectionHeaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)buttonTouched:(id)arg1;
- (void)layoutSubviews;
- (void)handleNightModeChanged:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

