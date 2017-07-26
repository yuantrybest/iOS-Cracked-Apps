//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIScrollView;

@interface O2OPageViewDropdownView : UIView
{
    id <O2OPageViewDropdownViewDelegate> _delegate;
    double _currentSelectedIndex;
    UIScrollView *_iconsView;
    struct CGRect _storedFrame;
}

@property(retain, nonatomic) UIScrollView *iconsView; // @synthesize iconsView=_iconsView;
@property(nonatomic) double currentSelectedIndex; // @synthesize currentSelectedIndex=_currentSelectedIndex;
@property(nonatomic) struct CGRect storedFrame; // @synthesize storedFrame=_storedFrame;
@property(nonatomic) __weak id <O2OPageViewDropdownViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)selectItemAtPosition:(double)arg1;
- (void)loadIconsViewWithItems:(id)arg1 frame:(struct CGRect)arg2 configure:(id)arg3 delegate:(id)arg4 currentPositon:(double)arg5;
- (id)initWithFrame:(struct CGRect)arg1;

@end
