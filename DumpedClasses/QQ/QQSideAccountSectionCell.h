//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQSASuperCell.h"

@class QQAvatarView, SAArrowView, UIImage, UIImageView, UILabel;

@interface QQSideAccountSectionCell : QQSASuperCell
{
    UILabel *_noteLabel;
    QQAvatarView *_avatar;
    UIImageView *_maskView;
    UIImage *_subImage;
    UILabel *_nickLabel;
    UILabel *_numLabel;
    SAArrowView *_arrView;
    id <QQSideAccountSectionCellDelegate> _delegate;
    long long _uin;
}

+ (double)getCellHeight;
@property(nonatomic) long long uin; // @synthesize uin=_uin;
@property(nonatomic) id <QQSideAccountSectionCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)layoutSubviews;
- (void)setAccount:(id)arg1;
- (void)setArrowHighLight:(_Bool)arg1 delay:(_Bool)arg2;
- (void)onAvaterPressed;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

@end

