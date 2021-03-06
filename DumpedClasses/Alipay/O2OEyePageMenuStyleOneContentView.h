//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class O2OEyePageMenuItem, UILabel;

@interface O2OEyePageMenuStyleOneContentView : UIView
{
    O2OEyePageMenuItem *_item;
    UIView *_leftLineView;
    UIView *_leftSquareView;
    UIView *_rightLineView;
    UIView *_rightSquareView;
    UILabel *_titleLabel;
}

@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *rightSquareView; // @synthesize rightSquareView=_rightSquareView;
@property(retain, nonatomic) UIView *rightLineView; // @synthesize rightLineView=_rightLineView;
@property(retain, nonatomic) UIView *leftSquareView; // @synthesize leftSquareView=_leftSquareView;
@property(retain, nonatomic) UIView *leftLineView; // @synthesize leftLineView=_leftLineView;
@property(retain, nonatomic) O2OEyePageMenuItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (id)squareView;
- (id)lineView;
- (id)initWithFrame:(struct CGRect)arg1 item:(id)arg2;

@end

