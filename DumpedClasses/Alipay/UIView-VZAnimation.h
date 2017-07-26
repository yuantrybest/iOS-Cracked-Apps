//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@interface UIView (VZAnimation)
- (void)vz_stopAnimation;
- (CDUnknownBlockType)vz_animateWithCompletion;
- (void)vz_animationAllCompletion;
- (void)vz_chainLinkDidFinishAnimating;
- (void)vz_executeAllCompletionActions;
- (void)vz_animateChain;
- (CDUnknownBlockType)vz_animate;
- (CDUnknownBlockType)vz_duration;
- (id)vz_seconds;
- (CDUnknownBlockType)vz_repeat;
- (CDUnknownBlockType)vz_wait;
- (CDUnknownBlockType)vz_delay;
- (id)vz_easeInOutBounce;
- (id)vz_easeOutBounce;
- (id)vz_easeInBounce;
- (id)vz_easeInOutBack;
- (id)vz_easeOutBack;
- (id)vz_easeInBack;
- (id)vz_easeInOutElastic;
- (CDUnknownBlockType)vz_easeOutElasticDampingRatio;
- (id)vz_easeOutElastic;
- (id)vz_easeInElastic;
- (id)vz_easeInOutCirc;
- (id)vz_easeOutCirc;
- (id)vz_easeInCirc;
- (id)vz_easeInOutExpo;
- (id)vz_easeOutExpo;
- (id)vz_easeInExpo;
- (id)vz_easeInOutSine;
- (id)vz_easeOutSine;
- (id)vz_easeInSine;
- (id)vz_easeInOutQuint;
- (id)vz_easeOutQuint;
- (id)vz_easeInQuint;
- (id)vz_easeInOutQuart;
- (id)vz_easeOutQuart;
- (id)vz_easeInQuart;
- (id)vz_easeInOutCubic;
- (id)vz_easeOutCubic;
- (id)vz_easeInCubic;
- (id)vz_easeInOutQuad;
- (id)vz_easeOutQuad;
- (id)vz_easeInQuad;
- (id)vz_bounce;
- (id)vz_spring;
- (id)vz_easeBack;
- (id)vz_easeInOut;
- (id)vz_easeOut;
- (id)vz_easeIn;
- (void)addAnimationKeyframeCalculation:(CDUnknownBlockType)arg1;
- (id)vz_anchorRight;
- (id)vz_anchorLeft;
- (id)vz_anchorBottom;
- (id)vz_anchorTop;
- (id)vz_anchorBottomRight;
- (id)vz_anchorBottomLeft;
- (id)vz_anchorTopRight;
- (id)vz_anchorTopLeft;
- (id)vz_anchorCenter;
- (id)vz_anchorDefault;
- (CDUnknownBlockType)vz_moveAndReverseRotateOnPath;
- (CDUnknownBlockType)vz_moveAndRotateOnPath;
- (CDUnknownBlockType)vz_moveOnPath;
- (id)vz_bezierPathForAnimation;
- (CDUnknownBlockType)vz_moveConstraint;
- (CDUnknownBlockType)vz_makeConstraint;
- (CDUnknownBlockType)vz_transformScaleY;
- (CDUnknownBlockType)vz_transformScaleX;
- (CDUnknownBlockType)vz_transformScale;
- (CDUnknownBlockType)vz_transformXY;
- (CDUnknownBlockType)vz_transformZ;
- (CDUnknownBlockType)vz_transformY;
- (CDUnknownBlockType)vz_transformX;
- (id)vz_transformIdentity;
- (CDUnknownBlockType)vz_movePolar;
- (CDUnknownBlockType)vz_rotateY;
- (CDUnknownBlockType)vz_rotateX;
- (CDUnknownBlockType)vz_rotate;
- (CDUnknownBlockType)vz_rotateZ;
- (CDUnknownBlockType)vz_moveWidth;
- (CDUnknownBlockType)vz_moveHeight;
- (CDUnknownBlockType)vz_moveXY;
- (CDUnknownBlockType)vz_moveY;
- (CDUnknownBlockType)vz_moveX;
- (CDUnknownBlockType)vz_makeAnchor;
- (void)vz_makeAnchorFromX:(double)arg1 Y:(double)arg2;
- (CDUnknownBlockType)vz_makeScaleY;
- (CDUnknownBlockType)vz_makeScaleX;
- (CDUnknownBlockType)vz_makeScale;
- (CDUnknownBlockType)vz_makeCornerRadius;
- (CDUnknownBlockType)vz_makeBorderWidth;
- (CDUnknownBlockType)vz_makeBorderColor;
- (CDUnknownBlockType)vz_makeBackground;
- (CDUnknownBlockType)vz_makeOpacity;
- (CDUnknownBlockType)vz_makeHeight;
- (CDUnknownBlockType)vz_makeWidth;
- (CDUnknownBlockType)vz_makeY;
- (CDUnknownBlockType)vz_makeX;
- (CDUnknownBlockType)vz_makeCenter;
- (CDUnknownBlockType)vz_makeOrigin;
- (CDUnknownBlockType)vz_makeSize;
- (CDUnknownBlockType)vz_makeBounds;
- (CDUnknownBlockType)vz_makeFrame;

// Remaining properties
@property(copy, nonatomic) CDUnknownBlockType vz_animationCompletion; // @dynamic vz_animationCompletion;
@property(nonatomic) _Bool vz_isAnimating; // @dynamic vz_isAnimating;
@end
