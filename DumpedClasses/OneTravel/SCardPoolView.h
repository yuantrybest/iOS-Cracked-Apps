//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class SCardFlowPresenter, UIPanGestureRecognizer;

@interface SCardPoolView : UIView
{
    UIPanGestureRecognizer *_panGesture;
    SCardFlowPresenter *_presenter;
}

+ (double)_hitTop:(struct CGPoint)arg1 withEvent:(id)arg2 inView:(id)arg3;
@property(readonly, nonatomic) UIPanGestureRecognizer *panGesture; // @synthesize panGesture=_panGesture;
@property(retain, nonatomic) SCardFlowPresenter *presenter; // @synthesize presenter=_presenter;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end
