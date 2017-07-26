//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel;

@interface LFBaseInfoNewStyleView : UIView
{
    id <LFBaseInfoNewStyleViewDelegate> _delegate;
    UIImageView *_avatarImageView;
    UIView *_avatarStrokeView;
    UILabel *_titleLabel;
    UILabel *_cateLabel;
}

@property(retain, nonatomic) UILabel *cateLabel; // @synthesize cateLabel=_cateLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *avatarStrokeView; // @synthesize avatarStrokeView=_avatarStrokeView;
@property(retain, nonatomic) UIImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(nonatomic) __weak id <LFBaseInfoNewStyleViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)avatarClicked:(id)arg1;
- (void)setAvatar:(id)arg1 title:(id)arg2 cateString:(id)arg3 certString:(id)arg4;
- (void)initUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end
