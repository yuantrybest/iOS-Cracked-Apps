//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

@protocol UIGestureRecognizerDelegate;

@interface GWSwipeScrollView : UIScrollView
{
    id <UIGestureRecognizerDelegate> _gestureDelegate;
}

@property(nonatomic) __weak id <UIGestureRecognizerDelegate> gestureDelegate; // @synthesize gestureDelegate=_gestureDelegate;
- (void).cxx_destruct;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;

@end

