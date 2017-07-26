//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class FTSSearchRecord, QQAvatarView, UIButton, UIImageView, UILabel;

@interface FTSSearchRecordCellView : UIView
{
    QQAvatarView *_avatarView;
    UILabel *_majorTextLabel;
    UIImageView *_iconImgView;
    UIButton *_deleteButton;
    FTSSearchRecord *_searchRecord;
}

@property(retain, nonatomic) UIButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(retain, nonatomic) FTSSearchRecord *searchRecord; // @synthesize searchRecord=_searchRecord;
- (void).cxx_destruct;
- (void)updateSubText;
- (void)updateMajorText;
- (void)updateAvatar;
- (void)updateIconView;
- (void)updateCellView;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
