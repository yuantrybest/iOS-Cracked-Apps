//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIActivityIndicatorView, UILabel;

@interface ARProgressIndicatorView : UIView
{
    UIActivityIndicatorView *_activetyIndicatorView;
    UILabel *_progressLabel;
}

+ (void)hideProgressIndicatorFromView:(id)arg1;
+ (id)showProgressIndicatorViewToView:(id)arg1;
- (void).cxx_destruct;
- (void)updateProgress:(double)arg1;
- (id)init;

@end
