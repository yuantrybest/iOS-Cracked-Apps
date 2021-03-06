//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSONModel.h"

@class NSNumber<Optional>, NSString<Optional>;

@interface ONECarIconModel : JSONModel
{
    NSString<Optional> *_name;
    NSString<Optional> *_menuId;
    NSString<Optional> *_carIcon;
    NSNumber<Optional> *_startTime;
    NSNumber<Optional> *_endTime;
    NSNumber<Optional> *_id;
    NSNumber<Optional> *_flipStatus;
    NSNumber<Optional> *_iconFlipStatus;
    NSString<Optional> *_mapIcon;
}

@property(copy, nonatomic) NSString<Optional> *mapIcon; // @synthesize mapIcon=_mapIcon;
@property(retain, nonatomic) NSNumber<Optional> *iconFlipStatus; // @synthesize iconFlipStatus=_iconFlipStatus;
@property(retain, nonatomic) NSNumber<Optional> *flipStatus; // @synthesize flipStatus=_flipStatus;
@property(retain, nonatomic) NSNumber<Optional> *id; // @synthesize id=_id;
@property(retain, nonatomic) NSNumber<Optional> *endTime; // @synthesize endTime=_endTime;
@property(retain, nonatomic) NSNumber<Optional> *startTime; // @synthesize startTime=_startTime;
@property(copy, nonatomic) NSString<Optional> *carIcon; // @synthesize carIcon=_carIcon;
@property(copy, nonatomic) NSString<Optional> *menuId; // @synthesize menuId=_menuId;
@property(copy, nonatomic) NSString<Optional> *name; // @synthesize name=_name;
- (void).cxx_destruct;

@end

