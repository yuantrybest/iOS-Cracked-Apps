//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

@class UIView;

@interface QXFullScreenContentMaskView : UIScrollView
{
    UIView *_leftView;
    UIView *_rightView;
    CDUnknownBlockType _canDragOnPoint;
}

@property(copy, nonatomic) CDUnknownBlockType canDragOnPoint; // @synthesize canDragOnPoint=_canDragOnPoint;
@property(retain, nonatomic) UIView *rightView; // @synthesize rightView=_rightView;
@property(retain, nonatomic) UIView *leftView; // @synthesize leftView=_leftView;
- (void).cxx_destruct;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)qxRotateToLandscape:(_Bool)arg1;
- (void)qxViewDidAppear;
- (void)qxViewWillAppear;
- (void)initSubViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

