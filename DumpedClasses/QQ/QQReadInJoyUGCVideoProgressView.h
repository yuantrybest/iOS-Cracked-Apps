//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class QQUGCVideoCircleView, UIButton;

@interface QQReadInJoyUGCVideoProgressView : UIView
{
    UIButton *_cancelBtn;
    QQUGCVideoCircleView *_circleView;
    CDUnknownBlockType _cancelAction;
}

@property(copy, nonatomic) CDUnknownBlockType cancelAction; // @synthesize cancelAction=_cancelAction;
@property(retain, nonatomic) QQUGCVideoCircleView *circleView; // @synthesize circleView=_circleView;
@property(retain, nonatomic) UIButton *cancelBtn; // @synthesize cancelBtn=_cancelBtn;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)refreshInfo:(float)arg1;
- (void)onCancelBtn:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
