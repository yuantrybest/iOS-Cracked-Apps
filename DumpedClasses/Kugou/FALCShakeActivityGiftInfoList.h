//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FAModel.h"

@class NSString;

@interface FALCShakeActivityGiftInfoList : FAModel
{
    int _giftId;
    int _giftType;
    int _giftNum;
    NSString *_giftUrl;
    NSString *_giftName;
    NSString *_coin;
}

@property(copy, nonatomic) NSString *coin; // @synthesize coin=_coin;
@property(nonatomic) int giftNum; // @synthesize giftNum=_giftNum;
@property(copy, nonatomic) NSString *giftName; // @synthesize giftName=_giftName;
@property(nonatomic) int giftType; // @synthesize giftType=_giftType;
@property(copy, nonatomic) NSString *giftUrl; // @synthesize giftUrl=_giftUrl;
@property(nonatomic) int giftId; // @synthesize giftId=_giftId;
- (void).cxx_destruct;

@end

