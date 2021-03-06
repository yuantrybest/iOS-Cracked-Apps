//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UIColor, UILabel;

@interface KTVPrivChatActionView : UIView
{
    unsigned int _scene;
    UIColor *_norTextColor;
    UIColor *_selTextColor;
    id <KTVPrivChatActionViewDelegate> _delegate;
    UIButton *_iconBtn;
    UILabel *_titleLbl;
}

+ (struct CGSize)calculateSizeWithIcon:(id)arg1 scale:(float)arg2 title:(id)arg3 font:(float)arg4;
@property(retain, nonatomic) UILabel *titleLbl; // @synthesize titleLbl=_titleLbl;
@property(retain, nonatomic) UIButton *iconBtn; // @synthesize iconBtn=_iconBtn;
@property(nonatomic) __weak id <KTVPrivChatActionViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)iconBtnDidClicked_TouchUpInside:(id)arg1;
@property(readonly, nonatomic) __weak UILabel *titleLabel;
@property(readonly, nonatomic) __weak UIButton *iconButton;
- (void)customLayout;
- (void)extUpdateSelectedStateWithoutCallback:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1 norIcon:(id)arg2 selIcon:(id)arg3 title:(id)arg4 norTextColor:(id)arg5 selTextColor:(id)arg6 font:(float)arg7;
- (id)initWithFrame:(struct CGRect)arg1 norIcon:(id)arg2 higIcon:(id)arg3 title:(id)arg4 font:(float)arg5;

@end

