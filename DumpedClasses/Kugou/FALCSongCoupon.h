//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FAModel.h"

@class FALCSongCouponModel, NSArray<FALCSongCouponModel><Optional>;

@interface FALCSongCoupon : FAModel
{
    long long _isUseable;
    NSArray<FALCSongCouponModel><Optional> *_list;
    FALCSongCouponModel *_canUseCard;
}

@property(retain, nonatomic) FALCSongCouponModel *canUseCard; // @synthesize canUseCard=_canUseCard;
@property(retain, nonatomic) NSArray<FALCSongCouponModel><Optional> *list; // @synthesize list=_list;
@property(nonatomic) long long isUseable; // @synthesize isUseable=_isUseable;
- (void).cxx_destruct;

@end
