//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSONModel.h"

@class NSNumber, NSString, NSString<Optional>;

@interface SHelpCallCarPassengerModel : JSONModel
{
    _Bool _isMyself;
    NSString<Optional> *_name;
    NSString *_phone;
    NSNumber *_type;
}

@property(retain, nonatomic) NSNumber *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *phone; // @synthesize phone=_phone;
@property(copy, nonatomic) NSString<Optional> *name; // @synthesize name=_name;
@property(nonatomic) _Bool isMyself; // @synthesize isMyself=_isMyself;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)init;

@end

