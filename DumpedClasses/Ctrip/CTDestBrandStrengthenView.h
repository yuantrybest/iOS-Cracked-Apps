//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CTRootViewController, UIButton, UIImageView, UILabel;

@interface CTDestBrandStrengthenView : UIView
{
    id <CTDestBrandStrengthenViewDelegate> _brandDelegate;
    UIImageView *_iconIv;
    UIImageView *_bgIv;
    UILabel *_desLb;
    UIButton *_closeBt;
    UIButton *_destinationBt;
    UIButton *_goToBtn;
    CTRootViewController *_superVC;
}

+ (_Bool)showInVC:(id)arg1 showSupeView:(id)arg2;
@property(retain, nonatomic) CTRootViewController *superVC; // @synthesize superVC=_superVC;
@property(retain, nonatomic) UIButton *goToBtn; // @synthesize goToBtn=_goToBtn;
@property(retain, nonatomic) UIButton *destinationBt; // @synthesize destinationBt=_destinationBt;
@property(retain, nonatomic) UIButton *closeBt; // @synthesize closeBt=_closeBt;
@property(retain, nonatomic) UILabel *desLb; // @synthesize desLb=_desLb;
@property(retain, nonatomic) UIImageView *bgIv; // @synthesize bgIv=_bgIv;
@property(retain, nonatomic) UIImageView *iconIv; // @synthesize iconIv=_iconIv;
@property(nonatomic) __weak id <CTDestBrandStrengthenViewDelegate> brandDelegate; // @synthesize brandDelegate=_brandDelegate;
- (void).cxx_destruct;
- (void)destinationTapped:(id)arg1;
- (void)closeTapped:(id)arg1;
- (id)handleAttributedString;
- (id)initWithFrame:(struct CGRect)arg1;

@end

