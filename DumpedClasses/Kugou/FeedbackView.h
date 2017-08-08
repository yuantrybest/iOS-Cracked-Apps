//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class KGThemeButton, KGThemeLabel;

@interface FeedbackView : UIView
{
    id <FeedbackViewDelegate> _delegate;
    KGThemeLabel *_textLabel;
    KGThemeButton *_feedbackButton;
    UIView *_container;
}

@property(retain, nonatomic) UIView *container; // @synthesize container=_container;
@property(retain, nonatomic) KGThemeButton *feedbackButton; // @synthesize feedbackButton=_feedbackButton;
@property(retain, nonatomic) KGThemeLabel *textLabel; // @synthesize textLabel=_textLabel;
@property(nonatomic) __weak id <FeedbackViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)clickFeedbackButton:(id)arg1;
- (void)onThemeChange:(id)arg1;
- (void)initViews;
- (void)addObservers;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end
