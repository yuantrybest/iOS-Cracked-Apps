//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VZListCell.h"

@class NSString, UIView;

@interface O2OMerchantCommonCell : VZListCell
{
    NSString *_imageUrl;
    UIView *_bottomView;
    struct UIEdgeInsets _blInsets;
}

@property(nonatomic) struct UIEdgeInsets blInsets; // @synthesize blInsets=_blInsets;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setItem:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
