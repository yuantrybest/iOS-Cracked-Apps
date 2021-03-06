//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBTaoPasswordBaseView.h"

@class UIButton, UILabel;

@interface TBTaoPasswordExceptionView : TBTaoPasswordBaseView
{
    UILabel *_titleView;
    UILabel *_textView;
    UIButton *_bottomButton;
    CDUnknownBlockType _buttonBlock;
}

@property(copy, nonatomic) CDUnknownBlockType buttonBlock; // @synthesize buttonBlock=_buttonBlock;
@property(retain, nonatomic) UIButton *bottomButton; // @synthesize bottomButton=_bottomButton;
@property(retain, nonatomic) UILabel *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) UILabel *titleView; // @synthesize titleView=_titleView;
- (void).cxx_destruct;
- (void)bottomButtonTapped:(id)arg1;
- (id)initWithTitle:(id)arg1 exception:(id)arg2 bottomButtonText:(id)arg3;

@end

