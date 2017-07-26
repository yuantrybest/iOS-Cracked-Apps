//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class NSString, UIImageView, UILabel, UIView;

@interface TBCouponHomeRecommondCell : UICollectionViewCell
{
    UIView *_contentview;
    UIImageView *_activityImageView;
    UIImageView *_iconImageView;
    UILabel *_activityLabel;
    UILabel *_titleViewLabel;
    UILabel *_contextViewLabel;
    UIImageView *_rightbgImageView;
    UIView *_leftbgView;
    UIImageView *_coverLine;
    UILabel *_endDayLabel;
    UILabel *_amountLabel;
    UILabel *_useConditionLabel;
    UIImageView *_statusImageView;
    NSString *_styleFlag;
    NSString *_jumpUrl;
}

@property(retain, nonatomic) NSString *jumpUrl; // @synthesize jumpUrl=_jumpUrl;
@property(retain, nonatomic) NSString *styleFlag; // @synthesize styleFlag=_styleFlag;
@property(retain, nonatomic) UIImageView *statusImageView; // @synthesize statusImageView=_statusImageView;
@property(retain, nonatomic) UILabel *useConditionLabel; // @synthesize useConditionLabel=_useConditionLabel;
@property(retain, nonatomic) UILabel *amountLabel; // @synthesize amountLabel=_amountLabel;
@property(retain, nonatomic) UILabel *endDayLabel; // @synthesize endDayLabel=_endDayLabel;
@property(retain, nonatomic) UIImageView *coverLine; // @synthesize coverLine=_coverLine;
@property(retain, nonatomic) UIView *leftbgView; // @synthesize leftbgView=_leftbgView;
@property(retain, nonatomic) UIImageView *rightbgImageView; // @synthesize rightbgImageView=_rightbgImageView;
@property(retain, nonatomic) UILabel *contextViewLabel; // @synthesize contextViewLabel=_contextViewLabel;
@property(retain, nonatomic) UILabel *titleViewLabel; // @synthesize titleViewLabel=_titleViewLabel;
@property(retain, nonatomic) UILabel *activityLabel; // @synthesize activityLabel=_activityLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UIImageView *activityImageView; // @synthesize activityImageView=_activityImageView;
@property(retain, nonatomic) UIView *contentview; // @synthesize contentview=_contentview;
- (void).cxx_destruct;
- (void)setStatus:(long long)arg1;
- (void)configCell:(id)arg1;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setUpActive;
- (void)setUpUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end
