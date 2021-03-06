//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray, UIButton;

@interface InterviewSegmentView : UIView
{
    _Bool _isFullScreen;
    id <InterviewSegmentViewDelegate> _delegate;
    UIButton *_one;
    UIButton *_two;
    UIButton *_three;
    UIButton *_four;
    UIButton *_five;
    UIButton *_selectedBtn;
    NSMutableArray *_currentNames;
    double _scale;
}

@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(retain, nonatomic) NSMutableArray *currentNames; // @synthesize currentNames=_currentNames;
@property(retain, nonatomic) UIButton *selectedBtn; // @synthesize selectedBtn=_selectedBtn;
@property(retain, nonatomic) UIButton *five; // @synthesize five=_five;
@property(retain, nonatomic) UIButton *four; // @synthesize four=_four;
@property(retain, nonatomic) UIButton *three; // @synthesize three=_three;
@property(retain, nonatomic) UIButton *two; // @synthesize two=_two;
@property(retain, nonatomic) UIButton *one; // @synthesize one=_one;
@property(nonatomic) _Bool isFullScreen; // @synthesize isFullScreen=_isFullScreen;
@property(nonatomic) __weak id <InterviewSegmentViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)resetBtnName;
- (void)selectOne;
- (void)segmentClick:(id)arg1;
- (void)layoutSubviews;
- (id)init;

@end

