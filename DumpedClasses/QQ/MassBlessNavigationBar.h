//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIButton, UILabel;

@interface MassBlessNavigationBar : UIView
{
    UILabel *_titleView;
    NSString *_title;
    UIButton *_leftButton;
    NSString *_leftTitle;
    UIButton *_rightButton;
    NSString *_rightTitle;
    id <MassBlessNavigationBarDelegate> _delegate;
}

@property(nonatomic) id <MassBlessNavigationBarDelegate> delegate; // @synthesize delegate=_delegate;
- (id)getLeftBtn;
- (void)dealloc;
- (void)rightButtonClicked:(id)arg1;
- (void)leftButtonClicked:(id)arg1;
- (void)updateRightButtonView;
- (void)setRightTitle:(id)arg1;
- (void)updateLeftButtonView;
- (void)setLeftTitle:(id)arg1;
- (void)updateTileView;
- (void)setTitle:(id)arg1;
- (id)init;

@end

