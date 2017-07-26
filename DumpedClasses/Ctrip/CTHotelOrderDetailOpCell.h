//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTHotelOrderDetailCardCell.h"

@class CTChateHeadImageView, CTHotelOrderDetailCacheBean, UIButton, UILabel;

@interface CTHotelOrderDetailOpCell : CTHotelOrderDetailCardCell
{
    id <CTHotelOrderDetailOpCellDelegate> _delegate;
    UIButton *_netStarView;
    CTChateHeadImageView *_iconView;
    UILabel *_lbTitle;
    UILabel *_lbDesp;
    UILabel *_lbBubble;
    UILabel *_lbUnReadMsg;
    CTHotelOrderDetailCacheBean *_mCacheBean;
}

+ (double)getCellHeight:(id)arg1;
@property(nonatomic) __weak CTHotelOrderDetailCacheBean *mCacheBean; // @synthesize mCacheBean=_mCacheBean;
@property(copy, nonatomic) UILabel *lbUnReadMsg; // @synthesize lbUnReadMsg=_lbUnReadMsg;
@property(copy, nonatomic) UILabel *lbBubble; // @synthesize lbBubble=_lbBubble;
@property(copy, nonatomic) UILabel *lbDesp; // @synthesize lbDesp=_lbDesp;
@property(copy, nonatomic) UILabel *lbTitle; // @synthesize lbTitle=_lbTitle;
@property(copy, nonatomic) CTChateHeadImageView *iconView; // @synthesize iconView=_iconView;
@property(copy, nonatomic) UIButton *netStarView; // @synthesize netStarView=_netStarView;
@property(nonatomic) __weak id <CTHotelOrderDetailOpCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)intelliViewAction;
- (void)netStarViewAction;
- (void)updateUnReadMsg:(id)arg1;
- (void)setNetStarData:(id)arg1 isVersionB:(_Bool)arg2;
- (void)setData:(id)arg1;
- (void)initView;

@end
