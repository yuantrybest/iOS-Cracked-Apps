//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton;

@interface TBRecmdCard : UIView
{
    id _provider;
    UIButton *_itemBtn;
}

+ (void)labelAlignTop:(id)arg1;
+ (double)cardHeight;
+ (double)cardWidth;
@property(retain, nonatomic) UIButton *itemBtn; // @synthesize itemBtn=_itemBtn;
@property(nonatomic) __weak id provider; // @synthesize provider=_provider;
- (void).cxx_destruct;
- (void)updateLayout;
- (void)prepareForReuse;
- (void)buttonClicked:(id)arg1;
- (id)init;

@end

