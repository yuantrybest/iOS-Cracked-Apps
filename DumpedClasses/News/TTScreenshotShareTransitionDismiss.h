//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CAAnimationDelegate.h"
#import "UIViewControllerAnimatedTransitioning.h"

@class NSString;

@interface TTScreenshotShareTransitionDismiss : NSObject <CAAnimationDelegate, UIViewControllerAnimatedTransitioning>
{
    CDUnknownBlockType _animationFinishBlock;
}

@property(copy, nonatomic) CDUnknownBlockType animationFinishBlock; // @synthesize animationFinishBlock=_animationFinishBlock;
- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

