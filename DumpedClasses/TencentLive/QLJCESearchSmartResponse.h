//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSArray, NSString;

@interface QLJCESearchSmartResponse : JceObjectV2
{
    int jcev2_p_0_r_errCode;
    NSArray *jcev2_p_1_o_itemList__b0x9i_VONSString;
    NSArray *jcev2_p_2_o_smartItemList__b0x9i_VOQLJCESearchSmartItem;
    NSString *jcev2_p_3_o_reportKey;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_reportKey, setter=setJce_reportKey:) NSString *jcev2_p_3_o_reportKey; // @synthesize jcev2_p_3_o_reportKey;
@property(retain, nonatomic, getter=jce_smartItemList, setter=setJce_smartItemList:) NSArray *jcev2_p_2_o_smartItemList__b0x9i_VOQLJCESearchSmartItem; // @synthesize jcev2_p_2_o_smartItemList__b0x9i_VOQLJCESearchSmartItem;
@property(retain, nonatomic, getter=jce_itemList, setter=setJce_itemList:) NSArray *jcev2_p_1_o_itemList__b0x9i_VONSString; // @synthesize jcev2_p_1_o_itemList__b0x9i_VONSString;
@property(nonatomic, getter=jce_errCode, setter=setJce_errCode:) int jcev2_p_0_r_errCode; // @synthesize jcev2_p_0_r_errCode;
- (void).cxx_destruct;
- (id)init;

@end

