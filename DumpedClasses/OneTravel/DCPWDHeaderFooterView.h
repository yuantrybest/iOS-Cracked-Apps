//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class DCUIButton;

@interface DCPWDHeaderFooterView : UIView
{
    DCUIButton *_leftBtn;
    DCUIButton *_midBtn;
    DCUIButton *_rightBtn;
}

+ (double)viewHeight;
@property(retain, nonatomic) DCUIButton *rightBtn; // @synthesize rightBtn=_rightBtn;
@property(retain, nonatomic) DCUIButton *midBtn; // @synthesize midBtn=_midBtn;
@property(retain, nonatomic) DCUIButton *leftBtn; // @synthesize leftBtn=_leftBtn;
- (void).cxx_destruct;
- (id)creatButton:(id)arg1 image:(id)arg2;
- (void)layoutSubviews;
- (id)getLine;
- (id)initWithFrame:(struct CGRect)arg1;

@end

