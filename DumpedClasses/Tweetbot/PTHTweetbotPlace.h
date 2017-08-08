//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PTHTweetbotObject.h"

@class NSString, NSURL, PTHTweetbotBoundingBox;

@interface PTHTweetbotPlace : PTHTweetbotObject
{
    NSString *_placeID;
    NSString *_name;
    NSString *_fullName;
    NSString *_streetAddress;
    NSString *_locality;
    NSString *_region;
    NSString *_iso3;
    NSString *_postalCode;
    NSString *_phone;
    NSString *_countryCode;
    NSString *_country;
    NSString *_placeTypeString;
    PTHTweetbotPlace *_containedWithin;
    PTHTweetbotBoundingBox *_boundingBox;
}

+ (id)newWithAccount:(id)arg1 dictionary:(id)arg2;
+ (void)createPlace:(id)arg1 token:(id)arg2 result:(CDUnknownBlockType)arg3;
+ (void)findSimilarPlaces:(id)arg1 result:(CDUnknownBlockType)arg2;
+ (void)cachedPlacesForAccount:(id)arg1 result:(CDUnknownBlockType)arg2;
+ (void)cachePlace:(id)arg1;
+ (id)placeTypeStringFromPlaceType:(int)arg1;
@property(retain, nonatomic) PTHTweetbotBoundingBox *boundingBox; // @synthesize boundingBox=_boundingBox;
@property(retain, nonatomic) PTHTweetbotPlace *containedWithin; // @synthesize containedWithin=_containedWithin;
@property(copy, nonatomic) NSString *placeTypeString; // @synthesize placeTypeString=_placeTypeString;
@property(copy, nonatomic) NSString *country; // @synthesize country=_country;
@property(copy, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(copy, nonatomic) NSString *phone; // @synthesize phone=_phone;
@property(copy, nonatomic) NSString *postalCode; // @synthesize postalCode=_postalCode;
@property(copy, nonatomic) NSString *iso3; // @synthesize iso3=_iso3;
@property(copy, nonatomic) NSString *region; // @synthesize region=_region;
@property(copy, nonatomic) NSString *locality; // @synthesize locality=_locality;
@property(copy, nonatomic) NSString *streetAddress; // @synthesize streetAddress=_streetAddress;
@property(copy, nonatomic) NSString *fullName; // @synthesize fullName=_fullName;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *placeID; // @synthesize placeID=_placeID;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (long long)compare:(id)arg1;
@property(readonly, nonatomic) __weak NSURL *googleMapsURL;
@property(nonatomic) int placeType;
- (void)refresh:(CDUnknownBlockType)arg1;
- (void)updateFromDictionary:(id)arg1;
- (void)_addEntriesToDictionary:(id)arg1;

@end
