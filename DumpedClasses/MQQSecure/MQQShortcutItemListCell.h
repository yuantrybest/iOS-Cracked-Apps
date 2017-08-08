//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class MQQCheckBox, MQQLine, MQQShortcutIconView, UIImageView, UILabel;

@interface MQQShortcutItemListCell : UITableViewCell
{
    struct CGAffineTransform _originArrowTransform;
    _Bool _isExpanded;
    _Bool _isExpandable;
    _Bool _isCheckable;
    MQQCheckBox *_checkBox;
    MQQShortcutIconView *_iconView;
    UILabel *_titleLabel;
    MQQLine *_bottomline;
    UIImageView *_arrowView;
}

+ (double)height;
@property(retain, nonatomic) UIImageView *arrowView; // @synthesize arrowView=_arrowView;
@property(nonatomic) _Bool isCheckable; // @synthesize isCheckable=_isCheckable;
@property(nonatomic) _Bool isExpandable; // @synthesize isExpandable=_isExpandable;
@property(nonatomic) _Bool isExpanded; // @synthesize isExpanded=_isExpanded;
@property(retain, nonatomic) MQQLine *bottomline; // @synthesize bottomline=_bottomline;
@property(readonly, retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, retain, nonatomic) MQQShortcutIconView *iconView; // @synthesize iconView=_iconView;
@property(readonly, retain, nonatomic) MQQCheckBox *checkBox; // @synthesize checkBox=_checkBox;
- (void)dealloc;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
