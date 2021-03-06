//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIScrollViewDelegate.h"

@class NSArray, NSString, UIScrollView;

@interface CNLogisticsTabView : UIView <UIScrollViewDelegate>
{
    NSArray *_buttons;
    id <CNLogisticsSelectDelegate> _delegate;
    UIScrollView *_scrollView;
    UIView *_underline;
}

@property(retain, nonatomic) UIView *underline; // @synthesize underline=_underline;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) __weak id <CNLogisticsSelectDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *buttons; // @synthesize buttons=_buttons;
- (void).cxx_destruct;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)touchUpInside:(id)arg1;
- (void)setScrollButton:(long long)arg1;
- (void)setSelectButton:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setBagListCount:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

