//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CCRBaseReqVO.h"

@class NSString;

@interface CCRApplyAppointDeductCheckReqVO : CCRBaseReqVO
{
    NSString *_cardId;
    NSString *_deductDay;
    NSString *_deductAmount;
}

@property(retain, nonatomic) NSString *deductAmount; // @synthesize deductAmount=_deductAmount;
@property(retain, nonatomic) NSString *deductDay; // @synthesize deductDay=_deductDay;
@property(retain, nonatomic) NSString *cardId; // @synthesize cardId=_cardId;
- (void).cxx_destruct;

@end
