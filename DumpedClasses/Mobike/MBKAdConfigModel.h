//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSMutableArray;

@interface MBKAdConfigModel : NSObject <NSCoding>
{
    long long _version;
    NSMutableArray *_arrayInfo;
    double _lastShowDate;
    long long _lastAdIndex;
    long long _showCount;
    long long _alreadyShowCount;
}

@property(nonatomic) long long alreadyShowCount; // @synthesize alreadyShowCount=_alreadyShowCount;
@property(nonatomic) long long showCount; // @synthesize showCount=_showCount;
@property(nonatomic) long long lastAdIndex; // @synthesize lastAdIndex=_lastAdIndex;
@property(nonatomic) double lastShowDate; // @synthesize lastShowDate=_lastShowDate;
@property(retain, nonatomic) NSMutableArray *arrayInfo; // @synthesize arrayInfo=_arrayInfo;
@property(nonatomic) long long version; // @synthesize version=_version;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)init;

@end

