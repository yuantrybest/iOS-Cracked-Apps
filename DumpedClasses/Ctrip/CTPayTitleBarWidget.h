//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTRootView.h"

@class CTPayTitleBarWidgetWrapper, NSMutableArray, UIView;

@interface CTPayTitleBarWidget : CTRootView
{
    int _transitionAnimation;
    UIView *_contentView;
    CTPayTitleBarWidgetWrapper *_widgetWrapper;
    NSMutableArray *_presentedWidgets;
    CTPayTitleBarWidget *_presentingWidget;
    CDUnknownBlockType _barWidgetLeftButtonClick;
}

+ (id)widgetWithTitle:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType barWidgetLeftButtonClick; // @synthesize barWidgetLeftButtonClick=_barWidgetLeftButtonClick;
@property(readonly, nonatomic) __weak CTPayTitleBarWidget *presentingWidget; // @synthesize presentingWidget=_presentingWidget;
@property(readonly, nonatomic) NSMutableArray *presentedWidgets; // @synthesize presentedWidgets=_presentedWidgets;
@property(nonatomic) int transitionAnimation; // @synthesize transitionAnimation=_transitionAnimation;
@property(retain, nonatomic) CTPayTitleBarWidgetWrapper *widgetWrapper; // @synthesize widgetWrapper=_widgetWrapper;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)dismissWidgetWithAnimation:(int)arg1 animated:(_Bool)arg2;
- (void)dismissWidgetAnimated:(_Bool)arg1;
- (void)dismissWidget;
- (void)showInViewController:(id)arg1 animation:(int)arg2 animated:(_Bool)arg3;
- (void)showInViewController:(id)arg1 animation:(int)arg2;
- (void)showInViewController:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (id)topWidget;
- (void)widgetDidDisappear;
- (void)widgetWillDisappear;
- (void)widgetDidAppear;
- (void)widgetWillAppear;
- (void)widgetDidInit;
- (void)handleTitleBarLeftButton:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)titleBar;
- (void)loadContentViewNibNamed:(id)arg1;
- (void)loadContentViewUsingClassName;
- (void)loadContentView;

@end

