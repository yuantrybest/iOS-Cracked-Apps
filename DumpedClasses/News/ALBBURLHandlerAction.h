//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface ALBBURLHandlerAction : NSObject
{
    NSString *_type;
    NSDictionary *_parameters;
}

+ (id)actionWithClass:(Class)arg1 parameters:(id)arg2;
+ (id)actionWithDescriptor:(id)arg1;
@property(copy, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)debugDescription;
- (_Bool)handleURL:(id)arg1 context:(id)arg2;

@end
