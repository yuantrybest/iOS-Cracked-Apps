//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface TTArticleSearchKeyword : NSObject
{
    NSString *_keyword;
    NSString *_typeString;
}

- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToSearchKeyword:(id)arg1;
@property(readonly, nonatomic) NSString *typeString;
@property(readonly, nonatomic) long long type;
@property(readonly, nonatomic) NSString *keyword;
- (id)initWithKeyword:(id)arg1 typeString:(id)arg2;

@end

