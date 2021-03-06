//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

#import "NSCoding.h"

@class NSString;

@interface HLBizSourceModel : TBJSONModel <NSCoding>
{
    _Bool _subScribed;
    unsigned long long _bizSourceId;
    NSString *_icon;
    NSString *_name;
    NSString *_detailUrl;
    unsigned long long _subScribeCount;
    NSString *_identity;
}

+ (id)jsonToModelKeyMapDictionary;
@property(retain, nonatomic) NSString *identity; // @synthesize identity=_identity;
@property(nonatomic) _Bool subScribed; // @synthesize subScribed=_subScribed;
@property(nonatomic) unsigned long long subScribeCount; // @synthesize subScribeCount=_subScribeCount;
@property(retain, nonatomic) NSString *detailUrl; // @synthesize detailUrl=_detailUrl;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(nonatomic) unsigned long long bizSourceId; // @synthesize bizSourceId=_bizSourceId;
- (void).cxx_destruct;
- (void)updateWithModel:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

