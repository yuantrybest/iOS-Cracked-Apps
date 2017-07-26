//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBOfficalAccountBaseTableViewCell.h"

@class UIButton, UIImageView, UILabel, UIView;

@interface TBCCTableViewCell : TBOfficalAccountBaseTableViewCell
{
    UIImageView *_avatarImageView;
    UILabel *_nameLabel;
    UILabel *_mergeLabel;
    UILabel *_contentLabel;
    UIImageView *_subPicImageView;
    UILabel *_subDescLabel;
    UIImageView *_mainImageView;
    UIButton *_reCallButton;
    UILabel *_mainDescLabel;
    UIView *_mainDescBgView;
    UILabel *_descLabel;
    UILabel *_wengdajiLabel;
    UIImageView *_wengdajiImageView;
    UILabel *_appNameLabel;
    UIView *_appNameLabelBc;
    UILabel *_arrowLabel;
    UIImageView *_bubbleView;
}

+ (double)heightForContent:(id)arg1;
+ (double)textHeightForContent:(id)arg1;
@property(retain, nonatomic) UIImageView *bubbleView; // @synthesize bubbleView=_bubbleView;
@property(retain, nonatomic) UILabel *arrowLabel; // @synthesize arrowLabel=_arrowLabel;
@property(retain, nonatomic) UIView *appNameLabelBc; // @synthesize appNameLabelBc=_appNameLabelBc;
@property(retain, nonatomic) UILabel *appNameLabel; // @synthesize appNameLabel=_appNameLabel;
@property(retain, nonatomic) UIImageView *wengdajiImageView; // @synthesize wengdajiImageView=_wengdajiImageView;
@property(retain, nonatomic) UILabel *wengdajiLabel; // @synthesize wengdajiLabel=_wengdajiLabel;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UIView *mainDescBgView; // @synthesize mainDescBgView=_mainDescBgView;
@property(retain, nonatomic) UILabel *mainDescLabel; // @synthesize mainDescLabel=_mainDescLabel;
@property(retain, nonatomic) UIButton *reCallButton; // @synthesize reCallButton=_reCallButton;
@property(retain, nonatomic) UIImageView *mainImageView; // @synthesize mainImageView=_mainImageView;
@property(retain, nonatomic) UILabel *subDescLabel; // @synthesize subDescLabel=_subDescLabel;
@property(retain, nonatomic) UIImageView *subPicImageView; // @synthesize subPicImageView=_subPicImageView;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UILabel *mergeLabel; // @synthesize mergeLabel=_mergeLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
- (void).cxx_destruct;
- (void)handleTapGestureRecognizer:(id)arg1;
- (void)configureWithItem:(id)arg1;
- (void)selectedReCallButton:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
