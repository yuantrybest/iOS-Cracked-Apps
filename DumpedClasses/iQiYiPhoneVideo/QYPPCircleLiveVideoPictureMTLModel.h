//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class NSString;

@interface QYPPCircleLiveVideoPictureMTLModel : MTLModel <MTLJSONSerializing>
{
    NSString *_detailPage;
    NSString *_listPage;
    NSString *_smallPage;
    NSString *_shape;
    NSString *_size;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(copy, nonatomic) NSString *size; // @synthesize size=_size;
@property(copy, nonatomic) NSString *shape; // @synthesize shape=_shape;
@property(copy, nonatomic) NSString *smallPage; // @synthesize smallPage=_smallPage;
@property(copy, nonatomic) NSString *listPage; // @synthesize listPage=_listPage;
@property(copy, nonatomic) NSString *detailPage; // @synthesize detailPage=_detailPage;
- (void).cxx_destruct;

@end

