//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSMutableArray, NSString, PriceType;

@interface FlightXProductConfirmPagePriceItemInfomationModel : CTBusinessBean
{
    int _tripType;
    int _extendType;
    int _serviceType;
    int _passengerType;
    int _unitType;
    NSString *_name;
    NSString *_xProductID;
    NSString *_productCode;
    NSString *_logoImgURL;
    PriceType *_unitPrice;
    NSString *_responseJsonString;
    NSMutableArray *_remarkList;
    NSString *_packageString;
}

@property(copy, nonatomic) NSString *packageString; // @synthesize packageString=_packageString;
@property(retain, nonatomic) NSMutableArray *remarkList; // @synthesize remarkList=_remarkList;
@property(copy, nonatomic) NSString *responseJsonString; // @synthesize responseJsonString=_responseJsonString;
@property(retain, nonatomic) PriceType *unitPrice; // @synthesize unitPrice=_unitPrice;
@property(nonatomic) int unitType; // @synthesize unitType=_unitType;
@property(nonatomic) int passengerType; // @synthesize passengerType=_passengerType;
@property(nonatomic) int serviceType; // @synthesize serviceType=_serviceType;
@property(nonatomic) int extendType; // @synthesize extendType=_extendType;
@property(nonatomic) int tripType; // @synthesize tripType=_tripType;
@property(copy, nonatomic) NSString *logoImgURL; // @synthesize logoImgURL=_logoImgURL;
@property(copy, nonatomic) NSString *productCode; // @synthesize productCode=_productCode;
@property(copy, nonatomic) NSString *xProductID; // @synthesize xProductID=_xProductID;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)getAnnotationArray;
- (id)init;

@end

