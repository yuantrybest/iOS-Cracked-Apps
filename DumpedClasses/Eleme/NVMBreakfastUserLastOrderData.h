//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface NVMBreakfastUserLastOrderData : NSObject
{
    NSString *_name;
    NSString *_phoneNo;
    NSString *_companyName;
    long long _companyId;
    long long _takeawayId;
    NSString *_takeawayTime;
}

@property(nonatomic) NSString *takeawayTime; // @synthesize takeawayTime=_takeawayTime;
@property(nonatomic) long long takeawayId; // @synthesize takeawayId=_takeawayId;
@property(nonatomic) long long companyId; // @synthesize companyId=_companyId;
@property(copy, nonatomic) NSString *companyName; // @synthesize companyName=_companyName;
@property(copy, nonatomic) NSString *phoneNo; // @synthesize phoneNo=_phoneNo;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;

@end

