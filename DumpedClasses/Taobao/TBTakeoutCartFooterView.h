//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, TBBadgeView, TBTakeoutCartViewModel, TBTakeoutPriceLabel, UIButton, UIImageView, UILabel;

@interface TBTakeoutCartFooterView : UIView
{
    _Bool _showDetail;
    TBTakeoutCartViewModel *_viewModel;
    UIImageView *_cartIconView;
    UIButton *_detailButton;
    TBTakeoutPriceLabel *_priceLabel;
    UILabel *_agentFeeLabel;
    CDUnknownBlockType _showCartDetail;
    CDUnknownBlockType _createOrder;
    UIButton *_createOrderButton;
    NSString *_spm;
    UILabel *_emptyLabel;
    TBBadgeView *_badgeView;
}

@property(retain, nonatomic) TBBadgeView *badgeView; // @synthesize badgeView=_badgeView;
@property(retain, nonatomic) UILabel *emptyLabel; // @synthesize emptyLabel=_emptyLabel;
@property(retain, nonatomic) NSString *spm; // @synthesize spm=_spm;
@property(retain, nonatomic) UIButton *createOrderButton; // @synthesize createOrderButton=_createOrderButton;
@property(nonatomic) _Bool showDetail; // @synthesize showDetail=_showDetail;
@property(copy, nonatomic) CDUnknownBlockType createOrder; // @synthesize createOrder=_createOrder;
@property(copy, nonatomic) CDUnknownBlockType showCartDetail; // @synthesize showCartDetail=_showCartDetail;
@property(retain, nonatomic) UILabel *agentFeeLabel; // @synthesize agentFeeLabel=_agentFeeLabel;
@property(retain, nonatomic) TBTakeoutPriceLabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UIButton *detailButton; // @synthesize detailButton=_detailButton;
@property(retain, nonatomic) UIImageView *cartIconView; // @synthesize cartIconView=_cartIconView;
@property(nonatomic) __weak TBTakeoutCartViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (id)cartPageName;
- (void)createOrder:(id)arg1;
- (void)showDetail:(id)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

