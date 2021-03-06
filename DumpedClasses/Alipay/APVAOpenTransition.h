//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIViewControllerAnimatedTransitioning.h"

@class NSString, UIView;

@interface APVAOpenTransition : NSObject <UIViewControllerAnimatedTransitioning>
{
    id <UIViewControllerContextTransitioning> _transitionContext;
    UIView *_bubble;
    struct CGPoint _startingPoint;
}

@property(retain, nonatomic) UIView *bubble; // @synthesize bubble=_bubble;
@property(retain, nonatomic) id <UIViewControllerContextTransitioning> transitionContext; // @synthesize transitionContext=_transitionContext;
@property(nonatomic) struct CGPoint startingPoint; // @synthesize startingPoint=_startingPoint;
- (void).cxx_destruct;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (struct CGRect)frameForBubble:(struct CGPoint)arg1 size:(struct CGSize)arg2 start:(struct CGPoint)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

