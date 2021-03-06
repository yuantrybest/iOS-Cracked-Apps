//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NMBaseRequest.h"

@class NSString;

@interface NMSearchBestMatchRequest : NMBaseRequest
{
    _Bool _queryCorrect;
    NSString *_keyword;
    NSString *_scene;
}

@property(copy, nonatomic) NSString *scene; // @synthesize scene=_scene;
@property(readonly, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
@property(nonatomic) _Bool queryCorrect; // @synthesize queryCorrect=_queryCorrect;
- (void).cxx_destruct;
- (id)initWithKeyword:(id)arg1;

@end

